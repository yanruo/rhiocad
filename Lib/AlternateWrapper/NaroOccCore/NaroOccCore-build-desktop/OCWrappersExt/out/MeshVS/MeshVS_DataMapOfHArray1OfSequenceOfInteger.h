// File generated by CPPExt (MPV)
//
#ifndef _MeshVS_DataMapOfHArray1OfSequenceOfInteger_OCWrappers_HeaderFile
#define _MeshVS_DataMapOfHArray1OfSequenceOfInteger_OCWrappers_HeaderFile

// include native header
#include <MeshVS_DataMapOfHArray1OfSequenceOfInteger.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCMeshVS_HArray1OfSequenceOfInteger;
ref class OCTColStd_MapIntegerHasher;
ref class OCMeshVS_DataMapNodeOfDataMapOfHArray1OfSequenceOfInteger;
ref class OCMeshVS_DataMapIteratorOfDataMapOfHArray1OfSequenceOfInteger;



public ref class OCMeshVS_DataMapOfHArray1OfSequenceOfInteger  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCMeshVS_DataMapOfHArray1OfSequenceOfInteger(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCMeshVS_DataMapOfHArray1OfSequenceOfInteger(MeshVS_DataMapOfHArray1OfSequenceOfInteger* nativeHandle);

// Methods PUBLIC


OCMeshVS_DataMapOfHArray1OfSequenceOfInteger(Standard_Integer NbBuckets);


 /*instead*/  OCMeshVS_DataMapOfHArray1OfSequenceOfInteger^ Assign(OCNaroWrappers::OCMeshVS_DataMapOfHArray1OfSequenceOfInteger^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(Standard_Integer K, OCNaroWrappers::OCMeshVS_HArray1OfSequenceOfInteger^ I) ;


 /*instead*/  System::Boolean IsBound(Standard_Integer K) ;


 /*instead*/  System::Boolean UnBind(Standard_Integer K) ;


 /*instead*/  OCMeshVS_HArray1OfSequenceOfInteger^ Find(Standard_Integer K) ;


 /*instead*/  OCMeshVS_HArray1OfSequenceOfInteger^ ChangeFind(Standard_Integer K) ;


 /*instead*/  Standard_Address Find1(Standard_Integer K) ;


 /*instead*/  Standard_Address ChangeFind1(Standard_Integer K) ;

~OCMeshVS_DataMapOfHArray1OfSequenceOfInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
