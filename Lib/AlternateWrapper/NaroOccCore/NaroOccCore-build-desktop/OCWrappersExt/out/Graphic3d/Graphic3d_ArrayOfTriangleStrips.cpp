// File generated by CPPExt (CPP file)
//

#include "Graphic3d_ArrayOfTriangleStrips.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCGraphic3d_ArrayOfTriangleStrips::OCGraphic3d_ArrayOfTriangleStrips(Handle(Graphic3d_ArrayOfTriangleStrips)* nativeHandle) : OCGraphic3d_ArrayOfPrimitives((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Graphic3d_ArrayOfTriangleStrips(*nativeHandle);
}

OCGraphic3d_ArrayOfTriangleStrips::OCGraphic3d_ArrayOfTriangleStrips(Standard_Integer maxVertexs, Standard_Integer maxStrips, System::Boolean hasVNormals, System::Boolean hasVColors, System::Boolean hasSColors, System::Boolean hasTexels) : OCGraphic3d_ArrayOfPrimitives((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Graphic3d_ArrayOfTriangleStrips(new Graphic3d_ArrayOfTriangleStrips(maxVertexs, maxStrips, OCConverter::BooleanToStandardBoolean(hasVNormals), OCConverter::BooleanToStandardBoolean(hasVColors), OCConverter::BooleanToStandardBoolean(hasSColors), OCConverter::BooleanToStandardBoolean(hasTexels)));
}


