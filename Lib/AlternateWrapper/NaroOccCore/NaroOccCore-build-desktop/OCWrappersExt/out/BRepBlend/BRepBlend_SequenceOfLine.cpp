// File generated by CPPExt (CPP file)
//

#include "BRepBlend_SequenceOfLine.h"
#include "../Converter.h"
#include "BRepBlend_Line.h"
#include "BRepBlend_SequenceNodeOfSequenceOfLine.h"


using namespace OCNaroWrappers;

OCBRepBlend_SequenceOfLine::OCBRepBlend_SequenceOfLine(BRepBlend_SequenceOfLine* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepBlend_SequenceOfLine::OCBRepBlend_SequenceOfLine() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new BRepBlend_SequenceOfLine();
}

OCBRepBlend_SequenceOfLine^ OCBRepBlend_SequenceOfLine::Assign(OCNaroWrappers::OCBRepBlend_SequenceOfLine^ Other)
{
  BRepBlend_SequenceOfLine* tmp = new BRepBlend_SequenceOfLine();
  *tmp = ((BRepBlend_SequenceOfLine*)nativeHandle)->Assign(*((BRepBlend_SequenceOfLine*)Other->Handle));
  return gcnew OCBRepBlend_SequenceOfLine(tmp);
}

 void OCBRepBlend_SequenceOfLine::Append(OCNaroWrappers::OCBRepBlend_Line^ T)
{
  ((BRepBlend_SequenceOfLine*)nativeHandle)->Append(*((Handle_BRepBlend_Line*)T->Handle));
}

 void OCBRepBlend_SequenceOfLine::Append(OCNaroWrappers::OCBRepBlend_SequenceOfLine^ S)
{
  ((BRepBlend_SequenceOfLine*)nativeHandle)->Append(*((BRepBlend_SequenceOfLine*)S->Handle));
}

 void OCBRepBlend_SequenceOfLine::Prepend(OCNaroWrappers::OCBRepBlend_Line^ T)
{
  ((BRepBlend_SequenceOfLine*)nativeHandle)->Prepend(*((Handle_BRepBlend_Line*)T->Handle));
}

 void OCBRepBlend_SequenceOfLine::Prepend(OCNaroWrappers::OCBRepBlend_SequenceOfLine^ S)
{
  ((BRepBlend_SequenceOfLine*)nativeHandle)->Prepend(*((BRepBlend_SequenceOfLine*)S->Handle));
}

 void OCBRepBlend_SequenceOfLine::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCBRepBlend_Line^ T)
{
  ((BRepBlend_SequenceOfLine*)nativeHandle)->InsertBefore(Index, *((Handle_BRepBlend_Line*)T->Handle));
}

 void OCBRepBlend_SequenceOfLine::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCBRepBlend_SequenceOfLine^ S)
{
  ((BRepBlend_SequenceOfLine*)nativeHandle)->InsertBefore(Index, *((BRepBlend_SequenceOfLine*)S->Handle));
}

 void OCBRepBlend_SequenceOfLine::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCBRepBlend_Line^ T)
{
  ((BRepBlend_SequenceOfLine*)nativeHandle)->InsertAfter(Index, *((Handle_BRepBlend_Line*)T->Handle));
}

 void OCBRepBlend_SequenceOfLine::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCBRepBlend_SequenceOfLine^ S)
{
  ((BRepBlend_SequenceOfLine*)nativeHandle)->InsertAfter(Index, *((BRepBlend_SequenceOfLine*)S->Handle));
}

OCBRepBlend_Line^ OCBRepBlend_SequenceOfLine::First()
{
  Handle(BRepBlend_Line) tmp = ((BRepBlend_SequenceOfLine*)nativeHandle)->First();
  return gcnew OCBRepBlend_Line(&tmp);
}

OCBRepBlend_Line^ OCBRepBlend_SequenceOfLine::Last()
{
  Handle(BRepBlend_Line) tmp = ((BRepBlend_SequenceOfLine*)nativeHandle)->Last();
  return gcnew OCBRepBlend_Line(&tmp);
}

 void OCBRepBlend_SequenceOfLine::Split(Standard_Integer Index, OCNaroWrappers::OCBRepBlend_SequenceOfLine^ Sub)
{
  ((BRepBlend_SequenceOfLine*)nativeHandle)->Split(Index, *((BRepBlend_SequenceOfLine*)Sub->Handle));
}

OCBRepBlend_Line^ OCBRepBlend_SequenceOfLine::Value(Standard_Integer Index)
{
  Handle(BRepBlend_Line) tmp = ((BRepBlend_SequenceOfLine*)nativeHandle)->Value(Index);
  return gcnew OCBRepBlend_Line(&tmp);
}

 void OCBRepBlend_SequenceOfLine::SetValue(Standard_Integer Index, OCNaroWrappers::OCBRepBlend_Line^ I)
{
  ((BRepBlend_SequenceOfLine*)nativeHandle)->SetValue(Index, *((Handle_BRepBlend_Line*)I->Handle));
}

OCBRepBlend_Line^ OCBRepBlend_SequenceOfLine::ChangeValue(Standard_Integer Index)
{
  Handle(BRepBlend_Line) tmp = ((BRepBlend_SequenceOfLine*)nativeHandle)->ChangeValue(Index);
  return gcnew OCBRepBlend_Line(&tmp);
}

 void OCBRepBlend_SequenceOfLine::Remove(Standard_Integer Index)
{
  ((BRepBlend_SequenceOfLine*)nativeHandle)->Remove(Index);
}

 void OCBRepBlend_SequenceOfLine::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((BRepBlend_SequenceOfLine*)nativeHandle)->Remove(FromIndex, ToIndex);
}

