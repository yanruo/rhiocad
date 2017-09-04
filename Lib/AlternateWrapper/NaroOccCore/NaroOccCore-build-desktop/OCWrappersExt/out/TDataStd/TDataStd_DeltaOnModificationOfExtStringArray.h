// File generated by CPPExt (Transient)
//
#ifndef _TDataStd_DeltaOnModificationOfExtStringArray_OCWrappers_HeaderFile
#define _TDataStd_DeltaOnModificationOfExtStringArray_OCWrappers_HeaderFile

// include the wrapped class
#include <TDataStd_DeltaOnModificationOfExtStringArray.hxx>
#include "../Converter.h"

#include "../TDF/TDF_DeltaOnModification.h"



namespace OCNaroWrappers
{

ref class OCTColStd_HArray1OfInteger;
ref class OCTColStd_HArray1OfExtendedString;
ref class OCTDataStd_ExtStringArray;


//! This class provides default services for an <br>
//!          AttributeDelta on a MODIFICATION action. <br>
public ref class OCTDataStd_DeltaOnModificationOfExtStringArray : OCTDF_DeltaOnModification {

protected:
  // dummy constructor;
  OCTDataStd_DeltaOnModificationOfExtStringArray(OCDummy^) : OCTDF_DeltaOnModification((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDataStd_DeltaOnModificationOfExtStringArray(Handle(TDataStd_DeltaOnModificationOfExtStringArray)* nativeHandle);

// Methods PUBLIC

//! Initializes a TDF_DeltaOnModification. <br>
OCTDataStd_DeltaOnModificationOfExtStringArray(OCNaroWrappers::OCTDataStd_ExtStringArray^ Arr);

//! Applies the delta to the attribute. <br>
virtual /*instead*/  void Apply() override;

~OCTDataStd_DeltaOnModificationOfExtStringArray()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif