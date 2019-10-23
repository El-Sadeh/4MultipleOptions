

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MultipleOptions.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MultipleOptions_1810373351_hpp
#define MultipleOptions_1810373351_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include <cstdlib>
#include <ctime>
#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

struct Options_def {
    enum type {
        SEARCH,      
        TRACK     
    };
    static type get_default(){ return SEARCH;}
};

typedef dds::core::safe_enum<Options_def> Options;
NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const Options& sample);
struct Priority_def {
    enum type {
        low,      
        medium,      
        high     
    };
    static type get_default(){ return low;}
};

typedef dds::core::safe_enum<Priority_def> Priority;
NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const Priority& sample);

class NDDSUSERDllExport TypeSearch {

  public:
    TypeSearch();

    TypeSearch(
        float lat,
        float longt,
        int16_t alt);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    TypeSearch (TypeSearch&&) = default;
    TypeSearch& operator=(TypeSearch&&) = default;
    TypeSearch& operator=(const TypeSearch&) = default;
    TypeSearch(const TypeSearch&) = default;
    #else
    TypeSearch(TypeSearch&& other_) OMG_NOEXCEPT;  
    TypeSearch& operator=(TypeSearch&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    float& lat() OMG_NOEXCEPT; 
    const float& lat() const OMG_NOEXCEPT;
    void lat(float value);

    float& longt() OMG_NOEXCEPT; 
    const float& longt() const OMG_NOEXCEPT;
    void longt(float value);

    int16_t& alt() OMG_NOEXCEPT; 
    const int16_t& alt() const OMG_NOEXCEPT;
    void alt(int16_t value);

    bool operator == (const TypeSearch& other_) const;
    bool operator != (const TypeSearch& other_) const;

    void swap(TypeSearch& other_) OMG_NOEXCEPT ;

  private:

    float m_lat_;
    float m_longt_;
    int16_t m_alt_;

};


inline void swap(TypeSearch& a, TypeSearch& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const TypeSearch& sample);

class NDDSUSERDllExport TypeTrack {

  public:
    TypeTrack();

    TypeTrack(
        int32_t trackID,
        const Priority& priority);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    TypeTrack (TypeTrack&&) = default;
    TypeTrack& operator=(TypeTrack&&) = default;
    TypeTrack& operator=(const TypeTrack&) = default;
    TypeTrack(const TypeTrack&) = default;
    #else
    TypeTrack(TypeTrack&& other_) OMG_NOEXCEPT;  
    TypeTrack& operator=(TypeTrack&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int32_t& trackID() OMG_NOEXCEPT; 
    const int32_t& trackID() const OMG_NOEXCEPT;
    void trackID(int32_t value);

    Priority& priority() OMG_NOEXCEPT; 
    const Priority& priority() const OMG_NOEXCEPT;
    void priority(const Priority& value);

    bool operator == (const TypeTrack& other_) const;
    bool operator != (const TypeTrack& other_) const;

    void swap(TypeTrack& other_) OMG_NOEXCEPT ;

  private:

    int32_t m_trackID_;
    Priority m_priority_;

};

inline void swap(TypeTrack& a, TypeTrack& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const TypeTrack& sample);

class NDDSUSERDllExport radarUnion {

  public:
    radarUnion();

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    radarUnion (radarUnion&&) = default;
    radarUnion& operator=(radarUnion&&) = default;
    radarUnion& operator=(const radarUnion&) = default;
    radarUnion(const radarUnion&) = default;
    #else
    radarUnion(radarUnion&& other_) OMG_NOEXCEPT;  
    radarUnion& operator=(radarUnion&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    Options& _d() ; 
    const Options& _d() const ;
    void _d(const Options& value);

    TypeSearch& searchInfo() ; 
    const TypeSearch& searchInfo() const ;
    void searchInfo(const TypeSearch& value);

    TypeTrack& trackInfo() ; 
    const TypeTrack& trackInfo() const ;
    void trackInfo(const TypeTrack& value);

    bool operator == (const radarUnion& other_) const;
    bool operator != (const radarUnion& other_) const;

    static Options default_discriminator();  

    void swap(radarUnion& other_) OMG_NOEXCEPT ;

  private:

    Options m_d_;
    struct NDDSUSERDllExport Union_ {
        TypeSearch m_searchInfo_;
        TypeTrack m_trackInfo_;
        Union_();
        Union_(
            const TypeSearch& searchInfo,
            const TypeTrack& trackInfo);
    };
    Union_ m_u_;

};

inline void swap(radarUnion& a, radarUnion& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const radarUnion& sample);

class NDDSUSERDllExport TimeStampStruct {

