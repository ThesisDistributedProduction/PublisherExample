
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Turbine.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef TurbinePlugin_1089397372_h
#define TurbinePlugin_1089397372_h

#include "Turbine.h"



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
 * Turbine.
 *
 * By default, this type is struct Turbine
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct Turbine)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct Turbine, the
 * following restriction applies: the key of struct
 * Turbine must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct Turbine.
*/
typedef  class Turbine TurbineKeyHolder;


#define TurbinePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TurbinePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TurbinePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TurbinePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TurbinePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TurbinePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TurbinePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Turbine*
TurbinePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Turbine*
TurbinePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Turbine*
TurbinePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TurbinePluginSupport_copy_data(
    Turbine *out,
    const Turbine *in);

NDDSUSERDllExport extern void 
TurbinePluginSupport_destroy_data_w_params(
    Turbine *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TurbinePluginSupport_destroy_data_ex(
    Turbine *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TurbinePluginSupport_destroy_data(
    Turbine *sample);

NDDSUSERDllExport extern void 
TurbinePluginSupport_print_data(
    const Turbine *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern Turbine*
TurbinePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Turbine*
TurbinePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TurbinePluginSupport_destroy_key_ex(
    TurbineKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TurbinePluginSupport_destroy_key(
    TurbineKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TurbinePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TurbinePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TurbinePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TurbinePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TurbinePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Turbine *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TurbinePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Turbine *out,
    const Turbine *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TurbinePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Turbine *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TurbinePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Turbine *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TurbinePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Turbine **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TurbinePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TurbinePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TurbinePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TurbinePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Turbine * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TurbinePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TurbinePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TurbinePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Turbine *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TurbinePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Turbine * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TurbinePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Turbine ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TurbinePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Turbine *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TurbinePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TurbineKeyHolder *key, 
    const Turbine *instance);

NDDSUSERDllExport extern RTIBool 
TurbinePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    Turbine *instance, 
    const TurbineKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TurbinePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const Turbine *instance);

NDDSUSERDllExport extern RTIBool 
TurbinePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TurbinePlugin_new(void);

NDDSUSERDllExport extern void
TurbinePlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* TurbinePlugin_1089397372_h */
