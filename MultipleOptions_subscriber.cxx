/* MultipleOptions_subscriber.cxx

A subscription example

This file is derived from code automatically generated by the rtiddsgen
command:

rtiddsgen -language C++03 -example <arch> MultipleOptions.idl

Example subscription of type RadarCommand automatically generated by
'rtiddsgen'. To test them, follow these steps:

(1) Compile this file and the example publication.

(2) Start the subscription on the same domain used for RTI Data Distribution
Service  with the command
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

On UNIX systems:

objs/<arch>/MultipleOptions_publisher <domain_id>
objs/<arch>/MultipleOptions_subscriber <domain_id>

On Windows systems:

objs\<arch>\MultipleOptions_publisher <domain_id>
objs\<arch>\MultipleOptions_subscriber <domain_id>

*/

#include <algorithm>
#include <iostream>

#include <dds/sub/ddssub.hpp>
#include <dds/core/ddscore.hpp>
// Or simply include <dds/dds.hpp> 

#include "MultipleOptions.hpp"

class RadarCommandReaderListener : public dds::sub::NoOpDataReaderListener<RadarCommand> {
public:

	RadarCommandReaderListener() : count_(0)
	{
	}

	void on_data_available(dds::sub::DataReader<RadarCommand>& reader)
	{
		// Take all samples
		dds::sub::LoanedSamples<RadarCommand> samples = reader.take();

		for (dds::sub::LoanedSamples<RadarCommand>::iterator sample_it = samples.begin();
			sample_it != samples.end(); sample_it++) {

			if (sample_it->info().valid()) {
				count_++;
				std::cout << "Received message " << sample_it->data().sequenceNumber() << " from ";
				std::cout << sample_it->data().timeStamp().day() << "/" << sample_it->data().timeStamp().month();
				std::cout << "/" << sample_it->data().timeStamp().year() << " kind ";
				std::cout << sample_it->data().radarInfo()._d() << ". Command values are ";
				std::cout << sample_it->data().radarInfo() << std::endl;
				//	std::cout << sample_it->data() << std::endl;
			}
		}
	}

	int count() const
	{
		return count_;
	}

private:
	int count_;
};

void subscriber_main(int domain_id, int sample_count)
{
	// Create a DomainParticipant with default Qos
	dds::domain::DomainParticipant participant(domain_id);

	// Create a Topic -- and automatically register the type
	dds::topic::Topic<RadarCommand> topic(participant, "Example RadarCommand");

	// Create a DataReader with default Qos (Subscriber created in-line)
	RadarCommandReaderListener listener;
	dds::sub::DataReader<RadarCommand> reader(
		dds::sub::Subscriber(participant),
		topic,
		dds::core::QosProvider::Default().datareader_qos(),
		&listener,
		dds::core::status::StatusMask::data_available());

	while (listener.count() < sample_count || sample_count == 0) {
		std::cout << "RadarCommand subscriber sleeping for 4 sec..." << std::endl;

		rti::util::sleep(dds::core::Duration(4));
	}

	// Unset the listener to allow the reader destruction
	// (rti::core::ListenerBinder can do this automatically)
	reader.listener(NULL, dds::core::status::StatusMask::none());
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
		subscriber_main(domain_id, sample_count);
	}
	catch (const std::exception& ex) {
		// This will catch DDS exceptions
		std::cerr << "Exception in subscriber_main(): " << ex.what() << std::endl;
		return -1;
	}

	// RTI Connext provides a finalize_participant_factory() method
	// if you want to release memory used by the participant factory singleton.
	// Uncomment the following line to release the singleton:
	//
	// dds::domain::DomainParticipant::finalize_participant_factory();

	return 0;
}

