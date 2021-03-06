// File generated by CPPExt (CPP file)
//

#include "MeshVS_SequenceOfPrsBuilder.h"
#include "../Converter.h"
#include "MeshVS_PrsBuilder.h"
#include "MeshVS_SequenceNodeOfSequenceOfPrsBuilder.h"


using namespace OCNaroWrappers;

OCMeshVS_SequenceOfPrsBuilder::OCMeshVS_SequenceOfPrsBuilder(MeshVS_SequenceOfPrsBuilder* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCMeshVS_SequenceOfPrsBuilder::OCMeshVS_SequenceOfPrsBuilder() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new MeshVS_SequenceOfPrsBuilder();
}

OCMeshVS_SequenceOfPrsBuilder^ OCMeshVS_SequenceOfPrsBuilder::Assign(OCNaroWrappers::OCMeshVS_SequenceOfPrsBuilder^ Other)
{
  MeshVS_SequenceOfPrsBuilder* tmp = new MeshVS_SequenceOfPrsBuilder();
  *tmp = ((MeshVS_SequenceOfPrsBuilder*)nativeHandle)->Assign(*((MeshVS_SequenceOfPrsBuilder*)Other->Handle));
  return gcnew OCMeshVS_SequenceOfPrsBuilder(tmp);
}

 void OCMeshVS_SequenceOfPrsBuilder::Append(OCNaroWrappers::OCMeshVS_PrsBuilder^ T)
{
  ((MeshVS_SequenceOfPrsBuilder*)nativeHandle)->Append(*((Handle_MeshVS_PrsBuilder*)T->Handle));
}

 void OCMeshVS_SequenceOfPrsBuilder::Append(OCNaroWrappers::OCMeshVS_SequenceOfPrsBuilder^ S)
{
  ((MeshVS_SequenceOfPrsBuilder*)nativeHandle)->Append(*((MeshVS_SequenceOfPrsBuilder*)S->Handle));
}

 void OCMeshVS_SequenceOfPrsBuilder::Prepend(OCNaroWrappers::OCMeshVS_PrsBuilder^ T)
{
  ((MeshVS_SequenceOfPrsBuilder*)nativeHandle)->Prepend(*((Handle_MeshVS_PrsBuilder*)T->Handle));
}

 void OCMeshVS_SequenceOfPrsBuilder::Prepend(OCNaroWrappers::OCMeshVS_SequenceOfPrsBuilder^ S)
{
  ((MeshVS_SequenceOfPrsBuilder*)nativeHandle)->Prepend(*((MeshVS_SequenceOfPrsBuilder*)S->Handle));
}

 void OCMeshVS_SequenceOfPrsBuilder::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCMeshVS_PrsBuilder^ T)
{
  ((MeshVS_SequenceOfPrsBuilder*)nativeHandle)->InsertBefore(Index, *((Handle_MeshVS_PrsBuilder*)T->Handle));
}

 void OCMeshVS_SequenceOfPrsBuilder::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCMeshVS_SequenceOfPrsBuilder^ S)
{
  ((MeshVS_SequenceOfPrsBuilder*)nativeHandle)->InsertBefore(Index, *((MeshVS_SequenceOfPrsBuilder*)S->Handle));
}

 void OCMeshVS_SequenceOfPrsBuilder::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCMeshVS_PrsBuilder^ T)
{
  ((MeshVS_SequenceOfPrsBuilder*)nativeHandle)->InsertAfter(Index, *((Handle_MeshVS_PrsBuilder*)T->Handle));
}

 void OCMeshVS_SequenceOfPrsBuilder::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCMeshVS_SequenceOfPrsBuilder^ S)
{
  ((MeshVS_SequenceOfPrsBuilder*)nativeHandle)->InsertAfter(Index, *((MeshVS_SequenceOfPrsBuilder*)S->Handle));
}

OCMeshVS_PrsBuilder^ OCMeshVS_SequenceOfPrsBuilder::First()
{
  Handle(MeshVS_PrsBuilder) tmp = ((MeshVS_SequenceOfPrsBuilder*)nativeHandle)->First();
  return gcnew OCMeshVS_PrsBuilder(&tmp);
}

OCMeshVS_PrsBuilder^ OCMeshVS_SequenceOfPrsBuilder::Last()
{
  Handle(MeshVS_PrsBuilder) tmp = ((MeshVS_SequenceOfPrsBuilder*)nativeHandle)->Last();
  return gcnew OCMeshVS_PrsBuilder(&tmp);
}

 void OCMeshVS_SequenceOfPrsBuilder::Split(Standard_Integer Index, OCNaroWrappers::OCMeshVS_SequenceOfPrsBuilder^ Sub)
{
  ((MeshVS_SequenceOfPrsBuilder*)nativeHandle)->Split(Index, *((MeshVS_SequenceOfPrsBuilder*)Sub->Handle));
}

OCMeshVS_PrsBuilder^ OCMeshVS_SequenceOfPrsBuilder::Value(Standard_Integer Index)
{
  Handle(MeshVS_PrsBuilder) tmp = ((MeshVS_SequenceOfPrsBuilder*)nativeHandle)->Value(Index);
  return gcnew OCMeshVS_PrsBuilder(&tmp);
}

 void OCMeshVS_SequenceOfPrsBuilder::SetValue(Standard_Integer Index, OCNaroWrappers::OCMeshVS_PrsBuilder^ I)
{
  ((MeshVS_SequenceOfPrsBuilder*)nativeHandle)->SetValue(Index, *((Handle_MeshVS_PrsBuilder*)I->Handle));
}

OCMeshVS_PrsBuilder^ OCMeshVS_SequenceOfPrsBuilder::ChangeValue(Standard_Integer Index)
{
  Handle(MeshVS_PrsBuilder) tmp = ((MeshVS_SequenceOfPrsBuilder*)nativeHandle)->ChangeValue(Index);
  return gcnew OCMeshVS_PrsBuilder(&tmp);
}

 void OCMeshVS_SequenceOfPrsBuilder::Remove(Standard_Integer Index)
{
  ((MeshVS_SequenceOfPrsBuilder*)nativeHandle)->Remove(Index);
}

 void OCMeshVS_SequenceOfPrsBuilder::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((MeshVS_SequenceOfPrsBuilder*)nativeHandle)->Remove(FromIndex, ToIndex);
}


