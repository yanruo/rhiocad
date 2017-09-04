// File generated by CPPExt (Transient)
//
#ifndef _Graphic2d_Segment_OCWrappers_HeaderFile
#define _Graphic2d_Segment_OCWrappers_HeaderFile

// include the wrapped class
#include <Graphic2d_Segment.hxx>
#include "../Converter.h"

#include "Graphic2d_Line.h"



namespace OCNaroWrappers
{

ref class OCGraphic2d_GraphicObject;
ref class OCGraphic2d_Drawer;


//! The primitive Segment <br>
public ref class OCGraphic2d_Segment : OCGraphic2d_Line {

protected:
  // dummy constructor;
  OCGraphic2d_Segment(OCDummy^) : OCGraphic2d_Line((OCDummy^)nullptr) {};

public:

// constructor from native
OCGraphic2d_Segment(Handle(Graphic2d_Segment)* nativeHandle);

// Methods PUBLIC

//! Creates a segment in the graphic object <aGraphicObject>. <br>
//!	    The first point is <X1>, <Y1>. <br>
//!	    The second point is <X2>, <Y2>. <br>
//!  Warning: Raises SegmentDefinitionError if the <br>
//!	    first point and the second point are identical. <br>
OCGraphic2d_Segment(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject, Quantity_Length X1, Quantity_Length Y1, Quantity_Length X2, Quantity_Length Y2);

//! returns the coordinates of the first point of the segment <br>
 /*instead*/  void FirstPoint(Quantity_Length& X, Quantity_Length& Y) ;

//! returns the coordinates of the second point of the segment <br>
 /*instead*/  void SecondPoint(Quantity_Length& X, Quantity_Length& Y) ;


virtual /*instead*/  void Save(Aspect_FStream& aFStream) ;


static /*instead*/  void Retrieve(Aspect_IFStream& anIFStream, OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject) ;

~OCGraphic2d_Segment()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif