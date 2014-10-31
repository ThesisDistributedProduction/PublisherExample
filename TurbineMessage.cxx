
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TurbineMessage.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/


#ifndef NDDS_STANDALONE_TYPE
    #ifdef __cplusplus
        #ifndef ndds_cpp_h
            #include "ndds/ndds_cpp.h"
        #endif
        #ifndef dds_c_log_impl_h              
            #include "dds_c/dds_c_log_impl.h"                                
        #endif        
    #else
        #ifndef ndds_c_h
            #include "ndds/ndds_c.h"
        #endif
    #endif
    
    #ifndef cdr_type_h
        #include "cdr/cdr_type.h"
    #endif    

    #ifndef osapi_heap_h
        #include "osapi/osapi_heap.h" 
    #endif
#else
    #include "ndds_standalone_type.h"
#endif



#include "TurbineMessage.h"

/* ========================================================================= */
const char *TurbineMessageTYPENAME = "TurbineMessage";

DDS_TypeCode* TurbineMessage_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TurbineMessage_g_tc_members[4]=
    {
        {
            (char *)"turbineId",/* Member name */
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
            RTI_CDR_KEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"maxProduction",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"currentProduction",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"setPoint",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode TurbineMessage_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"TurbineMessage", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        TurbineMessage_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TurbineMessage*/

    if (is_initialized) {
        return &TurbineMessage_g_tc;
    }


    TurbineMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TurbineMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TurbineMessage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    TurbineMessage_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &TurbineMessage_g_tc;
}


RTIBool TurbineMessage_initialize(
    TurbineMessage* sample) {
  return TurbineMessage_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TurbineMessage_initialize_ex(
    TurbineMessage* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return TurbineMessage_initialize_w_params(
        sample,&allocParams);
}

RTIBool TurbineMessage_initialize_w_params(
        TurbineMessage* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->turbineId)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->maxProduction)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->currentProduction)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->setPoint)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TurbineMessage_finalize(
    TurbineMessage* sample)
{
    TurbineMessage_finalize_ex(sample,RTI_TRUE);
}
        
void TurbineMessage_finalize_ex(
    TurbineMessage* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    TurbineMessage_finalize_w_params(
        sample,&deallocParams);
}

void TurbineMessage_finalize_w_params(
        TurbineMessage* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */






}

void TurbineMessage_finalize_optional_members(
    TurbineMessage* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             





}

RTIBool TurbineMessage_copy(
    TurbineMessage* dst,
    const TurbineMessage* src)
{

    if (!RTICdrType_copyLong(
        &dst->turbineId, &src->turbineId)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->maxProduction, &src->maxProduction)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->currentProduction, &src->currentProduction)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->setPoint, &src->setPoint)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TurbineMessage' sequence class.
 */
#define T TurbineMessage
#define TSeq TurbineMessageSeq
#define T_initialize_w_params TurbineMessage_initialize_w_params
#define T_finalize_w_params   TurbineMessage_finalize_w_params
#define T_copy       TurbineMessage_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#endif
#else
#include "dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp_sequence_TSeq.gen"
#endif
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

