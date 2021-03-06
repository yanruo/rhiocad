// File generated by CPPExt (CPP file)
//

#include "Extrema_POnSurf.h"
#include "../Converter.h"
#include "../gp/gp_Pnt.h"


using namespace OCNaroWrappers;

OCExtrema_POnSurf::OCExtrema_POnSurf(Extrema_POnSurf* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCExtrema_POnSurf::OCExtrema_POnSurf() 
{
  nativeHandle = new Extrema_POnSurf();
}

OCExtrema_POnSurf::OCExtrema_POnSurf(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P) 
{
  nativeHandle = new Extrema_POnSurf(U, V, *((gp_Pnt*)P->Handle));
}

OCgp_Pnt^ OCExtrema_POnSurf::Value()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((Extrema_POnSurf*)nativeHandle)->Value();
  return gcnew OCgp_Pnt(tmp);
}

 void OCExtrema_POnSurf::Parameter(Standard_Real& U, Standard_Real& V)
{
  ((Extrema_POnSurf*)nativeHandle)->Parameter(U, V);
}


