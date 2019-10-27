

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MultipleOptions.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "MultipleOptions.hpp"
#include "MultipleOptionsPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

std::ostream& operator << (std::ostream& o,const Options& sample)
{
    rti::util::StreamFlagSaver flag_saver (o);
    switch(sample.underlying()){
        case Options::SEARCH:
        o << "Options::SEARCH" << " ";
        break;
        case Options::TRACK:
        o << "Options::TRACK" << " ";
        break;
    }
    return o;
}
std::ostream& operator << (std::ostream& o,const Priority& sample)
{
    rti::util::StreamFlagSaver flag_saver (o);
    switch(sample.underlying()){
        case Priority::LOW:
        o << "Priority::LOW" << " ";
        break;
        case Priority::MEDUIM:
        o << "Priority::MEDUIM" << " ";
        break;
        case Priority::HIGH:
        o << "Priority::HIGH" << " ";
        break;
    }
    return o;
}

// ---- SearchType: 

SearchType::SearchType() :
    m_lat_ (0.0f) ,
    m_lon_ (0.0f) ,
    m_alt_ (0)  {
}   

SearchType::SearchType (
    float lat,
    float lon,
    int16_t alt)
    :
        m_lat_( lat ),
        m_lon_( lon ),
        m_alt_( alt ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
SearchType::SearchType(SearchType&& other_) OMG_NOEXCEPT  :m_lat_ (std::move(other_.m_lat_))
,
m_lon_ (std::move(other_.m_lon_))
,
m_alt_ (std::move(other_.m_alt_))
{
} 

SearchType& SearchType::operator=(SearchType&&  other_) OMG_NOEXCEPT {
    SearchType tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void SearchType::swap(SearchType& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_lat_, other_.m_lat_);
    swap(m_lon_, other_.m_lon_);
    swap(m_alt_, other_.m_alt_);
}  

bool SearchType::operator == (const SearchType& other_) const {
    if (m_lat_ != other_.m_lat_) {
        return false;
    }
    if (m_lon_ != other_.m_lon_) {
        return false;
    }
    if (m_alt_ != other_.m_alt_) {
        return false;
    }
    return true;
}
bool SearchType::operator != (const SearchType& other_) const {
    return !this->operator ==(other_);
}

// --- Getters and Setters: -------------------------------------------------
float& SearchType::lat() OMG_NOEXCEPT {
    return m_lat_;
}

const float& SearchType::lat() const OMG_NOEXCEPT {
    return m_lat_;
}

void SearchType::lat(float value) {
    m_lat_ = value;
}

float& SearchType::lon() OMG_NOEXCEPT {
    return m_lon_;
}

const float& SearchType::lon() const OMG_NOEXCEPT {
    return m_lon_;
}

void SearchType::lon(float value) {
    m_lon_ = value;
}

int16_t& SearchType::alt() OMG_NOEXCEPT {
    return m_alt_;
}

const int16_t& SearchType::alt() const OMG_NOEXCEPT {
    return m_alt_;
}

void SearchType::alt(int16_t value) {
    m_alt_ = value;
}

std::ostream& operator << (std::ostream& o,const SearchType& sample)
{
    rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "lat: " << std::setprecision(9) <<sample.lat()<<", ";
    o << "lon: " << std::setprecision(9) <<sample.lon()<<", ";
    o << "alt: " << sample.alt() ;
    o <<"]";
    return o;
}

// ---- TrackType: 

TrackType::TrackType() :
    m_trackID_ (0) ,
    m_priority_(Priority::get_default())  {
}   

TrackType::TrackType (
    int32_t trackID,
    const Priority& priority)
    :
        m_trackID_( trackID ),
        m_priority_( priority ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
TrackType::TrackType(TrackType&& other_) OMG_NOEXCEPT  :m_trackID_ (std::move(other_.m_trackID_))
,
m_priority_ (std::move(other_.m_priority_))
{
} 

TrackType& TrackType::operator=(TrackType&&  other_) OMG_NOEXCEPT {
    TrackType tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void TrackType::swap(TrackType& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_trackID_, other_.m_trackID_);
    swap(m_priority_, other_.m_priority_);
}  

bool TrackType::operator == (const TrackType& other_) const {
    if (m_trackID_ != other_.m_trackID_) {
        return false;
    }
    if (m_priority_ != other_.m_priority_) {
        return false;
    }
    return true;
}
bool TrackType::operator != (const TrackType& other_) const {
    return !this->operator ==(other_);
}

// --- Getters and Setters: -------------------------------------------------
int32_t& TrackType::trackID() OMG_NOEXCEPT {
    return m_trackID_;
}

const int32_t& TrackType::trackID() const OMG_NOEXCEPT {
    return m_trackID_;
}

void TrackType::trackID(int32_t value) {
    m_trackID_ = value;
}

Priority& TrackType::priority() OMG_NOEXCEPT {
    return m_priority_;
}

const Priority& TrackType::priority() const OMG_NOEXCEPT {
    return m_priority_;
}

void TrackType::priority(const Priority& value) {
    m_priority_ = value;
}

std::ostream& operator << (std::ostream& o,const TrackType& sample)
{
    rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "trackID: " << sample.trackID()<<", ";
    o << "priority: " << sample.priority() ;
    o <<"]";
    return o;
}

// ---- radarUnion: 

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
radarUnion::radarUnion(radarUnion&& other_) OMG_NOEXCEPT 
{
    _d(std::move(other_._d()));
    switch(rti::topic::cdr::integer_case(_d())){
        case (Options::SEARCH):
            {  
                searchInfo( std::move(other_.searchInfo()));
        } break;
        case (Options::TRACK):
            {  
                trackInfo( std::move(other_.trackInfo()));
        } break;

    }

}

radarUnion& radarUnion::operator=(radarUnion&&  other_) OMG_NOEXCEPT {
    radarUnion tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif 

radarUnion::Union_::Union_()  {
}

radarUnion::Union_::Union_(
    const SearchType& searchInfo,
    const TrackType& trackInfo)
    :
        m_searchInfo_( searchInfo ),
        m_trackInfo_( trackInfo ) {
}

radarUnion::radarUnion() :m_d_(default_discriminator())
{
}

void radarUnion::swap(radarUnion& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap (m_d_,other_.m_d_);
    switch(rti::topic::cdr::integer_case(_d())){
        case (Options::SEARCH):
            {  
                swap(m_u_.m_searchInfo_, other_.m_u_.m_searchInfo_);
        } break;
        case (Options::TRACK):
            {  
                swap(m_u_.m_trackInfo_, other_.m_u_.m_trackInfo_);
        } break;

    }
    if (_d() != other_._d()){
        switch(rti::topic::cdr::integer_case(other_._d())){
            case (Options::SEARCH):
                {  
                    swap(m_u_.m_searchInfo_, other_.m_u_.m_searchInfo_);
            } break;
            case (Options::TRACK):
                {  
                    swap(m_u_.m_trackInfo_, other_.m_u_.m_trackInfo_);
            } break;

        }
    }
}  

bool radarUnion::operator == (const radarUnion& other_) const {
    if (_d() != other_._d()){
        return false;
    }
    switch(rti::topic::cdr::integer_case(_d())){
        case (Options::SEARCH):
            {  
                if ( m_u_.m_searchInfo_ != other_.m_u_.m_searchInfo_) {
                    return false;
            }
        } break ;
        case (Options::TRACK):
            {  
                if ( m_u_.m_trackInfo_ != other_.m_u_.m_trackInfo_) {
                    return false;
            }
        } break ;
    }
    return true;
}
bool radarUnion::operator != (const radarUnion& other_) const {
    return !this->operator ==(other_);
}

// --- Getters and Setters: -------------------------------------------------
Options& radarUnion::_d()  {
    return m_d_;
}

const Options& radarUnion::_d() const  {
    return m_d_;
}

void radarUnion::_d(const Options& value) {
    m_d_ = value;
}

SearchType& radarUnion::searchInfo()  {
    if ( _d() != (Options::SEARCH)) {
        throw dds::core::PreconditionNotMetError(
            "radarUnion::searchInfo not selected by the discriminator" );
    }
    return m_u_.m_searchInfo_;
}

const SearchType& radarUnion::searchInfo() const  {
    if ( _d() != (Options::SEARCH)) {
        throw dds::core::PreconditionNotMetError(
            "radarUnion::searchInfo not selected by the discriminator" );
    }
    return m_u_.m_searchInfo_;
}

void radarUnion::searchInfo(const SearchType& value) {
    m_u_.m_searchInfo_ = value;
    m_d_= (Options::SEARCH);
}

TrackType& radarUnion::trackInfo()  {
    if ( _d() != (Options::TRACK)) {
        throw dds::core::PreconditionNotMetError(
            "radarUnion::trackInfo not selected by the discriminator" );
    }
    return m_u_.m_trackInfo_;
}

const TrackType& radarUnion::trackInfo() const  {
    if ( _d() != (Options::TRACK)) {
        throw dds::core::PreconditionNotMetError(
            "radarUnion::trackInfo not selected by the discriminator" );
    }
    return m_u_.m_trackInfo_;
}

void radarUnion::trackInfo(const TrackType& value) {
    m_u_.m_trackInfo_ = value;
    m_d_= (Options::TRACK);
}

std::ostream& operator << (std::ostream& o,const radarUnion& sample)
{
    rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "_d: " << sample._d() <<", ";
    switch(rti::topic::cdr::integer_case(sample._d())){
        case (Options::SEARCH):
            {  
                o << "searchInfo: " << sample.searchInfo()<<", ";
        } break ;
        case (Options::TRACK):
            {  
                o << "trackInfo: " << sample.trackInfo() ;        } break ;

    }
    o <<"]";
    return o;
}

Options radarUnion::default_discriminator() {
    return Options(static_cast<Options::type>(0));
}  

// ---- TimeStampStruct: 

TimeStampStruct::TimeStampStruct() :
    m_milisec_ (0) ,
    m_sec_ (0) ,
    m_minutes_ (0) ,
    m_hour_ (0) ,
    m_day_ (0) ,
    m_month_ (0) ,
    m_year_ (0)  {

}   

TimeStampStruct::TimeStampStruct (
    int16_t milisec,
    int16_t sec,
    int16_t minutes,
    int16_t hour,
    int16_t day,
    int16_t month,
    int16_t year)
    :
        m_milisec_( milisec ),
        m_sec_( sec ),
        m_minutes_( minutes ),
        m_hour_( hour ),
        m_day_( day ),
        m_month_( month ),
        m_year_( year ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
TimeStampStruct::TimeStampStruct(TimeStampStruct&& other_) OMG_NOEXCEPT  :m_milisec_ (std::move(other_.m_milisec_))
,
m_sec_ (std::move(other_.m_sec_))
,
m_minutes_ (std::move(other_.m_minutes_))
,
m_hour_ (std::move(other_.m_hour_))
,
m_day_ (std::move(other_.m_day_))
,
m_month_ (std::move(other_.m_month_))
,
m_year_ (std::move(other_.m_year_))
{
} 

TimeStampStruct& TimeStampStruct::operator=(TimeStampStruct&&  other_) OMG_NOEXCEPT {
    TimeStampStruct tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void TimeStampStruct::swap(TimeStampStruct& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_milisec_, other_.m_milisec_);
    swap(m_sec_, other_.m_sec_);
    swap(m_minutes_, other_.m_minutes_);
    swap(m_hour_, other_.m_hour_);
    swap(m_day_, other_.m_day_);
    swap(m_month_, other_.m_month_);
    swap(m_year_, other_.m_year_);
}  

bool TimeStampStruct::operator == (const TimeStampStruct& other_) const {
    if (m_milisec_ != other_.m_milisec_) {
        return false;
    }
    if (m_sec_ != other_.m_sec_) {
        return false;
    }
    if (m_minutes_ != other_.m_minutes_) {
        return false;
    }
    if (m_hour_ != other_.m_hour_) {
        return false;
    }
    if (m_day_ != other_.m_day_) {
        return false;
    }
    if (m_month_ != other_.m_month_) {
        return false;
    }
    if (m_year_ != other_.m_year_) {
        return false;
    }
    return true;
}
bool TimeStampStruct::operator != (const TimeStampStruct& other_) const {
    return !this->operator ==(other_);
}

TimeStampStruct TimeStampStruct::GenerateTimeStamp()
{
	TimeStampStruct timeStamp;
	std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
	//std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
	time_t timeT = std::chrono::system_clock::to_time_t(now);
	tm local_tm = *localtime(&timeT);
	//start allocating:
	timeStamp.year(local_tm.tm_year + 1900);
	timeStamp.month(local_tm.tm_mon + 1);
	timeStamp.day(local_tm.tm_mday);
	timeStamp.hour(local_tm.tm_hour);
	timeStamp.minutes(local_tm.tm_min);
	timeStamp.sec(local_tm.tm_sec);

	//now the miisec:
	auto nowMs = std::chrono::time_point_cast<std::chrono::milliseconds>(now);
	auto epoch = nowMs.time_since_epoch();
	auto value = std::chrono::duration_cast<std::chrono::milliseconds>(epoch);

	timeStamp.milisec(value.count());
	return timeStamp;
}

// --- Getters and Setters: -------------------------------------------------
int16_t& TimeStampStruct::milisec() OMG_NOEXCEPT {
    return m_milisec_;
}

const int16_t& TimeStampStruct::milisec() const OMG_NOEXCEPT {
    return m_milisec_;
}

void TimeStampStruct::milisec(int16_t value) {
    m_milisec_ = value;
}

int16_t& TimeStampStruct::sec() OMG_NOEXCEPT {
    return m_sec_;
}

const int16_t& TimeStampStruct::sec() const OMG_NOEXCEPT {
    return m_sec_;
}

void TimeStampStruct::sec(int16_t value) {
    m_sec_ = value;
}

int16_t& TimeStampStruct::minutes() OMG_NOEXCEPT {
    return m_minutes_;
}

const int16_t& TimeStampStruct::minutes() const OMG_NOEXCEPT {
    return m_minutes_;
}

void TimeStampStruct::minutes(int16_t value) {
    m_minutes_ = value;
}

int16_t& TimeStampStruct::hour() OMG_NOEXCEPT {
    return m_hour_;
}

const int16_t& TimeStampStruct::hour() const OMG_NOEXCEPT {
    return m_hour_;
}

void TimeStampStruct::hour(int16_t value) {
    m_hour_ = value;
}

int16_t& TimeStampStruct::day() OMG_NOEXCEPT {
    return m_day_;
}

const int16_t& TimeStampStruct::day() const OMG_NOEXCEPT {
    return m_day_;
}

void TimeStampStruct::day(int16_t value) {
    m_day_ = value;
}

int16_t& TimeStampStruct::month() OMG_NOEXCEPT {
    return m_month_;
}

const int16_t& TimeStampStruct::month() const OMG_NOEXCEPT {
    return m_month_;
}

void TimeStampStruct::month(int16_t value) {
    m_month_ = value;
}

int16_t& TimeStampStruct::year() OMG_NOEXCEPT {
    return m_year_;
}

const int16_t& TimeStampStruct::year() const OMG_NOEXCEPT {
    return m_year_;
}

void TimeStampStruct::year(int16_t value) {
    m_year_ = value;
}

std::ostream& operator << (std::ostream& o,const TimeStampStruct& sample)
{
    rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "milisec: " << sample.milisec()<<", ";
    o << "sec: " << sample.sec()<<", ";
    o << "minutes: " << sample.minutes()<<", ";
    o << "hour: " << sample.hour()<<", ";
    o << "day: " << sample.day()<<", ";
    o << "month: " << sample.month()<<", ";
    o << "year: " << sample.year() ;
    o <<"]";
    return o;
}

// ---- RadarCommand: 

RadarCommand::RadarCommand() :
    m_sequenceNumber_ (0)  {
}   

RadarCommand::RadarCommand (
    const TimeStampStruct& timeStamp,
    int32_t sequenceNumber,
    const radarUnion& radarInfo)
    :
        m_timeStamp_( timeStamp ),
        m_sequenceNumber_( sequenceNumber ),
        m_radarInfo_( radarInfo ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
RadarCommand::RadarCommand(RadarCommand&& other_) OMG_NOEXCEPT  :m_timeStamp_ (std::move(other_.m_timeStamp_))
,
m_sequenceNumber_ (std::move(other_.m_sequenceNumber_))
,
m_radarInfo_ (std::move(other_.m_radarInfo_))
{
} 

RadarCommand& RadarCommand::operator=(RadarCommand&&  other_) OMG_NOEXCEPT {
    RadarCommand tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void RadarCommand::swap(RadarCommand& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_timeStamp_, other_.m_timeStamp_);
    swap(m_sequenceNumber_, other_.m_sequenceNumber_);
    swap(m_radarInfo_, other_.m_radarInfo_);
}  

bool RadarCommand::operator == (const RadarCommand& other_) const {
    if (m_timeStamp_ != other_.m_timeStamp_) {
        return false;
    }
    if (m_sequenceNumber_ != other_.m_sequenceNumber_) {
        return false;
    }
    if (m_radarInfo_ != other_.m_radarInfo_) {
        return false;
    }
    return true;
}
bool RadarCommand::operator != (const RadarCommand& other_) const {
    return !this->operator ==(other_);
}

// --- Getters and Setters: -------------------------------------------------
TimeStampStruct& RadarCommand::timeStamp() OMG_NOEXCEPT {
    return m_timeStamp_;
}

const TimeStampStruct& RadarCommand::timeStamp() const OMG_NOEXCEPT {
    return m_timeStamp_;
}

void RadarCommand::timeStamp(const TimeStampStruct& value) {
    m_timeStamp_ = value;
}

int32_t& RadarCommand::sequenceNumber() OMG_NOEXCEPT {
    return m_sequenceNumber_;
}

const int32_t& RadarCommand::sequenceNumber() const OMG_NOEXCEPT {
    return m_sequenceNumber_;
}

void RadarCommand::sequenceNumber(int32_t value) {
    m_sequenceNumber_ = value;
}

radarUnion& RadarCommand::radarInfo() OMG_NOEXCEPT {
    return m_radarInfo_;
}

const radarUnion& RadarCommand::radarInfo() const OMG_NOEXCEPT {
    return m_radarInfo_;
}

void RadarCommand::radarInfo(const radarUnion& value) {
    m_radarInfo_ = value;
}

std::ostream& operator << (std::ostream& o,const RadarCommand& sample)
{
    rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "timeStamp: " << sample.timeStamp()<<", ";
    o << "sequenceNumber: " << sample.sequenceNumber()<<", ";
    o << "radarInfo: " << sample.radarInfo() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        template<>
        struct native_type_code<Options> {
            static DDS_TypeCode * get()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Options_g_tc_members[2]=
                {

                    {
                        (char *)"SEARCH",/* Member name */
                        {
                            0, /* Ignored */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        Options::SEARCH, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"TRACK",/* Member name */
                        {
                            0, /* Ignored */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        Options::TRACK, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode Options_g_tc =
                {{
                        DDS_TK_ENUM,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Options", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        Options_g_tc_members, /* Members */
                        DDS_VM_NONE   /* Type Modifier */        
                    }}; /* Type code for Options*/

                if (is_initialized) {
                    return &Options_g_tc;
                }

                is_initialized = RTI_TRUE;

                return &Options_g_tc;
            }
        }; // native_type_code

        const dds::core::xtypes::EnumType& dynamic_type<Options>::get()
        {
            return static_cast<const dds::core::xtypes::EnumType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(native_type_code<Options>::get())));
        }

        template<>
        struct native_type_code<Priority> {
            static DDS_TypeCode * get()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Priority_g_tc_members[3]=
                {

                    {
                        (char *)"LOW",/* Member name */
                        {
                            0, /* Ignored */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        Priority::LOW, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"MEDUIM",/* Member name */
                        {
                            0, /* Ignored */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        Priority::MEDUIM, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"HIGH",/* Member name */
                        {
                            0, /* Ignored */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        Priority::HIGH, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode Priority_g_tc =
                {{
                        DDS_TK_ENUM,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Priority", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        Priority_g_tc_members, /* Members */
                        DDS_VM_NONE   /* Type Modifier */        
                    }}; /* Type code for Priority*/

                if (is_initialized) {
                    return &Priority_g_tc;
                }

                is_initialized = RTI_TRUE;

                return &Priority_g_tc;
            }
        }; // native_type_code

        const dds::core::xtypes::EnumType& dynamic_type<Priority>::get()
        {
            return static_cast<const dds::core::xtypes::EnumType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(native_type_code<Priority>::get())));
        }

        template<>
        struct native_type_code<SearchType> {
            static DDS_TypeCode * get()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SearchType_g_tc_members[3]=
                {

                    {
                        (char *)"lat",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"lon",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"alt",/* Member name */
                        {
                            2,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode SearchType_g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"SearchType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        SearchType_g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SearchType*/

                if (is_initialized) {
                    return &SearchType_g_tc;
                }

                SearchType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                SearchType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                SearchType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

                is_initialized = RTI_TRUE;

                return &SearchType_g_tc;
            }
        }; // native_type_code

        const dds::core::xtypes::StructType& dynamic_type<SearchType>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(native_type_code<SearchType>::get())));
        }

        template<>
        struct native_type_code<TrackType> {
            static DDS_TypeCode * get()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member TrackType_g_tc_members[2]=
                {

                    {
                        (char *)"trackID",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"priority",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode TrackType_g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"TrackType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        TrackType_g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for TrackType*/

                if (is_initialized) {
                    return &TrackType_g_tc;
                }

                TrackType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                TrackType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&rti::topic::dynamic_type< Priority>::get().native();

                is_initialized = RTI_TRUE;

                return &TrackType_g_tc;
            }
        }; // native_type_code

        const dds::core::xtypes::StructType& dynamic_type<TrackType>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(native_type_code<TrackType>::get())));
        }

        template<>
        struct native_type_code<radarUnion> {
            static DDS_TypeCode * get()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member radarUnion_g_tc_members[2]=
                {

                    {
                        (char *)"searchInfo",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        (Options::SEARCH), /* First label cpp03stl (Options::SEARCH) */
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"trackInfo",/* Member name */
                        {
                            2,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        (Options::TRACK), /* First label cpp03stl (Options::TRACK) */
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode radarUnion_g_tc =
                {{
                        DDS_TK_UNION,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"radarUnion", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        radarUnion_g_tc_members, /* Members */
                        DDS_VM_NONE   /* Type Modifier */        
                    }}; /* Type code for radarUnion*/

                if (is_initialized) {
                    return &radarUnion_g_tc;
                }

                radarUnion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&rti::topic::dynamic_type< SearchType>::get().native();

                radarUnion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&rti::topic::dynamic_type< TrackType>::get().native();

                /* Discriminator type code */
                radarUnion_g_tc._data._typeCode = (RTICdrTypeCode *)&rti::topic::dynamic_type< Options>::get().native();

                is_initialized = RTI_TRUE;

                return &radarUnion_g_tc;
            }
        }; // native_type_code

        const dds::core::xtypes::UnionType& dynamic_type<radarUnion>::get()
        {
            return static_cast<const dds::core::xtypes::UnionType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(native_type_code<radarUnion>::get())));
        }

        template<>
        struct native_type_code<TimeStampStruct> {
            static DDS_TypeCode * get()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member TimeStampStruct_g_tc_members[7]=
                {

                    {
                        (char *)"milisec",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"sec",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"minutes",/* Member name */
                        {
                            2,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"hour",/* Member name */
                        {
                            3,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"day",/* Member name */
                        {
                            4,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"month",/* Member name */
                        {
                            5,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"year",/* Member name */
                        {
                            6,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode TimeStampStruct_g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"TimeStampStruct", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        TimeStampStruct_g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for TimeStampStruct*/

                if (is_initialized) {
                    return &TimeStampStruct_g_tc;
                }

                TimeStampStruct_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

                TimeStampStruct_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

                TimeStampStruct_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

                TimeStampStruct_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

                TimeStampStruct_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

                TimeStampStruct_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

                TimeStampStruct_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

                is_initialized = RTI_TRUE;

                return &TimeStampStruct_g_tc;
            }
        }; // native_type_code

        const dds::core::xtypes::StructType& dynamic_type<TimeStampStruct>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(native_type_code<TimeStampStruct>::get())));
        }

        template<>
        struct native_type_code<RadarCommand> {
            static DDS_TypeCode * get()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RadarCommand_g_tc_members[3]=
                {

                    {
                        (char *)"timeStamp",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"sequenceNumber",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"radarInfo",/* Member name */
                        {
                            2,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode RadarCommand_g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"RadarCommand", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        RadarCommand_g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for RadarCommand*/

                if (is_initialized) {
                    return &RadarCommand_g_tc;
                }

                RadarCommand_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&rti::topic::dynamic_type< TimeStampStruct>::get().native();

                RadarCommand_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                RadarCommand_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&rti::topic::dynamic_type< radarUnion>::get().native();

                is_initialized = RTI_TRUE;

                return &RadarCommand_g_tc;
            }
        }; // native_type_code

        const dds::core::xtypes::StructType& dynamic_type<RadarCommand>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(native_type_code<RadarCommand>::get())));
        }

    }
}  

namespace dds { 
    namespace topic {
        void topic_type_support<SearchType>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            rti::domain::register_type_plugin(
                participant,
                type_name,
                SearchTypePlugin_new,
                SearchTypePlugin_delete);
        }

        std::vector<char>& topic_type_support<SearchType>::to_cdr_buffer(
            std::vector<char>& buffer, const SearchType& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = SearchTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = SearchTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<SearchType>::from_cdr_buffer(SearchType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = SearchTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create SearchType from cdr buffer");
        }

        void topic_type_support<SearchType>::reset_sample(SearchType& sample) 
        {
            rti::topic::reset_sample(sample.lat());
            rti::topic::reset_sample(sample.lon());
            rti::topic::reset_sample(sample.alt());
        }

        void topic_type_support<SearchType>::allocate_sample(SearchType& sample, int, int) 
        {
        }

        void topic_type_support<TrackType>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            rti::domain::register_type_plugin(
                participant,
                type_name,
                TrackTypePlugin_new,
                TrackTypePlugin_delete);
        }

        std::vector<char>& topic_type_support<TrackType>::to_cdr_buffer(
            std::vector<char>& buffer, const TrackType& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = TrackTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = TrackTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<TrackType>::from_cdr_buffer(TrackType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = TrackTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create TrackType from cdr buffer");
        }

        void topic_type_support<TrackType>::reset_sample(TrackType& sample) 
        {
            rti::topic::reset_sample(sample.trackID());
            rti::topic::reset_sample(sample.priority());
        }

        void topic_type_support<TrackType>::allocate_sample(TrackType& sample, int, int) 
        {
            rti::topic::allocate_sample(sample.priority(),  -1, -1);
        }

        void topic_type_support<radarUnion>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            rti::domain::register_type_plugin(
                participant,
                type_name,
                radarUnionPlugin_new,
                radarUnionPlugin_delete);
        }

        std::vector<char>& topic_type_support<radarUnion>::to_cdr_buffer(
            std::vector<char>& buffer, const radarUnion& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = radarUnionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = radarUnionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<radarUnion>::from_cdr_buffer(radarUnion& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = radarUnionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create radarUnion from cdr buffer");
        }

        void topic_type_support<radarUnion>::reset_sample(radarUnion& sample) 
        {
            sample._d() = (Options::SEARCH);
            rti::topic::reset_sample(sample.searchInfo());
            sample._d() = (Options::TRACK);
            rti::topic::reset_sample(sample.trackInfo());

            sample._d() = radarUnion::default_discriminator();
        }

        void topic_type_support<radarUnion>::allocate_sample(radarUnion& sample, int, int) 
        {
            sample._d() = (Options::SEARCH);
            rti::topic::allocate_sample(sample.searchInfo(),  -1, -1);
            sample._d() = (Options::TRACK);
            rti::topic::allocate_sample(sample.trackInfo(),  -1, -1);

            sample._d() = radarUnion::default_discriminator();
        }

        void topic_type_support<TimeStampStruct>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            rti::domain::register_type_plugin(
                participant,
                type_name,
                TimeStampStructPlugin_new,
                TimeStampStructPlugin_delete);
        }

        std::vector<char>& topic_type_support<TimeStampStruct>::to_cdr_buffer(
            std::vector<char>& buffer, const TimeStampStruct& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = TimeStampStructPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = TimeStampStructPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<TimeStampStruct>::from_cdr_buffer(TimeStampStruct& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = TimeStampStructPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create TimeStampStruct from cdr buffer");
        }

        void topic_type_support<TimeStampStruct>::reset_sample(TimeStampStruct& sample) 
        {
            rti::topic::reset_sample(sample.milisec());
            rti::topic::reset_sample(sample.sec());
            rti::topic::reset_sample(sample.minutes());
            rti::topic::reset_sample(sample.hour());
            rti::topic::reset_sample(sample.day());
            rti::topic::reset_sample(sample.month());
            rti::topic::reset_sample(sample.year());
        }

        void topic_type_support<TimeStampStruct>::allocate_sample(TimeStampStruct& sample, int, int) 
        {
        }

        void topic_type_support<RadarCommand>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            rti::domain::register_type_plugin(
                participant,
                type_name,
                RadarCommandPlugin_new,
                RadarCommandPlugin_delete);
        }

        std::vector<char>& topic_type_support<RadarCommand>::to_cdr_buffer(
            std::vector<char>& buffer, const RadarCommand& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = RadarCommandPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = RadarCommandPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<RadarCommand>::from_cdr_buffer(RadarCommand& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = RadarCommandPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create RadarCommand from cdr buffer");
        }

        void topic_type_support<RadarCommand>::reset_sample(RadarCommand& sample) 
        {
            rti::topic::reset_sample(sample.timeStamp());
            rti::topic::reset_sample(sample.sequenceNumber());
            rti::topic::reset_sample(sample.radarInfo());
        }

        void topic_type_support<RadarCommand>::allocate_sample(RadarCommand& sample, int, int) 
        {
            rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            rti::topic::allocate_sample(sample.radarInfo(),  -1, -1);
        }

    }
}  

