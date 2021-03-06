// File generated by CPPExt (CPP file)
//

#include "gce_MakeElips2d.h"
#include "../Converter.h"
#include "../gp/gp_Ax2d.h"
#include "../gp/gp_Ax22d.h"
#include "../gp/gp_Pnt2d.h"
#include "../gp/gp_Elips2d.h"


using namespace OCNaroWrappers;

OCgce_MakeElips2d::OCgce_MakeElips2d(gce_MakeElips2d* nativeHandle) : OCgce_Root((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCgce_MakeElips2d::OCgce_MakeElips2d(OCNaroWrappers::OCgp_Ax2d^ MajorAxis, Standard_Real MajorRadius, Standard_Real MinorRadius, System::Boolean Sense) : OCgce_Root((OCDummy^)nullptr)

{
  nativeHandle = new gce_MakeElips2d(*((gp_Ax2d*)MajorAxis->Handle), MajorRadius, MinorRadius, OCConverter::BooleanToStandardBoolean(Sense));
}

OCgce_MakeElips2d::OCgce_MakeElips2d(OCNaroWrappers::OCgp_Ax22d^ A, Standard_Real MajorRadius, Standard_Real MinorRadius) : OCgce_Root((OCDummy^)nullptr)

{
  nativeHandle = new gce_MakeElips2d(*((gp_Ax22d*)A->Handle), MajorRadius, MinorRadius);
}

OCgce_MakeElips2d::OCgce_MakeElips2d(OCNaroWrappers::OCgp_Pnt2d^ S1, OCNaroWrappers::OCgp_Pnt2d^ S2, OCNaroWrappers::OCgp_Pnt2d^ Center) : OCgce_Root((OCDummy^)nullptr)

{
  nativeHandle = new gce_MakeElips2d(*((gp_Pnt2d*)S1->Handle), *((gp_Pnt2d*)S2->Handle), *((gp_Pnt2d*)Center->Handle));
}

OCgp_Elips2d^ OCgce_MakeElips2d::Value()
{
  gp_Elips2d* tmp = new gp_Elips2d();
  *tmp = ((gce_MakeElips2d*)nativeHandle)->Value();
  return gcnew OCgp_Elips2d(tmp);
}

OCgp_Elips2d^ OCgce_MakeElips2d::Operator()
{
  gp_Elips2d* tmp = new gp_Elips2d();
  *tmp = ((gce_MakeElips2d*)nativeHandle)->Operator();
  return gcnew OCgp_Elips2d(tmp);
}


