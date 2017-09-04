// File generated by CPPExt (MPV)
//
#ifndef _Convert_ConicToBSplineCurve_OCWrappers_HeaderFile
#define _Convert_ConicToBSplineCurve_OCWrappers_HeaderFile

// include native header
#include <Convert_ConicToBSplineCurve.hxx>
#include "../Converter.h"


#include "Convert_ParameterisationType.h"


namespace OCNaroWrappers
{

ref class OCTColgp_HArray1OfPnt2d;
ref class OCTColStd_HArray1OfReal;
ref class OCTColStd_HArray1OfInteger;
ref class OCgp_Pnt2d;


//! Root class for algorithms which convert a conic curve into <br>
//!  a BSpline curve (CircleToBSplineCurve, EllipseToBSplineCurve, <br>
//!  HyperbolaToBSplineCurve, ParabolaToBSplineCurve). <br>
//! These algorithms all work on 2D curves from the gp <br>
//! package and compute all the data needed to construct a <br>
//! BSpline curve equivalent to the conic curve. This data consists of: <br>
//! -   the degree of the curve, <br>
//! -   the periodic characteristics of the curve, <br>
//! -   a poles table with associated weights, <br>
//! -   a knots table with associated multiplicities. <br>
//! The abstract class ConicToBSplineCurve provides a <br>
//! framework for storing and consulting this computed data. <br>
//! The data may then be used to construct a <br>
//! Geom2d_BSplineCurve curvSuper class of the following classes : <br>
//!  This abstract class implements the methods to get the geometric <br>
//!  representation of the B-spline curve equivalent to the conic. <br>
//!  The B-spline is computed at the creation time in the sub classes. <br>
//!  The B-spline curve is defined with its degree, its control points <br>
//!  (Poles), its weights, its knots and their multiplicity. <br>
//!  All the geometric entities used in this package are defined in 2D <br>
//!  space. <br>
//!  KeyWords : <br>
//!  Convert, Conic, BSplineCurve, 2D. <br>
public ref class OCConvert_ConicToBSplineCurve  {

protected:
  Convert_ConicToBSplineCurve* nativeHandle;
  OCConvert_ConicToBSplineCurve(OCDummy^) {};

public:
  property Convert_ConicToBSplineCurve* Handle
  {
    Convert_ConicToBSplineCurve* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCConvert_ConicToBSplineCurve(Convert_ConicToBSplineCurve* nativeHandle);

// Methods PUBLIC

//! Returns the degree of the BSpline curve whose data is <br>
//! computed in this framework. <br>
 /*instead*/  Standard_Integer Degree() ;

//! Returns the number of poles of the BSpline curve whose <br>
//! data is computed in this framework. <br>
 /*instead*/  Standard_Integer NbPoles() ;

//! Returns the number of knots of the BSpline curve whose <br>
//! data is computed in this framework. <br>
 /*instead*/  Standard_Integer NbKnots() ;

//! Returns true if the BSpline curve whose data is computed in <br>
//! this framework is periodic. <br>
 /*instead*/  System::Boolean IsPeriodic() ;

//! Returns the pole of index Index to the poles table of the <br>
//! BSpline curve whose data is computed in this framework. <br>
//! Exceptions <br>
//! Standard_OutOfRange if Index is outside the bounds of <br>
//! the poles table of the BSpline curve whose data is computed in this framework. <br>
 /*instead*/  OCgp_Pnt2d^ Pole(Standard_Integer Index) ;

//! Returns the weight of the pole of index Index to the poles <br>
//! table of the BSpline curve whose data is computed in this framework. <br>
//! Exceptions <br>
//! Standard_OutOfRange if Index is outside the bounds of <br>
//! the poles table of the BSpline curve whose data is computed in this framework. <br>
 /*instead*/  Standard_Real Weight(Standard_Integer Index) ;

//! Returns the knot of index Index to the knots table of the <br>
//! BSpline curve whose data is computed in this framework. <br>
//! Exceptions <br>
//! Standard_OutOfRange if Index is outside the bounds of <br>
//! the knots table of the BSpline curve whose data is computed in this framework. <br>
 /*instead*/  Standard_Real Knot(Standard_Integer Index) ;

//! Returns the multiplicity of the knot of index Index to the <br>
//! knots table of the BSpline curve whose data is computed in this framework. <br>
//! Exceptions <br>
//! Standard_OutOfRange if Index is outside the bounds of <br>
//! the knots table of the BSpline curve whose data is computed in this framework. <br>
 /*instead*/  Standard_Integer Multiplicity(Standard_Integer Index) ;


OCConvert_ConicToBSplineCurve(Standard_Integer NumberOfPoles, Standard_Integer NumberOfKnots, Standard_Integer Degree);


 /*instead*/  void BuildCosAndSin(OCConvert_ParameterisationType Parametrisation, OCNaroWrappers::OCTColStd_HArray1OfReal^ CosNumerator, OCNaroWrappers::OCTColStd_HArray1OfReal^ SinNumerator, OCNaroWrappers::OCTColStd_HArray1OfReal^ Denominator, Standard_Integer& Degree, OCNaroWrappers::OCTColStd_HArray1OfReal^ Knots, OCNaroWrappers::OCTColStd_HArray1OfInteger^ Mults) ;


 /*instead*/  void BuildCosAndSin(OCConvert_ParameterisationType Parametrisation, Standard_Real UFirst, Standard_Real ULast, OCNaroWrappers::OCTColStd_HArray1OfReal^ CosNumerator, OCNaroWrappers::OCTColStd_HArray1OfReal^ SinNumerator, OCNaroWrappers::OCTColStd_HArray1OfReal^ Denominator, Standard_Integer& Degree, OCNaroWrappers::OCTColStd_HArray1OfReal^ Knots, OCNaroWrappers::OCTColStd_HArray1OfInteger^ Mults) ;

~OCConvert_ConicToBSplineCurve()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif