// File generated by CPPExt (MPV)
//
#ifndef _IntPatch_Intersection_OCWrappers_HeaderFile
#define _IntPatch_Intersection_OCWrappers_HeaderFile

// include native header
#include <IntPatch_Intersection.hxx>
#include "../Converter.h"


#include "IntPatch_SequenceOfPoint.h"
#include "IntPatch_SequenceOfLine.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_HSurface;
ref class OCAdaptor3d_TopolTool;
ref class OCIntSurf_ListOfPntOn2S;
ref class OCIntPatch_Point;
ref class OCIntPatch_Line;
ref class OCIntPatch_SequenceOfLine;


//! This class provides a generic algorithm to intersect <br>
//!          2 surfaces. <br>
public ref class OCIntPatch_Intersection  {

protected:
  IntPatch_Intersection* nativeHandle;
  OCIntPatch_Intersection(OCDummy^) {};

public:
  property IntPatch_Intersection* Handle
  {
    IntPatch_Intersection* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntPatch_Intersection(IntPatch_Intersection* nativeHandle);

// Methods PUBLIC


OCIntPatch_Intersection();


OCIntPatch_Intersection(OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_TopolTool^ D1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2, OCNaroWrappers::OCAdaptor3d_TopolTool^ D2, Standard_Real TolArc, Standard_Real TolTang);


OCIntPatch_Intersection(OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_TopolTool^ D1, Standard_Real TolArc, Standard_Real TolTang);

//! Set the tolerances used by the algorithms: <br>
//!          --- Implicit   - Parametric <br>
//!          --- Parametric - Parametric <br>
//!          --- Implicit   - Implicit <br>
//! <br>
//!          TolArc   is  used  to   compute  the intersections <br>
//!          between the restrictions   of  a  surface   and  a <br>
//!          walking line. <br>
//! <br>
//!          TolTang is used to compute the points on a walking <br>
//!          line, and in geometric algorithms. <br>
//! <br>
//!          Fleche  is  a  parameter   used in    the  walking <br>
//!          algorithms to provide small curvatures on a line. <br>
//! <br>
//!          UVMaxStep is  a  parameter   used in  the  walking <br>
//!          algorithms  to    compute the  distance between to <br>
//!          points in their respective parametrtic spaces. <br>
//! <br>
 /*instead*/  void SetTolerances(Standard_Real TolArc, Standard_Real TolTang, Standard_Real UVMaxStep, Standard_Real Fleche) ;


 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_TopolTool^ D1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2, OCNaroWrappers::OCAdaptor3d_TopolTool^ D2, Standard_Real TolArc, Standard_Real TolTang) ;


 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_TopolTool^ D1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2, OCNaroWrappers::OCAdaptor3d_TopolTool^ D2, Standard_Real TolArc, Standard_Real TolTang, OCNaroWrappers::OCIntSurf_ListOfPntOn2S^ LOfPnts, System::Boolean RestrictLine) ;


 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_TopolTool^ D1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2, OCNaroWrappers::OCAdaptor3d_TopolTool^ D2, Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2, Standard_Real TolArc, Standard_Real TolTang) ;


 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_TopolTool^ D1, Standard_Real TolArc, Standard_Real TolTang) ;

//! Returns True if the calculus was succesfull. <br>
 /*instead*/  System::Boolean IsDone() ;

//! Returns true if the is no intersection. <br>
 /*instead*/  System::Boolean IsEmpty() ;

//! Returns True if the two patches are considered as <br>
//!          entierly tangent, i-e every restriction arc of one <br>
//!          patch is inside the geometric base of the other patch. <br>
 /*instead*/  System::Boolean TangentFaces() ;

//! Returns True when the TangentFaces returns True and the <br>
//!          normal vectors evaluated at a point on the first and the <br>
//!          second surface are opposite. <br>
//!          The exception DomainError is raised if TangentFaces <br>
//!          returns False. <br>
 /*instead*/  System::Boolean OppositeFaces() ;

//! Returns the number of "single" points. <br>
 /*instead*/  Standard_Integer NbPnts() ;

//! Returns the point of range Index. <br>
//!          An exception is raised if Index<=0 or Index>NbPnt. <br>
 /*instead*/  OCIntPatch_Point^ Point(Standard_Integer Index) ;

//! Returns the number of intersection lines. <br>
 /*instead*/  Standard_Integer NbLines() ;

//! Returns the line of range Index. <br>
//!          An exception is raised if Index<=0 or Index>NbLine. <br>
 /*instead*/  OCIntPatch_Line^ Line(Standard_Integer Index) ;


 /*instead*/  OCIntPatch_SequenceOfLine^ SequenceOfLine() ;

//! Dump of each result line. <br>
//!         Mode for more accurate dumps. <br>
//! <br>
 /*instead*/  void Dump(Standard_Integer Mode, OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_TopolTool^ D1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2, OCNaroWrappers::OCAdaptor3d_TopolTool^ D2) ;

~OCIntPatch_Intersection()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
