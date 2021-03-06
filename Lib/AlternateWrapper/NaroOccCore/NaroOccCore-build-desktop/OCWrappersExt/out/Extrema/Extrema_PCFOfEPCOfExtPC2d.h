// File generated by CPPExt (MPV)
//
#ifndef _Extrema_PCFOfEPCOfExtPC2d_OCWrappers_HeaderFile
#define _Extrema_PCFOfEPCOfExtPC2d_OCWrappers_HeaderFile

// include native header
#include <Extrema_PCFOfEPCOfExtPC2d.hxx>
#include "../Converter.h"

#include "../math/math_FunctionWithDerivative.h"

#include "../gp/gp_Pnt2d.h"
#include "../TColStd/TColStd_SequenceOfReal.h"
#include "../TColStd/TColStd_SequenceOfInteger.h"
#include "Extrema_SeqPCOfPCFOfEPCOfExtPC2d.h"
#include "../math/math_FunctionWithDerivative.h"


namespace OCNaroWrappers
{

ref class OCAdaptor2d_Curve2d;
ref class OCExtrema_Curve2dTool;
ref class OCExtrema_POnCurv2d;
ref class OCgp_Pnt2d;
ref class OCgp_Vec2d;
ref class OCExtrema_SeqPCOfPCFOfEPCOfExtPC2d;
ref class OCExtrema_SequenceNodeOfSeqPCOfPCFOfEPCOfExtPC2d;



public ref class OCExtrema_PCFOfEPCOfExtPC2d  : public OCmath_FunctionWithDerivative {

protected:
  // dummy constructor;
  OCExtrema_PCFOfEPCOfExtPC2d(OCDummy^) : OCmath_FunctionWithDerivative((OCDummy^)nullptr) {};

public:

// constructor from native
OCExtrema_PCFOfEPCOfExtPC2d(Extrema_PCFOfEPCOfExtPC2d* nativeHandle);

// Methods PUBLIC


OCExtrema_PCFOfEPCOfExtPC2d();


OCExtrema_PCFOfEPCOfExtPC2d(OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCAdaptor2d_Curve2d^ C);


 /*instead*/  void Initialize(OCNaroWrappers::OCAdaptor2d_Curve2d^ C) ;


 /*instead*/  void SetPoint(OCNaroWrappers::OCgp_Pnt2d^ P) ;


 /*instead*/  System::Boolean Value(Standard_Real U, Standard_Real& F) ;


 /*instead*/  System::Boolean Derivative(Standard_Real U, Standard_Real& DF) ;


 /*instead*/  System::Boolean Values(Standard_Real U, Standard_Real& F, Standard_Real& DF) ;


virtual /*instead*/  Standard_Integer GetStateNumber() override;


 /*instead*/  Standard_Integer NbExt() ;


 /*instead*/  Standard_Real SquareDistance(Standard_Integer N) ;


 /*instead*/  System::Boolean IsMin(Standard_Integer N) ;


 /*instead*/  OCExtrema_POnCurv2d^ Point(Standard_Integer N) ;

~OCExtrema_PCFOfEPCOfExtPC2d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
