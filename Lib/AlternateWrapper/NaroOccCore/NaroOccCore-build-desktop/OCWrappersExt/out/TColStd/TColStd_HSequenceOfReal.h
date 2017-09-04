// File generated by CPPExt (Transient)
//
#ifndef _TColStd_HSequenceOfReal_OCWrappers_HeaderFile
#define _TColStd_HSequenceOfReal_OCWrappers_HeaderFile

// include the wrapped class
#include <TColStd_HSequenceOfReal.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "TColStd_SequenceOfReal.h"


namespace OCNaroWrappers
{

ref class OCTColStd_SequenceOfReal;



public ref class OCTColStd_HSequenceOfReal : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCTColStd_HSequenceOfReal(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_HSequenceOfReal(Handle(TColStd_HSequenceOfReal)* nativeHandle);

// Methods PUBLIC


OCTColStd_HSequenceOfReal();


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  void Clear() ;


 /*instead*/  void Append(Standard_Real anItem) ;


 /*instead*/  void Append(OCNaroWrappers::OCTColStd_HSequenceOfReal^ aSequence) ;


 /*instead*/  void Prepend(Standard_Real anItem) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTColStd_HSequenceOfReal^ aSequence) ;


 /*instead*/  void Reverse() ;


 /*instead*/  void InsertBefore(Standard_Integer anIndex, Standard_Real anItem) ;


 /*instead*/  void InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCTColStd_HSequenceOfReal^ aSequence) ;


 /*instead*/  void InsertAfter(Standard_Integer anIndex, Standard_Real anItem) ;


 /*instead*/  void InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCTColStd_HSequenceOfReal^ aSequence) ;


 /*instead*/  void Exchange(Standard_Integer anIndex, Standard_Integer anOtherIndex) ;


 /*instead*/  OCTColStd_HSequenceOfReal^ Split(Standard_Integer anIndex) ;


 /*instead*/  void SetValue(Standard_Integer anIndex, Standard_Real anItem) ;


 /*instead*/  Standard_Real Value(Standard_Integer anIndex) ;


 /*instead*/  Standard_Real ChangeValue(Standard_Integer anIndex) ;


 /*instead*/  void Remove(Standard_Integer anIndex) ;


 /*instead*/  void Remove(Standard_Integer fromIndex, Standard_Integer toIndex) ;


 /*instead*/  OCTColStd_SequenceOfReal^ Sequence() ;


 /*instead*/  OCTColStd_SequenceOfReal^ ChangeSequence() ;


 /*instead*/  OCTColStd_HSequenceOfReal^ ShallowCopy() ;

~OCTColStd_HSequenceOfReal()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif