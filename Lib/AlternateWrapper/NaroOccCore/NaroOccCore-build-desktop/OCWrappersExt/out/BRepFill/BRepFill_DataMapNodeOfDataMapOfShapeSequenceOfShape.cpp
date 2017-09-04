// File generated by CPPExt (CPP file)
//

#include "BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfShape.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopTools/TopTools_SequenceOfShape.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "BRepFill_DataMapOfShapeSequenceOfShape.h"
#include "BRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfShape.h"


using namespace OCNaroWrappers;

OCBRepFill_DataMapNodeOfDataMapOfShapeSequenceOfShape::OCBRepFill_DataMapNodeOfDataMapOfShapeSequenceOfShape(Handle(BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfShape)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfShape(*nativeHandle);
}

OCBRepFill_DataMapNodeOfDataMapOfShapeSequenceOfShape::OCBRepFill_DataMapNodeOfDataMapOfShapeSequenceOfShape(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCTopTools_SequenceOfShape^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfShape(new BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfShape(*((TopoDS_Shape*)K->Handle), *((TopTools_SequenceOfShape*)I->Handle), n));
}

OCTopoDS_Shape^ OCBRepFill_DataMapNodeOfDataMapOfShapeSequenceOfShape::Key()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfShape*)nativeHandle))->Key();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopTools_SequenceOfShape^ OCBRepFill_DataMapNodeOfDataMapOfShapeSequenceOfShape::Value()
{
  TopTools_SequenceOfShape* tmp = new TopTools_SequenceOfShape();
  *tmp = (*((Handle_BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfShape*)nativeHandle))->Value();
  return gcnew OCTopTools_SequenceOfShape(tmp);
}

