// File generated by CPPExt (CPP file)
//

#include "V2d_CircularGrid.h"
#include "../Converter.h"
#include "../Graphic2d/Graphic2d_GraphicObject.h"
#include "V2d_CircularGraphicGrid.h"


using namespace OCNaroWrappers;

OCV2d_CircularGrid::OCV2d_CircularGrid(Handle(V2d_CircularGrid)* nativeHandle) : OCAspect_CircularGrid((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_V2d_CircularGrid(*nativeHandle);
}

OCV2d_CircularGrid::OCV2d_CircularGrid(V2d_ViewerPointer aViewer, Standard_Integer aColorIndex1, Standard_Integer aColorIndex2) : OCAspect_CircularGrid((OCDummy^)nullptr)

{
  nativeHandle = new Handle_V2d_CircularGrid(new V2d_CircularGrid(aViewer, aColorIndex1, aColorIndex2));
}

 void OCV2d_CircularGrid::SetColorIndices(Standard_Integer aColorIndex1, Standard_Integer aColorIndex2)
{
  (*((Handle_V2d_CircularGrid*)nativeHandle))->SetColorIndices(aColorIndex1, aColorIndex2);
}

 void OCV2d_CircularGrid::Display()
{
  (*((Handle_V2d_CircularGrid*)nativeHandle))->Display();
}

 void OCV2d_CircularGrid::Erase()
{
  (*((Handle_V2d_CircularGrid*)nativeHandle))->Erase();
}

 System::Boolean OCV2d_CircularGrid::IsDisplayed()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_V2d_CircularGrid*)nativeHandle))->IsDisplayed());
}


