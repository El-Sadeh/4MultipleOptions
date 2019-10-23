

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MultipleOptions.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MultipleOptionsPlugin_1810373351_h
#define MultipleOptionsPlugin_1810373351_h

#include "MultipleOptions.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
OptionsPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Options *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OptionsPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Options *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
OptionsPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
OptionsPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
OptionsPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
OptionsPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
OptionsPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Options * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
OptionsPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
OptionsPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
OptionsPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Options *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OptionsPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Options * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
OptionsPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Options *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
OptionsPluginSupport_print_data(
    const Options *sample, const char *desc, int indent_level);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
PriorityPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Priority *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PriorityPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Priority *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
PriorityPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
PriorityPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
PriorityPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
PriorityPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
PriorityPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Priority * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
PriorityPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
PriorityPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
PriorityPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Priority *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PriorityPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Priority * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
PriorityPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Priority *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
PriorityPluginSupport_print_data(
    const Priority *sample, const char *desc, int indent_level);

#define TypeSearchPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define TypeSearchPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TypeSearchPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TypeSearchPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TypeSearchPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TypeSearch*
TypeSearchPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TypeSearch*
TypeSearchPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TypeSearch*
TypeSearchPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TypeSearchPluginSupport_copy_data(
    TypeSearch *out,
    const TypeSearch *in);

