/* MultipleOptions_publisher.cxx

A publication of data of type RadarCommand

This file is derived from code automatically generated by the rtiddsgen
command:

rtiddsgen -language C++03 -example <arch> MultipleOptions.idl

Example publication of type RadarCommand automatically generated by
'rtiddsgen'. To test them follow these steps:

(1) Compile this file and the example subscription.

(2) Start the subscription on the same domain used for RTI Data Distribution
Service with the command
objs/<arch>/MultipleOptions_subscriber <domain_id> <sample_count>

(3) Start the publication on the same domain used for RTI Data Distribution
Service with the command
objs/<arch>/MultipleOptions_publisher <domain_id> <sample_count>

(4) [Optional] Specify the list of discovery initial peers and
multicast receive addresses via an environment variable or a file
(in the current working directory) called NDDS_DISCOVERY_PEERS.

You can run any number of publishers and subscribers programs, and can
add and remove them dynamically from the domain.

Example:

To run the example application on domain <domain_id>:

On Unix:

objs/<arch>/MultipleOptions_publisher <domain_id>
objs/<arch>/MultipleOptions_subscriber <domain_id>

On Windows:

objs\<arch>\MultipleOptions_publisher <domain_id>
objs\<arch>\MultipleOptions_subscriber <domain_id>
*/

#include <iostream>

#include <dds/pub/ddspub.hpp>
#include <rti/util/util.hpp> // for sleep()

#include "MultipleOptions.hpp"

void publisher_main(int domain_id, int sample_count)
{
	// Create a DomainParticipant with default Qos
	dds::domain::DomainParticipant participant(domain_id);

	// Create a Topic -- and automatically register the type
	dds::topic::Topic<RadarCommand> topic(participant, "Example RadarCommand");

	// Create a DataWriter with default Qos (Publisher created in-line)
	dds::pub::DataWriter<RadarCommand> writer(dds::pub::Publisher(participant), topic);

	RadarCommand sample;

	/*  Generatnig time stamp */
	std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
	time_t tt = std::chrono::system_clock::to_time_t(now);
	tm local_tm = *localtime(&tt);
	int year = local_tm.tm_year + 1900;

	/* Allocating the time stamp to day, month and year */
	sample.timeStamp().year(year);
	sample.timeStamp().month(local_tm.tm_mon + 1);
	sample.timeStamp().day(local_tm.tm_mday);
	int randNum;
	float rndFltNum;
	//starting the write() loop
	for (int count = 0; count < sample_count || sample_count == 0; count++) {
		// Modify the data to be written here

		sample.sequenceNumber(count); //The count becomes the sequence number
		if ((count % 2) == 0) // means (arbitrarily) that this is a SEARCH message
		{
			sample.radarInfo()._d(Options::SEARCH); //_d is the discriminator!

			//Allocate some random values into the search info
			sample.radarInfo().searchInfo().alt(std::rand());

			//creating a nice long random float number for the lat
			randNum = std::rand();
			rndFltNum = (static_cast <float>(randNum * 1491) / 1000000);
			sample.radarInfo().searchInfo().lat(rndFltNum);

			//creating a random float number for the longt
			randNum = std::rand();
			rndFltNum = (static_cast <float>(randNum * 1826) / 1000000);
			sample.radarInfo().searchInfo().longt(rndFltNum);
		}
		else // means(arbitrarily) that this is a TRACK message
		{
			sample.radarInfo()._d(Options::TRACK); //_d is the discriminator!

			////Allocate some random values into the track info
			sample.radarInfo().trackInfo().trackID(std::rand());

			//generating a random priority
			randNum = (std::rand() % 3);
			Priority temp;
			switch (randNum)
			{
			case 0:
				temp = Priority::low;
			case 1:
				temp = Priority::medium;
			case 2:
				temp = Priority::high;
			default:
				temp = Priority::low;
			};


			// the next line didnt work!!!!
			//Priority temp = static_cast<Priority> (randNum); //creating a random priority
			sample.radarInfo().trackInfo().priority(temp);
		}
		std::cout << "Writing RadarCommand, count " << count << std::endl;
		writer.write(sample);

		rti::util::sleep(dds::core::Duration(1));
	}
}

int main(int argc, char *argv[])
{

	int domain_id = 0;
	int sample_count = 0; // infinite loop

	if (argc >= 2) {
		domain_id = atoi(argv[1]);
	}
	if (argc >= 3) {
		sample_count = atoi(argv[2]);
	}

	// To turn on additional logging, include <rti/config/Logger.hpp> and
	// uncomment the following line:
	// rti::config::Logger::instance().verbosity(rti::config::Verbosity::STATUS_ALL);

	try {
		publisher_main(domain_id, sample_count);
	}
	catch (const std::exception& ex) {
		// This will catch DDS exceptions
		std::cerr << "Exception in publisher_main(): " << ex.what() << std::endl;
		return -1;
	}

	// RTI Connext provides a finalize_participant_factory() method
	// if you want to release memory used by the participant factory singleton.
	// Uncomment the following line to release the singleton:
	//
	// dds::domain::DomainParticipant::finalize_participant_factory();

	return 0;
}

