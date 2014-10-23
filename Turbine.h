
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Turbine.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Turbine_1089397427_h
#define Turbine_1089397427_h

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

             
static const DDS_Long ID_MAX_STRING_SIZE = 256;
#define Turbine_LAST_MEMBER_ID 3
#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *TurbineTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct TurbineSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TurbineTypeSupport;
    class TurbineDataWriter;
    class TurbineDataReader;
#endif

#endif

            
    
class Turbine                                        
{
public:            
#ifdef __cplusplus
    typedef struct TurbineSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TurbineTypeSupport TypeSupport;
    typedef TurbineDataWriter DataWriter;
    typedef TurbineDataReader DataReader;
#endif

#endif
    
    char*  turbineId; /* maximum length = ((ID_MAX_STRING_SIZE)) */

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

    
NDDSUSERDllExport DDS_TypeCode* Turbine_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TurbineSeq, Turbine);
        
NDDSUSERDllExport
RTIBool Turbine_initialize(
        Turbine* self);
        
NDDSUSERDllExport
RTIBool Turbine_initialize_ex(
        Turbine* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Turbine_initialize_w_params(
        Turbine* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Turbine_finalize(
        Turbine* self);
                        
NDDSUSERDllExport
void Turbine_finalize_ex(
        Turbine* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Turbine_finalize_w_params(
        Turbine* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Turbine_finalize_optional_members(
        Turbine* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool Turbine_copy(
        Turbine* dst,
        const Turbine* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* Turbine_1089397427_h */
