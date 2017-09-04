// File generated by CPPExt (MPV)
//
#ifndef _BRepBlend_Corde_OCWrappers_HeaderFile
#define _BRepBlend_Corde_OCWrappers_HeaderFile

// include native header
#include <BRepBlend_Corde.hxx>
#include "../Converter.h"


#include "../gp/gp_Pnt.h"
#include "../gp/gp_Pnt2d.h"
#include "../gp/gp_Vec.h"
#include "../gp/gp_Vec2d.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_HSurface;
ref class OCAdaptor3d_HCurve;
ref class OCBRepBlend_HCurveTool;
ref class OCBRepBlend_HSurfaceTool;
ref class OCmath_Vector;
ref class OCmath_Matrix;
ref class OCgp_Pnt;
ref class OCgp_Vec;
ref class OCgp_Vec2d;



public ref class OCBRepBlend_Corde  {

protected:
  BRepBlend_Corde* nativeHandle;
  OCBRepBlend_Corde(OCDummy^) {};

public:
  property BRepBlend_Corde* Handle
  {
    BRepBlend_Corde* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepBlend_Corde(BRepBlend_Corde* nativeHandle);

// Methods PUBLIC


OCBRepBlend_Corde(OCNaroWrappers::OCAdaptor3d_HSurface^ S, OCNaroWrappers::OCAdaptor3d_HCurve^ CGuide);


 /*instead*/  void SetParam(Standard_Real Param) ;


 /*instead*/  void SetDist(Standard_Real Dist) ;


 /*instead*/  System::Boolean Value(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F) ;


 /*instead*/  System::Boolean Derivatives(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Matrix^ D) ;


 /*instead*/  OCgp_Pnt^ PointOnS() ;


 /*instead*/  OCgp_Pnt^ PointOnGuide() ;


 /*instead*/  OCgp_Vec^ NPlan() ;


 /*instead*/  System::Boolean IsTangencyPoint() ;


 /*instead*/  OCgp_Vec^ TangentOnS() ;


 /*instead*/  OCgp_Vec2d^ Tangent2dOnS() ;


 /*instead*/  void DerFguide(OCNaroWrappers::OCmath_Vector^ Sol, OCNaroWrappers::OCgp_Vec2d^ DerF) ;


 /*instead*/  System::Boolean IsSolution(OCNaroWrappers::OCmath_Vector^ Sol, Standard_Real Tol) ;

~OCBRepBlend_Corde()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif