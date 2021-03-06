// File generated by CPPExt (MPV)
//
#ifndef _TDataStd_DataMapOfStringByte_OCWrappers_HeaderFile
#define _TDataStd_DataMapOfStringByte_OCWrappers_HeaderFile

// include native header
#include <TDataStd_DataMapOfStringByte.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTCollection_ExtendedString;
ref class OCTDataStd_DataMapNodeOfDataMapOfStringByte;
ref class OCTDataStd_DataMapIteratorOfDataMapOfStringByte;



public ref class OCTDataStd_DataMapOfStringByte  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCTDataStd_DataMapOfStringByte(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDataStd_DataMapOfStringByte(TDataStd_DataMapOfStringByte* nativeHandle);

// Methods PUBLIC


OCTDataStd_DataMapOfStringByte(Standard_Integer NbBuckets);


 /*instead*/  OCTDataStd_DataMapOfStringByte^ Assign(OCNaroWrappers::OCTDataStd_DataMapOfStringByte^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCTCollection_ExtendedString^ K, Standard_Byte I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCTCollection_ExtendedString^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCTCollection_ExtendedString^ K) ;


 /*instead*/  Standard_Byte Find(OCNaroWrappers::OCTCollection_ExtendedString^ K) ;


 /*instead*/  Standard_Byte ChangeFind(OCNaroWrappers::OCTCollection_ExtendedString^ K) ;


 /*instead*/  Standard_Address Find1(OCNaroWrappers::OCTCollection_ExtendedString^ K) ;


 /*instead*/  Standard_Address ChangeFind1(OCNaroWrappers::OCTCollection_ExtendedString^ K) ;

~OCTDataStd_DataMapOfStringByte()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
