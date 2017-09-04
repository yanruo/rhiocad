// File generated by CPPExt (CPP file)
//

#include "TColStd_HSequenceOfAsciiString.h"
#include "../Converter.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "TColStd_SequenceOfAsciiString.h"


using namespace OCNaroWrappers;

OCTColStd_HSequenceOfAsciiString::OCTColStd_HSequenceOfAsciiString(Handle(TColStd_HSequenceOfAsciiString)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColStd_HSequenceOfAsciiString(*nativeHandle);
}

OCTColStd_HSequenceOfAsciiString::OCTColStd_HSequenceOfAsciiString() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColStd_HSequenceOfAsciiString(new TColStd_HSequenceOfAsciiString());
}

 System::Boolean OCTColStd_HSequenceOfAsciiString::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TColStd_HSequenceOfAsciiString*)nativeHandle))->IsEmpty());
}

 Standard_Integer OCTColStd_HSequenceOfAsciiString::Length()
{
  return (*((Handle_TColStd_HSequenceOfAsciiString*)nativeHandle))->Length();
}

 void OCTColStd_HSequenceOfAsciiString::Clear()
{
  (*((Handle_TColStd_HSequenceOfAsciiString*)nativeHandle))->Clear();
}

 void OCTColStd_HSequenceOfAsciiString::Append(OCNaroWrappers::OCTCollection_AsciiString^ anItem)
{
  (*((Handle_TColStd_HSequenceOfAsciiString*)nativeHandle))->Append(*((TCollection_AsciiString*)anItem->Handle));
}

 void OCTColStd_HSequenceOfAsciiString::Append(OCNaroWrappers::OCTColStd_HSequenceOfAsciiString^ aSequence)
{
  (*((Handle_TColStd_HSequenceOfAsciiString*)nativeHandle))->Append(*((Handle_TColStd_HSequenceOfAsciiString*)aSequence->Handle));
}

 void OCTColStd_HSequenceOfAsciiString::Prepend(OCNaroWrappers::OCTCollection_AsciiString^ anItem)
{
  (*((Handle_TColStd_HSequenceOfAsciiString*)nativeHandle))->Prepend(*((TCollection_AsciiString*)anItem->Handle));
}

 void OCTColStd_HSequenceOfAsciiString::Prepend(OCNaroWrappers::OCTColStd_HSequenceOfAsciiString^ aSequence)
{
  (*((Handle_TColStd_HSequenceOfAsciiString*)nativeHandle))->Prepend(*((Handle_TColStd_HSequenceOfAsciiString*)aSequence->Handle));
}

 void OCTColStd_HSequenceOfAsciiString::Reverse()
{
  (*((Handle_TColStd_HSequenceOfAsciiString*)nativeHandle))->Reverse();
}

 void OCTColStd_HSequenceOfAsciiString::InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCTCollection_AsciiString^ anItem)
{
  (*((Handle_TColStd_HSequenceOfAsciiString*)nativeHandle))->InsertBefore(anIndex, *((TCollection_AsciiString*)anItem->Handle));
}

 void OCTColStd_HSequenceOfAsciiString::InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCTColStd_HSequenceOfAsciiString^ aSequence)
{
  (*((Handle_TColStd_HSequenceOfAsciiString*)nativeHandle))->InsertBefore(anIndex, *((Handle_TColStd_HSequenceOfAsciiString*)aSequence->Handle));
}

 void OCTColStd_HSequenceOfAsciiString::InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCTCollection_AsciiString^ anItem)
{
  (*((Handle_TColStd_HSequenceOfAsciiString*)nativeHandle))->InsertAfter(anIndex, *((TCollection_AsciiString*)anItem->Handle));
}

 void OCTColStd_HSequenceOfAsciiString::InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCTColStd_HSequenceOfAsciiString^ aSequence)
{
  (*((Handle_TColStd_HSequenceOfAsciiString*)nativeHandle))->InsertAfter(anIndex, *((Handle_TColStd_HSequenceOfAsciiString*)aSequence->Handle));
}

 void OCTColStd_HSequenceOfAsciiString::Exchange(Standard_Integer anIndex, Standard_Integer anOtherIndex)
{
  (*((Handle_TColStd_HSequenceOfAsciiString*)nativeHandle))->Exchange(anIndex, anOtherIndex);
}

OCTColStd_HSequenceOfAsciiString^ OCTColStd_HSequenceOfAsciiString::Split(Standard_Integer anIndex)
{
  Handle(TColStd_HSequenceOfAsciiString) tmp = (*((Handle_TColStd_HSequenceOfAsciiString*)nativeHandle))->Split(anIndex);
  return gcnew OCTColStd_HSequenceOfAsciiString(&tmp);
}

 void OCTColStd_HSequenceOfAsciiString::SetValue(Standard_Integer anIndex, OCNaroWrappers::OCTCollection_AsciiString^ anItem)
{
  (*((Handle_TColStd_HSequenceOfAsciiString*)nativeHandle))->SetValue(anIndex, *((TCollection_AsciiString*)anItem->Handle));
}

OCTCollection_AsciiString^ OCTColStd_HSequenceOfAsciiString::Value(Standard_Integer anIndex)
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = (*((Handle_TColStd_HSequenceOfAsciiString*)nativeHandle))->Value(anIndex);
  return gcnew OCTCollection_AsciiString(tmp);
}

OCTCollection_AsciiString^ OCTColStd_HSequenceOfAsciiString::ChangeValue(Standard_Integer anIndex)
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = (*((Handle_TColStd_HSequenceOfAsciiString*)nativeHandle))->ChangeValue(anIndex);
  return gcnew OCTCollection_AsciiString(tmp);
}

 void OCTColStd_HSequenceOfAsciiString::Remove(Standard_Integer anIndex)
{
  (*((Handle_TColStd_HSequenceOfAsciiString*)nativeHandle))->Remove(anIndex);
}

 void OCTColStd_HSequenceOfAsciiString::Remove(Standard_Integer fromIndex, Standard_Integer toIndex)
{
  (*((Handle_TColStd_HSequenceOfAsciiString*)nativeHandle))->Remove(fromIndex, toIndex);
}

OCTColStd_SequenceOfAsciiString^ OCTColStd_HSequenceOfAsciiString::Sequence()
{
  TColStd_SequenceOfAsciiString* tmp = new TColStd_SequenceOfAsciiString();
  *tmp = (*((Handle_TColStd_HSequenceOfAsciiString*)nativeHandle))->Sequence();
  return gcnew OCTColStd_SequenceOfAsciiString(tmp);
}

OCTColStd_SequenceOfAsciiString^ OCTColStd_HSequenceOfAsciiString::ChangeSequence()
{
  TColStd_SequenceOfAsciiString* tmp = new TColStd_SequenceOfAsciiString();
  *tmp = (*((Handle_TColStd_HSequenceOfAsciiString*)nativeHandle))->ChangeSequence();
  return gcnew OCTColStd_SequenceOfAsciiString(tmp);
}

OCTColStd_HSequenceOfAsciiString^ OCTColStd_HSequenceOfAsciiString::ShallowCopy()
{
  Handle(TColStd_HSequenceOfAsciiString) tmp = (*((Handle_TColStd_HSequenceOfAsciiString*)nativeHandle))->ShallowCopy();
  return gcnew OCTColStd_HSequenceOfAsciiString(&tmp);
}

