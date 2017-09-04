// File generated by CPPExt (CPP file)
//

#include "BOPTools_VVInterference.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCBOPTools_VVInterference::OCBOPTools_VVInterference(BOPTools_VVInterference* nativeHandle) : OCBOPTools_ShapeShapeInterference((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBOPTools_VVInterference::OCBOPTools_VVInterference() : OCBOPTools_ShapeShapeInterference((OCDummy^)nullptr)

{
  nativeHandle = new BOPTools_VVInterference();
}

OCBOPTools_VVInterference::OCBOPTools_VVInterference(Standard_Integer anIndex1, Standard_Integer anIndex2) : OCBOPTools_ShapeShapeInterference((OCDummy^)nullptr)

{
  nativeHandle = new BOPTools_VVInterference(anIndex1, anIndex2);
}

