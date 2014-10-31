
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TurbineMessage.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef TurbineMessage_1893946714_h
#define TurbineMessage_1893946714_h

#ifndef NDDS_STANDALONE_TYPE
    #ifdef __cplusplus
        #ifndef ndds_cpp_h
            #include "ndds/ndds_cpp.h"
        #endif
    #else
        #ifndef ndds_c_h
            #include "ndds/ndds_c.h"
        #endif
    #endif
#else
    #include "ndds_standalone_type.h"
#endif


#define TurbineMessage_LAST_MEMBER_ID 3
#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *TurbineMessageTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct TurbineMessageSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TurbineMessageTypeSupport;
    class TurbineMessageDataWriter;
    class TurbineMessageDataReader;
#endif

#endif

            
    
class TurbineMessage                                        
{
public:            
#ifdef __cplusplus
    typedef struct TurbineMessageSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TurbineMessageTypeSupport TypeSupport;
    typedef TurbineMessageDataWriter DataWriter;
    typedef TurbineMessageDataReader DataReader;
#endif

#endif
    
    DDS_Long  turbineId;

    DDS_Long  maxProduction;

    DDS_Long  currentProduction;

    DDS_Long  setPoint;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TurbineMessage_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TurbineMessageSeq, TurbineMessage);
        
NDDSUSERDllExport
RTIBool TurbineMessage_initialize(
        TurbineMessage* self);
        
NDDSUSERDllExport
RTIBool TurbineMessage_initialize_ex(
        TurbineMessage* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TurbineMessage_initialize_w_params(
        TurbineMessage* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TurbineMessage_finalize(
        TurbineMessage* self);
                        
NDDSUSERDllExport
void TurbineMessage_finalize_ex(
        TurbineMessage* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TurbineMessage_finalize_w_params(
        TurbineMessage* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TurbineMessage_finalize_optional_members(
        TurbineMessage* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TurbineMessage_copy(
        TurbineMessage* dst,
        const TurbineMessage* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* TurbineMessage_1893946714_h */
