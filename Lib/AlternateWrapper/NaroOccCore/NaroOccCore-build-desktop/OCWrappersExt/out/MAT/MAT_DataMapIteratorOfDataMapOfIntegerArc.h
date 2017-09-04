// File generated by CPPExt (MPV)
//
#ifndef _MAT_DataMapIteratorOfDataMapOfIntegerArc_OCWrappers_HeaderFile
#define _MAT_DataMapIteratorOfDataMapOfIntegerArc_OCWrappers_HeaderFile

// include native header
#include <MAT_DataMapIteratorOfDataMapOfIntegerArc.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCMAT_Arc;
ref class OCTColStd_MapIntegerHasher;
ref class OCMAT_DataMapOfIntegerArc;
ref class OCMAT_DataMapNodeOfDataMapOfIntegerArc;



public ref class OCMAT_DataMapIteratorOfDataMapOfIntegerArc  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCMAT_DataMapIteratorOfDataMapOfIntegerArc(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCMAT_DataMapIteratorOfDataMapOfIntegerArc(MAT_DataMapIteratorOfDataMapOfIntegerArc* nativeHandle);

// Methods PUBLIC


OCMAT_DataMapIteratorOfDataMapOfIntegerArc();


OCMAT_DataMapIteratorOfDataMapOfIntegerArc(OCNaroWrappers::OCMAT_DataMapOfIntegerArc^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCMAT_DataMapOfIntegerArc^ aMap) ;


 /*instead*/  Standard_Integer Key() ;


 /*instead*/  OCMAT_Arc^ Value() ;

~OCMAT_DataMapIteratorOfDataMapOfIntegerArc()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif