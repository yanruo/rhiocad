// File generated by CPPExt (Transient)
//
#ifndef _V2d_CircularGraphicGrid_OCWrappers_HeaderFile
#define _V2d_CircularGraphicGrid_OCWrappers_HeaderFile

// include the wrapped class
#include <V2d_CircularGraphicGrid.hxx>
#include "../Converter.h"

#include "../Graphic2d/Graphic2d_Primitive.h"

#include "../Aspect/Aspect_GridDrawMode.h"


namespace OCNaroWrappers
{

ref class OCGraphic2d_GraphicObject;
ref class OCGraphic2d_Drawer;



public ref class OCV2d_CircularGraphicGrid : OCGraphic2d_Primitive {

protected:
  // dummy constructor;
  OCV2d_CircularGraphicGrid(OCDummy^) : OCGraphic2d_Primitive((OCDummy^)nullptr) {};

public:

// constructor from native
OCV2d_CircularGraphicGrid(Handle(V2d_CircularGraphicGrid)* nativeHandle);

// Methods PUBLIC


OCV2d_CircularGraphicGrid(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject, Standard_Real X, Standard_Real Y, Standard_Real alpha, Standard_Real step, Standard_Integer aDivision, Standard_Integer PointsColorIndex);


 /*instead*/  void SetDrawMode(OCAspect_GridDrawMode aDrawMode) ;


virtual /*instead*/  void Save(Aspect_FStream& aFStream) ;

~OCV2d_CircularGraphicGrid()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif