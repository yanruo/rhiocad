// File generated by CPPExt (MPV)
//
#ifndef _MAT2d_SequenceOfSequenceOfCurve_OCWrappers_HeaderFile
#define _MAT2d_SequenceOfSequenceOfCurve_OCWrappers_HeaderFile

// include native header
#include <MAT2d_SequenceOfSequenceOfCurve.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCTColGeom2d_SequenceOfCurve;
ref class OCMAT2d_SequenceNodeOfSequenceOfSequenceOfCurve;



public ref class OCMAT2d_SequenceOfSequenceOfCurve  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCMAT2d_SequenceOfSequenceOfCurve(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCMAT2d_SequenceOfSequenceOfCurve(MAT2d_SequenceOfSequenceOfCurve* nativeHandle);

// Methods PUBLIC


OCMAT2d_SequenceOfSequenceOfCurve();


 /*instead*/  OCMAT2d_SequenceOfSequenceOfCurve^ Assign(OCNaroWrappers::OCMAT2d_SequenceOfSequenceOfCurve^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCTColGeom2d_SequenceOfCurve^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCMAT2d_SequenceOfSequenceOfCurve^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTColGeom2d_SequenceOfCurve^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCMAT2d_SequenceOfSequenceOfCurve^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTColGeom2d_SequenceOfCurve^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCMAT2d_SequenceOfSequenceOfCurve^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTColGeom2d_SequenceOfCurve^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCMAT2d_SequenceOfSequenceOfCurve^ S) ;


 /*instead*/  OCTColGeom2d_SequenceOfCurve^ First() ;


 /*instead*/  OCTColGeom2d_SequenceOfCurve^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCMAT2d_SequenceOfSequenceOfCurve^ Sub) ;


 /*instead*/  OCTColGeom2d_SequenceOfCurve^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCTColGeom2d_SequenceOfCurve^ I) ;


 /*instead*/  OCTColGeom2d_SequenceOfCurve^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCMAT2d_SequenceOfSequenceOfCurve()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif