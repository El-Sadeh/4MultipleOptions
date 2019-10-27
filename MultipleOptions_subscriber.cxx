
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

			if (sample_it->info().valid()) 
			{
				count_++;
				std::cout << "Received message " << sample_it->data().sequenceNumber() << " from ";
				std::cout << std::setfill('0') << std::setw(2) << sample_it->data().timeStamp().day()
					<< "/" << sample_it->data().timeStamp().month() << "/";
				std::cout << sample_it->data().timeStamp().year() << " at ";
				std::cout << std::setfill('0') << std::setw(2) << sample_it->data().timeStamp().hour()
					<< ":" << sample_it->data().timeStamp().minutes() << ":" << sample_it->data().timeStamp().sec();
				std::cout << " and " << sample_it->data().timeStamp().milisec() << " Mili-seconds, of kind ";
				std::cout << sample_it->data().radarInfo()._d() << ". Command values are: ";
				
				//now if it's a TRACK data, type it.
				if (sample_it->data().radarInfo()._d() == Options::TRACK)
					std::cout << sample_it->data().radarInfo().trackInfo();
				else					
					std::cout << sample_it->data().radarInfo().searchInfo();
				std::cout <<"."<<  std::endl;
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

