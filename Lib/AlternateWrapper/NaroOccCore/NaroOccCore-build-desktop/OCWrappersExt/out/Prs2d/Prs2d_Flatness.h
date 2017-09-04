// File generated by CPPExt (Transient)
//
#ifndef _Prs2d_Flatness_OCWrappers_HeaderFile
#define _Prs2d_Flatness_OCWrappers_HeaderFile

// include the wrapped class
#include <Prs2d_Flatness.hxx>
#include "../Converter.h"

#include "Prs2d_Tolerance.h"



namespace OCNaroWrappers
{

ref class OCGraphic2d_GraphicObject;
ref class OCGraphic2d_Drawer;



public ref class OCPrs2d_Flatness : OCPrs2d_Tolerance {

protected:
  // dummy constructor;
  OCPrs2d_Flatness(OCDummy^) : OCPrs2d_Tolerance((OCDummy^)nullptr) {};

public:

// constructor from native
OCPrs2d_Flatness(Handle(Prs2d_Flatness)* nativeHandle);

// Methods PUBLIC

//! Creates a tolerance Flatness with the center at <aX>, <aY>; <br>
//!          length of this is <aLength>; <br>
//!          reference point is <aXPosition>, <aYPosition> <br>
OCPrs2d_Flatness(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGO, Standard_Real aX, Standard_Real aY, Standard_Real aLength, Standard_Real anAngle);


virtual /*instead*/  void Save(Aspect_FStream& aFStream) ;

~OCPrs2d_Flatness()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif