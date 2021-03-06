// File generated by CPPExt (CPP file)
//

#include "BRepCheck_DataMapOfShapeResult.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "BRepCheck_Result.h"
#include "../TopTools/TopTools_OrientedShapeMapHasher.h"
#include "BRepCheck_DataMapNodeOfDataMapOfShapeResult.h"
#include "BRepCheck_DataMapIteratorOfDataMapOfShapeResult.h"


using namespace OCNaroWrappers;

OCBRepCheck_DataMapOfShapeResult::OCBRepCheck_DataMapOfShapeResult(BRepCheck_DataMapOfShapeResult* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepCheck_DataMapOfShapeResult::OCBRepCheck_DataMapOfShapeResult(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new BRepCheck_DataMapOfShapeResult(NbBuckets);
}

OCBRepCheck_DataMapOfShapeResult^ OCBRepCheck_DataMapOfShapeResult::Assign(OCNaroWrappers::OCBRepCheck_DataMapOfShapeResult^ Other)
{
  BRepCheck_DataMapOfShapeResult* tmp = new BRepCheck_DataMapOfShapeResult(0);
  *tmp = ((BRepCheck_DataMapOfShapeResult*)nativeHandle)->Assign(*((BRepCheck_DataMapOfShapeResult*)Other->Handle));
  return gcnew OCBRepCheck_DataMapOfShapeResult(tmp);
}

 void OCBRepCheck_DataMapOfShapeResult::ReSize(Standard_Integer NbBuckets)
{
  ((BRepCheck_DataMapOfShapeResult*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCBRepCheck_DataMapOfShapeResult::Bind(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCBRepCheck_Result^ I)
{
  return OCConverter::StandardBooleanToBoolean(((BRepCheck_DataMapOfShapeResult*)nativeHandle)->Bind(*((TopoDS_Shape*)K->Handle), *((Handle_BRepCheck_Result*)I->Handle)));
}

 System::Boolean OCBRepCheck_DataMapOfShapeResult::IsBound(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((BRepCheck_DataMapOfShapeResult*)nativeHandle)->IsBound(*((TopoDS_Shape*)K->Handle)));
}

 System::Boolean OCBRepCheck_DataMapOfShapeResult::UnBind(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((BRepCheck_DataMapOfShapeResult*)nativeHandle)->UnBind(*((TopoDS_Shape*)K->Handle)));
}

OCBRepCheck_Result^ OCBRepCheck_DataMapOfShapeResult::Find(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  Handle(BRepCheck_Result) tmp = ((BRepCheck_DataMapOfShapeResult*)nativeHandle)->Find(*((TopoDS_Shape*)K->Handle));
  return gcnew OCBRepCheck_Result(&tmp);
}

OCBRepCheck_Result^ OCBRepCheck_DataMapOfShapeResult::ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  Handle(BRepCheck_Result) tmp = ((BRepCheck_DataMapOfShapeResult*)nativeHandle)->ChangeFind(*((TopoDS_Shape*)K->Handle));
  return gcnew OCBRepCheck_Result(&tmp);
}

 Standard_Address OCBRepCheck_DataMapOfShapeResult::Find1(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((BRepCheck_DataMapOfShapeResult*)nativeHandle)->Find1(*((TopoDS_Shape*)K->Handle));
}

 Standard_Address OCBRepCheck_DataMapOfShapeResult::ChangeFind1(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((BRepCheck_DataMapOfShapeResult*)nativeHandle)->ChangeFind1(*((TopoDS_Shape*)K->Handle));
}


