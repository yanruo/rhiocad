// File generated by CPPExt (CPP file)
//

#include "TColStd_SequenceOfReal.h"
#include "../Converter.h"
#include "TColStd_SequenceNodeOfSequenceOfReal.h"


using namespace OCNaroWrappers;

OCTColStd_SequenceOfReal::OCTColStd_SequenceOfReal(TColStd_SequenceOfReal* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTColStd_SequenceOfReal::OCTColStd_SequenceOfReal() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new TColStd_SequenceOfReal();
}

OCTColStd_SequenceOfReal^ OCTColStd_SequenceOfReal::Assign(OCNaroWrappers::OCTColStd_SequenceOfReal^ Other)
{
  TColStd_SequenceOfReal* tmp = new TColStd_SequenceOfReal();
  *tmp = ((TColStd_SequenceOfReal*)nativeHandle)->Assign(*((TColStd_SequenceOfReal*)Other->Handle));
  return gcnew OCTColStd_SequenceOfReal(tmp);
}

 void OCTColStd_SequenceOfReal::Append(Standard_Real T)
{
  ((TColStd_SequenceOfReal*)nativeHandle)->Append(T);
}

 void OCTColStd_SequenceOfReal::Append(OCNaroWrappers::OCTColStd_SequenceOfReal^ S)
{
  ((TColStd_SequenceOfReal*)nativeHandle)->Append(*((TColStd_SequenceOfReal*)S->Handle));
}

 void OCTColStd_SequenceOfReal::Prepend(Standard_Real T)
{
  ((TColStd_SequenceOfReal*)nativeHandle)->Prepend(T);
}

 void OCTColStd_SequenceOfReal::Prepend(OCNaroWrappers::OCTColStd_SequenceOfReal^ S)
{
  ((TColStd_SequenceOfReal*)nativeHandle)->Prepend(*((TColStd_SequenceOfReal*)S->Handle));
}

 void OCTColStd_SequenceOfReal::InsertBefore(Standard_Integer Index, Standard_Real T)
{
  ((TColStd_SequenceOfReal*)nativeHandle)->InsertBefore(Index, T);
}

 void OCTColStd_SequenceOfReal::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfReal^ S)
{
  ((TColStd_SequenceOfReal*)nativeHandle)->InsertBefore(Index, *((TColStd_SequenceOfReal*)S->Handle));
}

 void OCTColStd_SequenceOfReal::InsertAfter(Standard_Integer Index, Standard_Real T)
{
  ((TColStd_SequenceOfReal*)nativeHandle)->InsertAfter(Index, T);
}

 void OCTColStd_SequenceOfReal::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfReal^ S)
{
  ((TColStd_SequenceOfReal*)nativeHandle)->InsertAfter(Index, *((TColStd_SequenceOfReal*)S->Handle));
}

 Standard_Real OCTColStd_SequenceOfReal::First()
{
  return ((TColStd_SequenceOfReal*)nativeHandle)->First();
}

 Standard_Real OCTColStd_SequenceOfReal::Last()
{
  return ((TColStd_SequenceOfReal*)nativeHandle)->Last();
}

 void OCTColStd_SequenceOfReal::Split(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfReal^ Sub)
{
  ((TColStd_SequenceOfReal*)nativeHandle)->Split(Index, *((TColStd_SequenceOfReal*)Sub->Handle));
}

 Standard_Real OCTColStd_SequenceOfReal::Value(Standard_Integer Index)
{
  return ((TColStd_SequenceOfReal*)nativeHandle)->Value(Index);
}

 void OCTColStd_SequenceOfReal::SetValue(Standard_Integer Index, Standard_Real I)
{
  ((TColStd_SequenceOfReal*)nativeHandle)->SetValue(Index, I);
}

 Standard_Real OCTColStd_SequenceOfReal::ChangeValue(Standard_Integer Index)
{
  return ((TColStd_SequenceOfReal*)nativeHandle)->ChangeValue(Index);
}

 void OCTColStd_SequenceOfReal::Remove(Standard_Integer Index)
{
  ((TColStd_SequenceOfReal*)nativeHandle)->Remove(Index);
}

 void OCTColStd_SequenceOfReal::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((TColStd_SequenceOfReal*)nativeHandle)->Remove(FromIndex, ToIndex);
}

