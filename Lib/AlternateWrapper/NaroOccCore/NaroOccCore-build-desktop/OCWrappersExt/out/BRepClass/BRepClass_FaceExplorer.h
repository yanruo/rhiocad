// File generated by CPPExt (MPV)
//
#ifndef _BRepClass_FaceExplorer_OCWrappers_HeaderFile
#define _BRepClass_FaceExplorer_OCWrappers_HeaderFile

// include native header
#include <BRepClass_FaceExplorer.hxx>
#include "../Converter.h"


#include "../TopoDS/TopoDS_Face.h"
#include "../TopExp/TopExp_Explorer.h"
#include "../TopAbs/TopAbs_Orientation.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Face;
ref class OCgp_Pnt2d;
ref class OCgp_Lin2d;
ref class OCBRepClass_Edge;


//! Provide an   exploration of a  BRep Face   for the <br>
//!          classification. <br>
public ref class OCBRepClass_FaceExplorer  {

protected:
  BRepClass_FaceExplorer* nativeHandle;
  OCBRepClass_FaceExplorer(OCDummy^) {};

public:
  property BRepClass_FaceExplorer* Handle
  {
    BRepClass_FaceExplorer* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepClass_FaceExplorer(BRepClass_FaceExplorer* nativeHandle);

// Methods PUBLIC


OCBRepClass_FaceExplorer(OCNaroWrappers::OCTopoDS_Face^ F);

//! Should  return  True  if the  point  is  outside a <br>
//!          bounding volume of the face. <br>
 /*instead*/  System::Boolean Reject(OCNaroWrappers::OCgp_Pnt2d^ P) ;

//! Returns  in <L>, <Par>  a segment having at least <br>
//!          one  intersection  with  the   face  boundary  to <br>
//!          compute  intersections. <br>
 /*instead*/  System::Boolean Segment(OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Lin2d^ L, Standard_Real& Par) ;

//! Returns  in <L>, <Par>  a segment having at least <br>
//!          one  intersection  with  the   face  boundary  to <br>
//!          compute  intersections. Each call gives another segment. <br>
 /*instead*/  System::Boolean OtherSegment(OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Lin2d^ L, Standard_Real& Par) ;

//! Starts an exploration of the wires. <br>
 /*instead*/  void InitWires() ;

//! Returns True if there is  a current wire. <br>
//! <br>
 /*instead*/  System::Boolean MoreWires() ;

//! Sets the explorer  to the  next  wire. <br>
//! <br>
 /*instead*/  void NextWire() ;

//! Returns True  if the wire  bounding volume does not <br>
//!          intersect the segment. <br>
 /*instead*/  System::Boolean RejectWire(OCNaroWrappers::OCgp_Lin2d^ L, Standard_Real Par) ;

//! Starts an exploration of the  edges of the current <br>
//!          wire. <br>
 /*instead*/  void InitEdges() ;

//! Returns True if there is a current edge. <br>
//! <br>
 /*instead*/  System::Boolean MoreEdges() ;

//! Sets the explorer  to the  next  edge. <br>
//! <br>
 /*instead*/  void NextEdge() ;

//! Returns True  if the edge  bounding volume does not <br>
//!          intersect the segment. <br>
 /*instead*/  System::Boolean RejectEdge(OCNaroWrappers::OCgp_Lin2d^ L, Standard_Real Par) ;

//! Current edge in current wire and its orientation. <br>
 /*instead*/  void CurrentEdge(OCNaroWrappers::OCBRepClass_Edge^ E, OCTopAbs_Orientation& Or) ;

~OCBRepClass_FaceExplorer()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
