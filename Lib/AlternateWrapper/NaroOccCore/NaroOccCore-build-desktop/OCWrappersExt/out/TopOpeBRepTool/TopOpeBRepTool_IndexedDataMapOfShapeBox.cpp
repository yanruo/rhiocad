// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepTool_IndexedDataMapOfShapeBox.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../Bnd/Bnd_Box.h"
#include "../TopTools/TopTools_OrientedShapeMapHasher.h"
#include "TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeBox.h"


using namespace OCNaroWrappers;

OCTopOpeBRepTool_IndexedDataMapOfShapeBox::OCTopOpeBRepTool_IndexedDataMapOfShapeBox(TopOpeBRepTool_IndexedDataMapOfShapeBox* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRepTool_IndexedDataMapOfShapeBox::OCTopOpeBRepTool_IndexedDataMapOfShapeBox(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new TopOpeBRepTool_IndexedDataMapOfShapeBox(NbBuckets);
}

OCTopOpeBRepTool_IndexedDataMapOfShapeBox^ OCTopOpeBRepTool_IndexedDataMapOfShapeBox::Assign(OCNaroWrappers::OCTopOpeBRepTool_IndexedDataMapOfShapeBox^ Other)
{
  TopOpeBRepTool_IndexedDataMapOfShapeBox* tmp = new TopOpeBRepTool_IndexedDataMapOfShapeBox(0);
  *tmp = ((TopOpeBRepTool_IndexedDataMapOfShapeBox*)nativeHandle)->Assign(*((TopOpeBRepTool_IndexedDataMapOfShapeBox*)Other->Handle));
  return gcnew OCTopOpeBRepTool_IndexedDataMapOfShapeBox(tmp);
}

 void OCTopOpeBRepTool_IndexedDataMapOfShapeBox::ReSize(Standard_Integer NbBuckets)
{
  ((TopOpeBRepTool_IndexedDataMapOfShapeBox*)nativeHandle)->ReSize(NbBuckets);
}

 Standard_Integer OCTopOpeBRepTool_IndexedDataMapOfShapeBox::Add(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCBnd_Box^ I)
{
  return ((TopOpeBRepTool_IndexedDataMapOfShapeBox*)nativeHandle)->Add(*((TopoDS_Shape*)K->Handle), *((Bnd_Box*)I->Handle));
}

 void OCTopOpeBRepTool_IndexedDataMapOfShapeBox::Substitute(Standard_Integer I, OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCBnd_Box^ T)
{
  ((TopOpeBRepTool_IndexedDataMapOfShapeBox*)nativeHandle)->Substitute(I, *((TopoDS_Shape*)K->Handle), *((Bnd_Box*)T->Handle));
}

 void OCTopOpeBRepTool_IndexedDataMapOfShapeBox::RemoveLast()
{
  ((TopOpeBRepTool_IndexedDataMapOfShapeBox*)nativeHandle)->RemoveLast();
}

 System::Boolean OCTopOpeBRepTool_IndexedDataMapOfShapeBox::Contains(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepTool_IndexedDataMapOfShapeBox*)nativeHandle)->Contains(*((TopoDS_Shape*)K->Handle)));
}

OCTopoDS_Shape^ OCTopOpeBRepTool_IndexedDataMapOfShapeBox::FindKey(Standard_Integer I)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((TopOpeBRepTool_IndexedDataMapOfShapeBox*)nativeHandle)->FindKey(I);
  return gcnew OCTopoDS_Shape(tmp);
}

OCBnd_Box^ OCTopOpeBRepTool_IndexedDataMapOfShapeBox::FindFromIndex(Standard_Integer I)
{
  Bnd_Box* tmp = new Bnd_Box();
  *tmp = ((TopOpeBRepTool_IndexedDataMapOfShapeBox*)nativeHandle)->FindFromIndex(I);
  return gcnew OCBnd_Box(tmp);
}

OCBnd_Box^ OCTopOpeBRepTool_IndexedDataMapOfShapeBox::ChangeFromIndex(Standard_Integer I)
{
  Bnd_Box* tmp = new Bnd_Box();
  *tmp = ((TopOpeBRepTool_IndexedDataMapOfShapeBox*)nativeHandle)->ChangeFromIndex(I);
  return gcnew OCBnd_Box(tmp);
}

 Standard_Integer OCTopOpeBRepTool_IndexedDataMapOfShapeBox::FindIndex(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((TopOpeBRepTool_IndexedDataMapOfShapeBox*)nativeHandle)->FindIndex(*((TopoDS_Shape*)K->Handle));
}

OCBnd_Box^ OCTopOpeBRepTool_IndexedDataMapOfShapeBox::FindFromKey(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  Bnd_Box* tmp = new Bnd_Box();
  *tmp = ((TopOpeBRepTool_IndexedDataMapOfShapeBox*)nativeHandle)->FindFromKey(*((TopoDS_Shape*)K->Handle));
  return gcnew OCBnd_Box(tmp);
}

OCBnd_Box^ OCTopOpeBRepTool_IndexedDataMapOfShapeBox::ChangeFromKey(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  Bnd_Box* tmp = new Bnd_Box();
  *tmp = ((TopOpeBRepTool_IndexedDataMapOfShapeBox*)nativeHandle)->ChangeFromKey(*((TopoDS_Shape*)K->Handle));
  return gcnew OCBnd_Box(tmp);
}

 Standard_Address OCTopOpeBRepTool_IndexedDataMapOfShapeBox::FindFromKey1(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((TopOpeBRepTool_IndexedDataMapOfShapeBox*)nativeHandle)->FindFromKey1(*((TopoDS_Shape*)K->Handle));
}

 Standard_Address OCTopOpeBRepTool_IndexedDataMapOfShapeBox::ChangeFromKey1(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((TopOpeBRepTool_IndexedDataMapOfShapeBox*)nativeHandle)->ChangeFromKey1(*((TopoDS_Shape*)K->Handle));
}


