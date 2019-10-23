

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
        case Priority::low:
        o << "Priority::low" << " ";
        break;
        case Priority::medium:
        o << "Priority::medium" << " ";
        break;
        case Priority::high:
        o << "Priority::high" << " ";
        break;
    }
    return o;
}

// ---- TypeSearch: 

TypeSearch::TypeSearch() :
    m_lat_ (0.0f) ,
    m_longt_ (0.0f) ,
    m_alt_ (0)  {
}   

TypeSearch::TypeSearch (
    float lat,
    float longt,
    int16_t alt)
    :
        m_lat_( lat ),
        m_longt_( longt ),
        m_alt_( alt ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
TypeSearch::TypeSearch(TypeSearch&& other_) OMG_NOEXCEPT  :m_lat_ (std::move(other_.m_lat_))
,
m_longt_ (std::move(other_.m_longt_))
,
m_alt_ (std::move(other_.m_alt_))
{
} 

TypeSearch& TypeSearch::operator=(TypeSearch&&  other_) OMG_NOEXCEPT {
    TypeSearch tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void TypeSearch::swap(TypeSearch& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_lat_, other_.m_lat_);
    swap(m_longt_, other_.m_longt_);
    swap(m_alt_, other_.m_alt_);
}  

bool TypeSearch::operator == (const TypeSearch& other_) const {
    if (m_lat_ != other_.m_lat_) {
        return false;
    }
    if (m_longt_ != other_.m_longt_) {
        return false;
    }
    if (m_alt_ != other_.m_alt_) {
        return false;
    }
    return true;
}
bool TypeSearch::operator != (const TypeSearch& other_) const {
    return !this->operator ==(other_);
}

// --- Getters and Setters: -------------------------------------------------
float& TypeSearch::lat() OMG_NOEXCEPT {
    return m_lat_;
}

const float& TypeSearch::lat() const OMG_NOEXCEPT {
    return m_lat_;
}

void TypeSearch::lat(float value) {
    m_lat_ = value;
}

float& TypeSearch::longt() OMG_NOEXCEPT {
    return m_longt_;
}

const float& TypeSearch::longt() const OMG_NOEXCEPT {
    return m_longt_;
}

void TypeSearch::longt(float value) {
    m_longt_ = value;
}

int16_t& TypeSearch::alt() OMG_NOEXCEPT {
    return m_alt_;
}

const int16_t& TypeSearch::alt() const OMG_NOEXCEPT {
    return m_alt_;
}

void TypeSearch::alt(int16_t value) {
    m_alt_ = value;
}

std::ostream& operator << (std::ostream& o,const TypeSearch& sample)
{
    rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "lat: " << std::setprecision(9) <<sample.lat()<<", ";
    o << "longt: " << std::setprecision(9) <<sample.longt()<<", ";
    o << "alt: " << sample.alt() ;
    o <<"]";
    return o;
}

// ---- TypeTrack: 

TypeTrack::TypeTrack() :
    m_trackID_ (0) ,
    m_priority_(Priority::get_default())  {
}   

TypeTrack::TypeTrack (
    int32_t trackID,
    const Priority& priority)
    :
        m_trackID_( trackID ),
        m_priority_( priority ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
TypeTrack::TypeTrack(TypeTrack&& other_) OMG_NOEXCEPT  :m_trackID_ (std::move(other_.m_trackID_))
,
m_priority_ (std::move(other_.m_priority_))
{
} 

TypeTrack& TypeTrack::operator=(TypeTrack&&  other_) OMG_NOEXCEPT {
    TypeTrack tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void TypeTrack::swap(TypeTrack& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_trackID_, other_.m_trackID_);
    swap(m_priority_, other_.m_priority_);
}  

bool TypeTrack::operator == (const TypeTrack& other_) const {
    if (m_trackID_ != other_.m_trackID_) {
        return false;
    }
    if (m_priority_ != other_.m_priority_) {
        return false;
    }
    return true;
}
bool TypeTrack::operator != (const TypeTrack& other_) const {
    return !this->operator ==(other_);
}

// --- Getters and Setters: -------------------------------------------------
int32_t& TypeTrack::trackID() OMG_NOEXCEPT {
    return m_trackID_;
}

const int32_t& TypeTrack::trackID() const OMG_NOEXCEPT {
    return m_trackID_;
}

void TypeTrack::trackID(int32_t value) {
    m_trackID_ = value;
}

Priority& TypeTrack::priority() OMG_NOEXCEPT {
    return m_priority_;
}

const Priority& TypeTrack::priority() const OMG_NOEXCEPT {
    return m_priority_;
}

void TypeTrack::priority(const Priority& value) {
    m_priority_ = value;
}

std::ostream& operator << (std::ostream& o,const TypeTrack& sample)
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
    const TypeSearch& searchInfo,
    const TypeTrack& trackInfo)
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

TypeSearch& radarUnion::searchInfo()  {
    if ( _d() != (Options::SEARCH)) {
        throw dds::core::PreconditionNotMetError(
            "radarUnion::searchInfo not selected by the discriminator" );
    }
    return m_u_.m_searchInfo_;
}

const TypeSearch& radarUnion::searchInfo() const  {
    if ( _d() != (Options::SEARCH)) {
        throw dds::core::PreconditionNotMetError(
            "radarUnion::searchInfo not selected by the discriminator" );
    }
    return m_u_.m_searchInfo_;
}

void radarUnion::searchInfo(const TypeSearch& value) {
    m_u_.m_searchInfo_ = value;
    m_d_= (Options::SEARCH);
}

TypeTrack& radarUnion::trackInfo()  {
    if ( _d() != (Options::TRACK)) {
        throw dds::core::PreconditionNotMetError(
            "radarUnion::trackInfo not selected by the discriminator" );
    }
    return m_u_.m_trackInfo_;
}

const TypeTrack& radarUnion::trackInfo() const  {
    if ( _d() != (Options::TRACK)) {
        throw dds::core::PreconditionNotMetError(
            "radarUnion::trackInfo not selected by the discriminator" );
    }
    return m_u_.m_trackInfo_;
}

void radarUnion::trackInfo(const TypeTrack& value) {
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
    m_day_ (0) ,
    m_month_ (0) ,
    m_year_ (0)  {
}   

TimeStampStruct::TimeStampStruct (
    int16_t day,
    int16_t month,
    int16_t year)
    :
        m_day_( day ),
        m_month_( month ),
        m_year_( year ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
TimeStampStruct::TimeStampStruct(TimeStampStruct&& other_) OMG_NOEXCEPT  :m_day_ (std::move(other_.m_day_))
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
    swap(m_day_, other_.m_day_);
    swap(m_month_, other_.m_month_);
    swap(m_year_, other_.m_year_);
}  

bool TimeStampStruct::operator == (const TimeStampStruct& other_) const {
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

// --- Getters and Setters: -------------------------------------------------
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
                        (char *)"low",/* Member name */
                        {
                            0, /* Ignored */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        Priority::low, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"medium",/* Member name */
                        {
                            0, /* Ignored */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        Priority::medium, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"high",/* Member name */
                        {
                            0, /* Ignored */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        Priority::high, 
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
        struct native_type_code<TypeSearch> {
            static DDS_TypeCode * get()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member TypeSearch_g_tc_members[3]=
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
                        (char *)"longt",/* Member name */
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

                static DDS_TypeCode TypeSearch_g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"TypeSearch", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        TypeSearch_g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for TypeSearch*/

                if (is_initialized) {
                    return &TypeSearch_g_tc;
                }

                TypeSearch_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                TypeSearch_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                TypeSearch_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

                is_initialized = RTI_TRUE;

                return &TypeSearch_g_tc;
            }
        }; // native_type_code

        const dds::core::xtypes::StructType& dynamic_type<TypeSearch>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(native_type_code<TypeSearch>::get())));
        }

        template<>
        struct native_type_code<TypeTrack> {
            static DDS_TypeCode * get()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member TypeTrack_g_tc_members[2]=
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

                static DDS_TypeCode TypeTrack_g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"TypeTrack", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        TypeTrack_g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for TypeTrack*/

                if (is_initialized) {
                    return &TypeTrack_g_tc;
                }

                TypeTrack_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                TypeTrack_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&rti::topic::dynamic_type< Priority>::get().native();

                is_initialized = RTI_TRUE;

                return &TypeTrack_g_tc;
            }
        }; // native_type_code

        const dds::core::xtypes::StructType& dynamic_type<TypeTrack>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(native_type_code<TypeTrack>::get())));
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

                radarUnion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&rti::topic::dynamic_type< TypeSearch>::get().native();

                radarUnion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&rti::topic::dynamic_type< TypeTrack>::get().native();

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

                static DDS_TypeCode_Member TimeStampStruct_g_tc_members[3]=
                {

                    {
                        (char *)"day",/* Member name */
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
                        (char *)"month",/* Member name */
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
                        (char *)"year",/* Member name */
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
                        3, /* Number of members */
                        TimeStampStruct_g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for TimeStampStruct*/

                if (is_initialized) {
                    return &TimeStampStruct_g_tc;
                }

                TimeStampStruct_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

                TimeStampStruct_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

                TimeStampStruct_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

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
        void topic_type_support<TypeSearch>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            rti::domain::register_type_plugin(
                participant,
                type_name,
                TypeSearchPlugin_new,
                TypeSearchPlugin_delete);
        }

        std::vector<char>& topic_type_support<TypeSearch>::to_cdr_buffer(
            std::vector<char>& buffer, const TypeSearch& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = TypeSearchPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = TypeSearchPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<TypeSearch>::from_cdr_buffer(TypeSearch& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = TypeSearchPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create TypeSearch from cdr buffer");
        }

        void topic_type_support<TypeSearch>::reset_sample(TypeSearch& sample) 
        {
            rti::topic::reset_sample(sample.lat());
            rti::topic::reset_sample(sample.longt());
            rti::topic::reset_sample(sample.alt());
        }

        void topic_type_support<TypeSearch>::allocate_sample(TypeSearch& sample, int, int) 
        {
        }

        void topic_type_support<TypeTrack>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            rti::domain::register_type_plugin(
                participant,
                type_name,
                TypeTrackPlugin_new,
                TypeTrackPlugin_delete);
        }

        std::vector<char>& topic_type_support<TypeTrack>::to_cdr_buffer(
            std::vector<char>& buffer, const TypeTrack& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = TypeTrackPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = TypeTrackPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<TypeTrack>::from_cdr_buffer(TypeTrack& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = TypeTrackPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create TypeTrack from cdr buffer");
        }

        void topic_type_support<TypeTrack>::reset_sample(TypeTrack& sample) 
        {
            rti::topic::reset_sample(sample.trackID());
            rti::topic::reset_sample(sample.priority());
        }

        void topic_type_support<TypeTrack>::allocate_sample(TypeTrack& sample, int, int) 
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

