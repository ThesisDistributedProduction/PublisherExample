
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TurbineMessage.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef TurbineMessagePlugin_1893946714_h
#define TurbineMessagePlugin_1893946714_h

#include "TurbineMessage.h"



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


#ifdef __cplusplus
extern "C" {
#endif

/* The type used to store keys for instances of type struct
 * TurbineMessage.
 *
 * By default, this type is struct TurbineMessage
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TurbineMessage)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TurbineMessage, the
 * following restriction applies: the key of struct
 * TurbineMessage must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TurbineMessage.
*/
typedef  class TurbineMessage TurbineMessageKeyHolder;


#define TurbineMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TurbineMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TurbineMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TurbineMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TurbineMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TurbineMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TurbineMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TurbineMessage*
TurbineMessagePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TurbineMessage*
TurbineMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TurbineMessage*
TurbineMessagePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TurbineMessagePluginSupport_copy_data(
    TurbineMessage *out,
    const TurbineMessage *in);

NDDSUSERDllExport extern void 
TurbineMessagePluginSupport_destroy_data_w_params(
    TurbineMessage *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TurbineMessagePluginSupport_destroy_data_ex(
    TurbineMessage *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TurbineMessagePluginSupport_destroy_data(
    TurbineMessage *sample);

NDDSUSERDllExport extern void 
TurbineMessagePluginSupport_print_data(
    const TurbineMessage *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TurbineMessage*
TurbineMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TurbineMessage*
TurbineMessagePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TurbineMessagePluginSupport_destroy_key_ex(
    TurbineMessageKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TurbineMessagePluginSupport_destroy_key(
    TurbineMessageKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TurbineMessagePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TurbineMessagePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TurbineMessagePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TurbineMessagePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TurbineMessagePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TurbineMessage *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TurbineMessagePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TurbineMessage *out,
    const TurbineMessage *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TurbineMessagePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TurbineMessage *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TurbineMessagePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TurbineMessage *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TurbineMessagePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TurbineMessage **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TurbineMessagePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TurbineMessagePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TurbineMessagePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TurbineMessagePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TurbineMessage * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TurbineMessagePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TurbineMessagePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TurbineMessagePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TurbineMessage *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TurbineMessagePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TurbineMessage * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TurbineMessagePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TurbineMessage ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TurbineMessagePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TurbineMessage *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TurbineMessagePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TurbineMessageKeyHolder *key, 
    const TurbineMessage *instance);

NDDSUSERDllExport extern RTIBool 
TurbineMessagePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TurbineMessage *instance, 
    const TurbineMessageKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TurbineMessagePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TurbineMessage *instance);

NDDSUSERDllExport extern RTIBool 
TurbineMessagePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TurbineMessagePlugin_new(void);

NDDSUSERDllExport extern void
TurbineMessagePlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* TurbineMessagePlugin_1893946714_h */