  public:
    TimeStampStruct();

    TimeStampStruct(
        int16_t day,
        int16_t month,
        int16_t year);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    TimeStampStruct (TimeStampStruct&&) = default;
    TimeStampStruct& operator=(TimeStampStruct&&) = default;
    TimeStampStruct& operator=(const TimeStampStruct&) = default;
    TimeStampStruct(const TimeStampStruct&) = default;
    #else
    TimeStampStruct(TimeStampStruct&& other_) OMG_NOEXCEPT;  
    TimeStampStruct& operator=(TimeStampStruct&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int16_t& day() OMG_NOEXCEPT; 
    const int16_t& day() const OMG_NOEXCEPT;
    void day(int16_t value);

    int16_t& month() OMG_NOEXCEPT; 
    const int16_t& month() const OMG_NOEXCEPT;
    void month(int16_t value);

    int16_t& year() OMG_NOEXCEPT; 
    const int16_t& year() const OMG_NOEXCEPT;
    void year(int16_t value);

    bool operator == (const TimeStampStruct& other_) const;
    bool operator != (const TimeStampStruct& other_) const;

    void swap(TimeStampStruct& other_) OMG_NOEXCEPT ;

  private:

    int16_t m_day_;
    int16_t m_month_;
    int16_t m_year_;

};

inline void swap(TimeStampStruct& a, TimeStampStruct& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const TimeStampStruct& sample);

class NDDSUSERDllExport RadarCommand {

  public:
    RadarCommand();

    RadarCommand(
        const TimeStampStruct& timeStamp,
        int32_t sequenceNumber,
        const radarUnion& radarInfo);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    RadarCommand (RadarCommand&&) = default;
    RadarCommand& operator=(RadarCommand&&) = default;
    RadarCommand& operator=(const RadarCommand&) = default;
    RadarCommand(const RadarCommand&) = default;
    #else
    RadarCommand(RadarCommand&& other_) OMG_NOEXCEPT;  
    RadarCommand& operator=(RadarCommand&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    TimeStampStruct& timeStamp() OMG_NOEXCEPT; 
    const TimeStampStruct& timeStamp() const OMG_NOEXCEPT;
    void timeStamp(const TimeStampStruct& value);

    int32_t& sequenceNumber() OMG_NOEXCEPT; 
    const int32_t& sequenceNumber() const OMG_NOEXCEPT;
    void sequenceNumber(int32_t value);

    radarUnion& radarInfo() OMG_NOEXCEPT; 
    const radarUnion& radarInfo() const OMG_NOEXCEPT;
    void radarInfo(const radarUnion& value);

    bool operator == (const RadarCommand& other_) const;
    bool operator != (const RadarCommand& other_) const;

    void swap(RadarCommand& other_) OMG_NOEXCEPT ;

  private:

    TimeStampStruct m_timeStamp_;
    int32_t m_sequenceNumber_;
    radarUnion m_radarInfo_;

};

inline void swap(RadarCommand& a, RadarCommand& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RadarCommand& sample);

namespace dds { 
    namespace topic {

        template<>
        struct topic_type_name<TypeSearch> {
            NDDSUSERDllExport static std::string value() {
                return "TypeSearch";
            }
        };

        template<>
        struct is_topic_type<TypeSearch> : public dds::core::true_type {};

        template<>
        struct topic_type_support<TypeSearch> {
            NDDSUSERDllExport 
            static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const TypeSearch& sample);

            NDDSUSERDllExport 
            static void from_cdr_buffer(TypeSearch& sample, const std::vector<char>& buffer);

