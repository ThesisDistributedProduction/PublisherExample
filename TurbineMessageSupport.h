
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TurbineMessage.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef TurbineMessageSupport_1893946714_h
#define TurbineMessageSupport_1893946714_h

/* Uses */
#include "TurbineMessage.h"



#ifdef __cplusplus
#ifndef ndds_cpp_h
  #include "ndds/ndds_cpp.h"
#endif
#else
#ifndef ndds_c_h
  #include "ndds/ndds_c.h"
#endif
#endif

        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
  */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifdef __cplusplus

DDS_TYPESUPPORT_CPP(TurbineMessageTypeSupport, TurbineMessage);

DDS_DATAWRITER_CPP(TurbineMessageDataWriter, TurbineMessage);
DDS_DATAREADER_CPP(TurbineMessageDataReader, TurbineMessageSeq, TurbineMessage);


#else

DDS_TYPESUPPORT_C(TurbineMessageTypeSupport, TurbineMessage);
DDS_DATAWRITER_C(TurbineMessageDataWriter, TurbineMessage);
DDS_DATAREADER_C(TurbineMessageDataReader, TurbineMessageSeq, TurbineMessage);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif  /* TurbineMessageSupport_1893946714_h */
