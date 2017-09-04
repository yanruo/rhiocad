// File generated by CPPExt (CPP file)
//

#include "Geom_SurfaceOfRevolution.h"
#include "../Converter.h"
#include "Geom_Curve.h"
#include "../gp/gp_Ax1.h"
#include "../gp/gp_Dir.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Ax2.h"
#include "../gp/gp_Trsf.h"
#include "../gp/gp_GTrsf2d.h"
#include "../gp/gp_Vec.h"
#include "Geom_Geometry.h"


using namespace OCNaroWrappers;

OCGeom_SurfaceOfRevolution::OCGeom_SurfaceOfRevolution(Handle(Geom_SurfaceOfRevolution)* nativeHandle) : OCGeom_SweptSurface((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Geom_SurfaceOfRevolution(*nativeHandle);
}

OCGeom_SurfaceOfRevolution::OCGeom_SurfaceOfRevolution(OCNaroWrappers::OCGeom_Curve^ C, OCNaroWrappers::OCgp_Ax1^ A1) : OCGeom_SweptSurface((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom_SurfaceOfRevolution(new Geom_SurfaceOfRevolution(*((Handle_Geom_Curve*)C->Handle), *((gp_Ax1*)A1->Handle)));
}

 void OCGeom_SurfaceOfRevolution::SetAxis(OCNaroWrappers::OCgp_Ax1^ A1)
{
  (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->SetAxis(*((gp_Ax1*)A1->Handle));
}

 void OCGeom_SurfaceOfRevolution::SetDirection(OCNaroWrappers::OCgp_Dir^ V)
{
  (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->SetDirection(*((gp_Dir*)V->Handle));
}

 void OCGeom_SurfaceOfRevolution::SetBasisCurve(OCNaroWrappers::OCGeom_Curve^ C)
{
  (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->SetBasisCurve(*((Handle_Geom_Curve*)C->Handle));
}

 void OCGeom_SurfaceOfRevolution::SetLocation(OCNaroWrappers::OCgp_Pnt^ P)
{
  (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->SetLocation(*((gp_Pnt*)P->Handle));
}

OCgp_Ax1^ OCGeom_SurfaceOfRevolution::Axis()
{
  gp_Ax1* tmp = new gp_Ax1();
  *tmp = (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->Axis();
  return gcnew OCgp_Ax1(tmp);
}

OCgp_Pnt^ OCGeom_SurfaceOfRevolution::Location()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->Location();
  return gcnew OCgp_Pnt(tmp);
}

OCgp_Ax2^ OCGeom_SurfaceOfRevolution::ReferencePlane()
{
  gp_Ax2* tmp = new gp_Ax2();
  *tmp = (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->ReferencePlane();
  return gcnew OCgp_Ax2(tmp);
}

 void OCGeom_SurfaceOfRevolution::UReverse()
{
  (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->UReverse();
}

 Standard_Real OCGeom_SurfaceOfRevolution::UReversedParameter(Standard_Real U)
{
  return (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->UReversedParameter(U);
}

 void OCGeom_SurfaceOfRevolution::VReverse()
{
  (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->VReverse();
}

 Standard_Real OCGeom_SurfaceOfRevolution::VReversedParameter(Standard_Real V)
{
  return (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->VReversedParameter(V);
}

 void OCGeom_SurfaceOfRevolution::TransformParameters(Standard_Real& U, Standard_Real& V, OCNaroWrappers::OCgp_Trsf^ T)
{
  (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->TransformParameters(U, V, *((gp_Trsf*)T->Handle));
}

OCgp_GTrsf2d^ OCGeom_SurfaceOfRevolution::ParametricTransformation(OCNaroWrappers::OCgp_Trsf^ T)
{
  gp_GTrsf2d* tmp = new gp_GTrsf2d();
  *tmp = (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->ParametricTransformation(*((gp_Trsf*)T->Handle));
  return gcnew OCgp_GTrsf2d(tmp);
}

 void OCGeom_SurfaceOfRevolution::Bounds(Standard_Real& U1, Standard_Real& U2, Standard_Real& V1, Standard_Real& V2)
{
  (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->Bounds(U1, U2, V1, V2);
}

 System::Boolean OCGeom_SurfaceOfRevolution::IsUClosed()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->IsUClosed());
}

 System::Boolean OCGeom_SurfaceOfRevolution::IsVClosed()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->IsVClosed());
}

 System::Boolean OCGeom_SurfaceOfRevolution::IsCNu(Standard_Integer N)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->IsCNu(N));
}

 System::Boolean OCGeom_SurfaceOfRevolution::IsCNv(Standard_Integer N)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->IsCNv(N));
}

 System::Boolean OCGeom_SurfaceOfRevolution::IsUPeriodic()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->IsUPeriodic());
}

 System::Boolean OCGeom_SurfaceOfRevolution::IsVPeriodic()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->IsVPeriodic());
}

OCGeom_Curve^ OCGeom_SurfaceOfRevolution::UIso(Standard_Real U)
{
  Handle(Geom_Curve) tmp = (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->UIso(U);
  return gcnew OCGeom_Curve(&tmp);
}

OCGeom_Curve^ OCGeom_SurfaceOfRevolution::VIso(Standard_Real V)
{
  Handle(Geom_Curve) tmp = (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->VIso(V);
  return gcnew OCGeom_Curve(&tmp);
}

 void OCGeom_SurfaceOfRevolution::D0(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P)
{
  (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->D0(U, V, *((gp_Pnt*)P->Handle));
}

 void OCGeom_SurfaceOfRevolution::D1(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V)
{
  (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->D1(U, V, *((gp_Pnt*)P->Handle), *((gp_Vec*)D1U->Handle), *((gp_Vec*)D1V->Handle));
}

 void OCGeom_SurfaceOfRevolution::D2(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V, OCNaroWrappers::OCgp_Vec^ D2U, OCNaroWrappers::OCgp_Vec^ D2V, OCNaroWrappers::OCgp_Vec^ D2UV)
{
  (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->D2(U, V, *((gp_Pnt*)P->Handle), *((gp_Vec*)D1U->Handle), *((gp_Vec*)D1V->Handle), *((gp_Vec*)D2U->Handle), *((gp_Vec*)D2V->Handle), *((gp_Vec*)D2UV->Handle));
}

 void OCGeom_SurfaceOfRevolution::D3(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V, OCNaroWrappers::OCgp_Vec^ D2U, OCNaroWrappers::OCgp_Vec^ D2V, OCNaroWrappers::OCgp_Vec^ D2UV, OCNaroWrappers::OCgp_Vec^ D3U, OCNaroWrappers::OCgp_Vec^ D3V, OCNaroWrappers::OCgp_Vec^ D3UUV, OCNaroWrappers::OCgp_Vec^ D3UVV)
{
  (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->D3(U, V, *((gp_Pnt*)P->Handle), *((gp_Vec*)D1U->Handle), *((gp_Vec*)D1V->Handle), *((gp_Vec*)D2U->Handle), *((gp_Vec*)D2V->Handle), *((gp_Vec*)D2UV->Handle), *((gp_Vec*)D3U->Handle), *((gp_Vec*)D3V->Handle), *((gp_Vec*)D3UUV->Handle), *((gp_Vec*)D3UVV->Handle));
}

OCgp_Vec^ OCGeom_SurfaceOfRevolution::DN(Standard_Real U, Standard_Real V, Standard_Integer Nu, Standard_Integer Nv)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->DN(U, V, Nu, Nv);
  return gcnew OCgp_Vec(tmp);
}

 void OCGeom_SurfaceOfRevolution::LocalD0(Standard_Real U, Standard_Real V, Standard_Integer USide, OCNaroWrappers::OCgp_Pnt^ P)
{
  (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->LocalD0(U, V, USide, *((gp_Pnt*)P->Handle));
}

 void OCGeom_SurfaceOfRevolution::LocalD1(Standard_Real U, Standard_Real V, Standard_Integer USide, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V)
{
  (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->LocalD1(U, V, USide, *((gp_Pnt*)P->Handle), *((gp_Vec*)D1U->Handle), *((gp_Vec*)D1V->Handle));
}

 void OCGeom_SurfaceOfRevolution::LocalD2(Standard_Real U, Standard_Real V, Standard_Integer USide, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V, OCNaroWrappers::OCgp_Vec^ D2U, OCNaroWrappers::OCgp_Vec^ D2V, OCNaroWrappers::OCgp_Vec^ D2UV)
{
  (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->LocalD2(U, V, USide, *((gp_Pnt*)P->Handle), *((gp_Vec*)D1U->Handle), *((gp_Vec*)D1V->Handle), *((gp_Vec*)D2U->Handle), *((gp_Vec*)D2V->Handle), *((gp_Vec*)D2UV->Handle));
}

 void OCGeom_SurfaceOfRevolution::LocalD3(Standard_Real U, Standard_Real V, Standard_Integer USide, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V, OCNaroWrappers::OCgp_Vec^ D2U, OCNaroWrappers::OCgp_Vec^ D2V, OCNaroWrappers::OCgp_Vec^ D2UV, OCNaroWrappers::OCgp_Vec^ D3U, OCNaroWrappers::OCgp_Vec^ D3V, OCNaroWrappers::OCgp_Vec^ D3UUV, OCNaroWrappers::OCgp_Vec^ D3UVV)
{
  (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->LocalD3(U, V, USide, *((gp_Pnt*)P->Handle), *((gp_Vec*)D1U->Handle), *((gp_Vec*)D1V->Handle), *((gp_Vec*)D2U->Handle), *((gp_Vec*)D2V->Handle), *((gp_Vec*)D2UV->Handle), *((gp_Vec*)D3U->Handle), *((gp_Vec*)D3V->Handle), *((gp_Vec*)D3UUV->Handle), *((gp_Vec*)D3UVV->Handle));
}

OCgp_Vec^ OCGeom_SurfaceOfRevolution::LocalDN(Standard_Real U, Standard_Real V, Standard_Integer USide, Standard_Integer Nu, Standard_Integer Nv)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->LocalDN(U, V, USide, Nu, Nv);
  return gcnew OCgp_Vec(tmp);
}

 void OCGeom_SurfaceOfRevolution::Transform(OCNaroWrappers::OCgp_Trsf^ T)
{
  (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->Transform(*((gp_Trsf*)T->Handle));
}

OCGeom_Geometry^ OCGeom_SurfaceOfRevolution::Copy()
{
  Handle(Geom_Geometry) tmp = (*((Handle_Geom_SurfaceOfRevolution*)nativeHandle))->Copy();
  return gcnew OCGeom_Geometry(&tmp);
}

