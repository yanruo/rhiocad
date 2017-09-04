// File generated by CPPExt (CPP file)
//

#include "BRepAlgo_DataMapOfShapeListOfInteger.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TColStd/TColStd_ListOfInteger.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "BRepAlgo_DataMapNodeOfDataMapOfShapeListOfInteger.h"
#include "BRepAlgo_DataMapIteratorOfDataMapOfShapeListOfInteger.h"


using namespace OCNaroWrappers;

OCBRepAlgo_DataMapOfShapeListOfInteger::OCBRepAlgo_DataMapOfShapeListOfInteger(BRepAlgo_DataMapOfShapeListOfInteger* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepAlgo_DataMapOfShapeListOfInteger::OCBRepAlgo_DataMapOfShapeListOfInteger(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new BRepAlgo_DataMapOfShapeListOfInteger(NbBuckets);
}

OCBRepAlgo_DataMapOfShapeListOfInteger^ OCBRepAlgo_DataMapOfShapeListOfInteger::Assign(OCNaroWrappers::OCBRepAlgo_DataMapOfShapeListOfInteger^ Other)
{
  BRepAlgo_DataMapOfShapeListOfInteger* tmp = new BRepAlgo_DataMapOfShapeListOfInteger(0);
  *tmp = ((BRepAlgo_DataMapOfShapeListOfInteger*)nativeHandle)->Assign(*((BRepAlgo_DataMapOfShapeListOfInteger*)Other->Handle));
  return gcnew OCBRepAlgo_DataMapOfShapeListOfInteger(tmp);
}

 void OCBRepAlgo_DataMapOfShapeListOfInteger::ReSize(Standard_Integer NbBuckets)
{
  ((BRepAlgo_DataMapOfShapeListOfInteger*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCBRepAlgo_DataMapOfShapeListOfInteger::Bind(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCTColStd_ListOfInteger^ I)
{
  return OCConverter::StandardBooleanToBoolean(((BRepAlgo_DataMapOfShapeListOfInteger*)nativeHandle)->Bind(*((TopoDS_Shape*)K->Handle), *((TColStd_ListOfInteger*)I->Handle)));
}

 System::Boolean OCBRepAlgo_DataMapOfShapeListOfInteger::IsBound(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((BRepAlgo_DataMapOfShapeListOfInteger*)nativeHandle)->IsBound(*((TopoDS_Shape*)K->Handle)));
}

 System::Boolean OCBRepAlgo_DataMapOfShapeListOfInteger::UnBind(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((BRepAlgo_DataMapOfShapeListOfInteger*)nativeHandle)->UnBind(*((TopoDS_Shape*)K->Handle)));
}

OCTColStd_ListOfInteger^ OCBRepAlgo_DataMapOfShapeListOfInteger::Find(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  TColStd_ListOfInteger* tmp = new TColStd_ListOfInteger();
  *tmp = ((BRepAlgo_DataMapOfShapeListOfInteger*)nativeHandle)->Find(*((TopoDS_Shape*)K->Handle));
  return gcnew OCTColStd_ListOfInteger(tmp);
}

OCTColStd_ListOfInteger^ OCBRepAlgo_DataMapOfShapeListOfInteger::ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  TColStd_ListOfInteger* tmp = new TColStd_ListOfInteger();
  *tmp = ((BRepAlgo_DataMapOfShapeListOfInteger*)nativeHandle)->ChangeFind(*((TopoDS_Shape*)K->Handle));
  return gcnew OCTColStd_ListOfInteger(tmp);
}