            NDDSUSERDllExport 
            static void reset_sample(TypeSearch& sample);

            NDDSUSERDllExport 
            static void allocate_sample(TypeSearch& sample, int, int);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name<TypeTrack> {
            NDDSUSERDllExport static std::string value() {
                return "TypeTrack";
            }
        };

        template<>
        struct is_topic_type<TypeTrack> : public dds::core::true_type {};

        template<>
        struct topic_type_support<TypeTrack> {
            NDDSUSERDllExport 
            static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const TypeTrack& sample);

            NDDSUSERDllExport 
            static void from_cdr_buffer(TypeTrack& sample, const std::vector<char>& buffer);

            NDDSUSERDllExport 
            static void reset_sample(TypeTrack& sample);

            NDDSUSERDllExport 
            static void allocate_sample(TypeTrack& sample, int, int);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name<radarUnion> {
            NDDSUSERDllExport static std::string value() {
                return "radarUnion";
            }
        };

        template<>
        struct is_topic_type<radarUnion> : public dds::core::true_type {};

        template<>
        struct topic_type_support<radarUnion> {
            NDDSUSERDllExport 
            static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const radarUnion& sample);

            NDDSUSERDllExport 
            static void from_cdr_buffer(radarUnion& sample, const std::vector<char>& buffer);

            NDDSUSERDllExport 
            static void reset_sample(radarUnion& sample);

            NDDSUSERDllExport 
            static void allocate_sample(radarUnion& sample, int, int);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name<TimeStampStruct> {
            NDDSUSERDllExport static std::string value() {
                return "TimeStampStruct";
            }
        };

        template<>
        struct is_topic_type<TimeStampStruct> : public dds::core::true_type {};

        template<>
        struct topic_type_support<TimeStampStruct> {
            NDDSUSERDllExport 
            static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const TimeStampStruct& sample);

            NDDSUSERDllExport 
            static void from_cdr_buffer(TimeStampStruct& sample, const std::vector<char>& buffer);

            NDDSUSERDllExport 
            static void reset_sample(TimeStampStruct& sample);

            NDDSUSERDllExport 
            static void allocate_sample(TimeStampStruct& sample, int, int);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name<RadarCommand> {
            NDDSUSERDllExport static std::string value() {
                return "RadarCommand";
            }
        };

        template<>
        struct is_topic_type<RadarCommand> : public dds::core::true_type {};

        template<>
        struct topic_type_support<RadarCommand> {
            NDDSUSERDllExport 
            static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const RadarCommand& sample);

            NDDSUSERDllExport 
            static void from_cdr_buffer(RadarCommand& sample, const std::vector<char>& buffer);

            NDDSUSERDllExport 
            static void reset_sample(RadarCommand& sample);

            NDDSUSERDllExport 
            static void allocate_sample(RadarCommand& sample, int, int);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {
        template<>
        struct dynamic_type<Options> {
            typedef dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility<Options> {
            static const dds::core::xtypes::ExtensibilityKind::type kind =
            dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        template<>
        struct dynamic_type<Priority> {
            typedef dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility<Priority> {
            static const dds::core::xtypes::ExtensibilityKind::type kind =
            dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        template<>
        struct dynamic_type<TypeSearch> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility<TypeSearch> {
            static const dds::core::xtypes::ExtensibilityKind::type kind =
            dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        template<>
        struct dynamic_type<TypeTrack> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility<TypeTrack> {
            static const dds::core::xtypes::ExtensibilityKind::type kind =
            dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        template<>
        struct dynamic_type<radarUnion> {
            typedef dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility<radarUnion> {
            static const dds::core::xtypes::ExtensibilityKind::type kind =
            dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        template<>
        struct dynamic_type<TimeStampStruct> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility<TimeStampStruct> {
            static const dds::core::xtypes::ExtensibilityKind::type kind =
            dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        template<>
        struct dynamic_type<RadarCommand> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility<RadarCommand> {
            static const dds::core::xtypes::ExtensibilityKind::type kind =
            dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // MultipleOptions_1810373351_hpp