NDDSUSERDllExport extern void 
TypeSearchPluginSupport_destroy_data_w_params(
    TypeSearch *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TypeSearchPluginSupport_destroy_data_ex(
    TypeSearch *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TypeSearchPluginSupport_destroy_data(
    TypeSearch *sample);

NDDSUSERDllExport extern void 
TypeSearchPluginSupport_print_data(
    const TypeSearch *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TypeSearchPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TypeSearchPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
TypeSearchPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TypeSearchPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
TypeSearchPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypeSearch *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
TypeSearchPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypeSearch *out,
    const TypeSearch *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TypeSearchPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TypeSearch *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypeSearchPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypeSearch *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
TypeSearchPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const TypeSearch *sample); 

NDDSUSERDllExport extern RTIBool 
TypeSearchPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TypeSearch **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
TypeSearchPlugin_deserialize_from_cdr_buffer(
    TypeSearch *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern RTIBool
TypeSearchPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TypeSearchPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
TypeSearchPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TypeSearchPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TypeSearchPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TypeSearch * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
TypeSearchPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TypeSearchPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TypeSearchPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TypeSearchPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TypeSearch *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypeSearchPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypeSearch * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypeSearchPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TypeSearch ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
TypeSearchPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TypeSearch *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TypeSearchPlugin_new(void);

NDDSUSERDllExport extern void
TypeSearchPlugin_delete(struct PRESTypePlugin *);

#define TypeTrackPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define TypeTrackPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TypeTrackPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TypeTrackPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TypeTrackPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TypeTrack*
TypeTrackPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TypeTrack*
TypeTrackPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TypeTrack*
TypeTrackPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TypeTrackPluginSupport_copy_data(
    TypeTrack *out,
    const TypeTrack *in);

NDDSUSERDllExport extern void 
TypeTrackPluginSupport_destroy_data_w_params(
    TypeTrack *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TypeTrackPluginSupport_destroy_data_ex(
    TypeTrack *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TypeTrackPluginSupport_destroy_data(
    TypeTrack *sample);

NDDSUSERDllExport extern void 
TypeTrackPluginSupport_print_data(
    const TypeTrack *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TypeTrackPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TypeTrackPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
TypeTrackPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TypeTrackPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
TypeTrackPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypeTrack *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
TypeTrackPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypeTrack *out,
    const TypeTrack *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TypeTrackPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TypeTrack *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypeTrackPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypeTrack *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
TypeTrackPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const TypeTrack *sample); 

NDDSUSERDllExport extern RTIBool 
TypeTrackPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TypeTrack **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
TypeTrackPlugin_deserialize_from_cdr_buffer(
    TypeTrack *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern RTIBool
TypeTrackPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TypeTrackPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
TypeTrackPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TypeTrackPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TypeTrackPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TypeTrack * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
TypeTrackPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TypeTrackPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TypeTrackPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TypeTrackPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TypeTrack *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypeTrackPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypeTrack * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypeTrackPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TypeTrack ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
TypeTrackPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TypeTrack *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TypeTrackPlugin_new(void);

NDDSUSERDllExport extern void
TypeTrackPlugin_delete(struct PRESTypePlugin *);

#define radarUnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define radarUnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define radarUnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define radarUnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define radarUnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern radarUnion*
radarUnionPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern radarUnion*
radarUnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern radarUnion*
radarUnionPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
radarUnionPluginSupport_copy_data(
    radarUnion *out,
    const radarUnion *in);

NDDSUSERDllExport extern void 
radarUnionPluginSupport_destroy_data_w_params(
    radarUnion *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
radarUnionPluginSupport_destroy_data_ex(
    radarUnion *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
radarUnionPluginSupport_destroy_data(
    radarUnion *sample);

NDDSUSERDllExport extern void 
radarUnionPluginSupport_print_data(
    const radarUnion *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
radarUnionPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
radarUnionPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
radarUnionPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
radarUnionPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
radarUnionPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    radarUnion *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
radarUnionPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    radarUnion *out,
    const radarUnion *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
radarUnionPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const radarUnion *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
radarUnionPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    radarUnion *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
radarUnionPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const radarUnion *sample); 

NDDSUSERDllExport extern RTIBool 
radarUnionPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    radarUnion **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
radarUnionPlugin_deserialize_from_cdr_buffer(
    radarUnion *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern RTIBool
radarUnionPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
radarUnionPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
radarUnionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
radarUnionPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
radarUnionPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const radarUnion * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
radarUnionPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
radarUnionPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
radarUnionPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
radarUnionPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const radarUnion *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
radarUnionPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    radarUnion * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
radarUnionPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    radarUnion ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
radarUnionPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    radarUnion *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
radarUnionPlugin_new(void);

NDDSUSERDllExport extern void
radarUnionPlugin_delete(struct PRESTypePlugin *);

#define TimeStampStructPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define TimeStampStructPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TimeStampStructPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TimeStampStructPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TimeStampStructPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TimeStampStruct*
TimeStampStructPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TimeStampStruct*
TimeStampStructPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TimeStampStruct*
TimeStampStructPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TimeStampStructPluginSupport_copy_data(
    TimeStampStruct *out,
    const TimeStampStruct *in);

NDDSUSERDllExport extern void 
TimeStampStructPluginSupport_destroy_data_w_params(
    TimeStampStruct *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TimeStampStructPluginSupport_destroy_data_ex(
    TimeStampStruct *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TimeStampStructPluginSupport_destroy_data(
    TimeStampStruct *sample);

NDDSUSERDllExport extern void 
TimeStampStructPluginSupport_print_data(
    const TimeStampStruct *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TimeStampStructPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TimeStampStructPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
TimeStampStructPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TimeStampStructPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
TimeStampStructPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TimeStampStruct *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
TimeStampStructPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TimeStampStruct *out,
    const TimeStampStruct *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TimeStampStructPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TimeStampStruct *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TimeStampStructPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TimeStampStruct *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
TimeStampStructPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const TimeStampStruct *sample); 

NDDSUSERDllExport extern RTIBool 
TimeStampStructPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TimeStampStruct **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
TimeStampStructPlugin_deserialize_from_cdr_buffer(
    TimeStampStruct *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern RTIBool
TimeStampStructPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TimeStampStructPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
TimeStampStructPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TimeStampStructPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TimeStampStructPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TimeStampStruct * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
TimeStampStructPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TimeStampStructPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TimeStampStructPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TimeStampStructPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TimeStampStruct *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TimeStampStructPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TimeStampStruct * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TimeStampStructPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TimeStampStruct ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
TimeStampStructPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TimeStampStruct *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TimeStampStructPlugin_new(void);

NDDSUSERDllExport extern void
TimeStampStructPlugin_delete(struct PRESTypePlugin *);

#define RadarCommandPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define RadarCommandPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RadarCommandPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define RadarCommandPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RadarCommandPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RadarCommand*
RadarCommandPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RadarCommand*
RadarCommandPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RadarCommand*
RadarCommandPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RadarCommandPluginSupport_copy_data(
    RadarCommand *out,
    const RadarCommand *in);

NDDSUSERDllExport extern void 
RadarCommandPluginSupport_destroy_data_w_params(
    RadarCommand *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RadarCommandPluginSupport_destroy_data_ex(
    RadarCommand *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RadarCommandPluginSupport_destroy_data(
    RadarCommand *sample);

NDDSUSERDllExport extern void 
RadarCommandPluginSupport_print_data(
    const RadarCommand *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
RadarCommandPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
RadarCommandPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
RadarCommandPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
RadarCommandPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
RadarCommandPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    RadarCommand *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
RadarCommandPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RadarCommand *out,
    const RadarCommand *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
RadarCommandPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const RadarCommand *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RadarCommandPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    RadarCommand *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RadarCommandPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const RadarCommand *sample); 

NDDSUSERDllExport extern RTIBool 
RadarCommandPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RadarCommand **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RadarCommandPlugin_deserialize_from_cdr_buffer(
    RadarCommand *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern RTIBool
RadarCommandPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
RadarCommandPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
RadarCommandPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RadarCommandPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
RadarCommandPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const RadarCommand * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
RadarCommandPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RadarCommandPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RadarCommandPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RadarCommandPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const RadarCommand *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RadarCommandPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    RadarCommand * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RadarCommandPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RadarCommand ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RadarCommandPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RadarCommand *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
RadarCommandPlugin_new(void);

NDDSUSERDllExport extern void
RadarCommandPlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MultipleOptionsPlugin_1810373351_h */

