// File generated by CPPExt (CPP file)
//

#include "TopoDS_TWire.h"
#include "../Converter.h"
#include "TopoDS_TShape.h"


using namespace OCNaroWrappers;

OCTopoDS_TWire::OCTopoDS_TWire(Handle(TopoDS_TWire)* nativeHandle) : OCTopoDS_TShape((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopoDS_TWire(*nativeHandle);
}

OCTopoDS_TWire::OCTopoDS_TWire() : OCTopoDS_TShape((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopoDS_TWire(new TopoDS_TWire());
}

 OCTopAbs_ShapeEnum OCTopoDS_TWire::ShapeType()
{
  return (OCTopAbs_ShapeEnum)((*((Handle_TopoDS_TWire*)nativeHandle))->ShapeType());
}

OCTopoDS_TShape^ OCTopoDS_TWire::EmptyCopy()
{
  Handle(TopoDS_TShape) tmp = (*((Handle_TopoDS_TWire*)nativeHandle))->EmptyCopy();
  return gcnew OCTopoDS_TShape(&tmp);
}

