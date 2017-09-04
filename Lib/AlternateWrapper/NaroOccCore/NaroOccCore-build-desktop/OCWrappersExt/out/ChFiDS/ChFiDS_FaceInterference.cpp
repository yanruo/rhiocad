// File generated by CPPExt (CPP file)
//

#include "ChFiDS_FaceInterference.h"
#include "../Converter.h"
#include "../Geom2d/Geom2d_Curve.h"


using namespace OCNaroWrappers;

OCChFiDS_FaceInterference::OCChFiDS_FaceInterference(ChFiDS_FaceInterference* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCChFiDS_FaceInterference::OCChFiDS_FaceInterference() 
{
  nativeHandle = new ChFiDS_FaceInterference();
}

 void OCChFiDS_FaceInterference::SetInterference(Standard_Integer LineIndex, OCTopAbs_Orientation Trans, OCNaroWrappers::OCGeom2d_Curve^ PCurv1, OCNaroWrappers::OCGeom2d_Curve^ PCurv2)
{
  ((ChFiDS_FaceInterference*)nativeHandle)->SetInterference(LineIndex, (TopAbs_Orientation)Trans, *((Handle_Geom2d_Curve*)PCurv1->Handle), *((Handle_Geom2d_Curve*)PCurv2->Handle));
}

 void OCChFiDS_FaceInterference::SetTransition(OCTopAbs_Orientation Trans)
{
  ((ChFiDS_FaceInterference*)nativeHandle)->SetTransition((TopAbs_Orientation)Trans);
}

 void OCChFiDS_FaceInterference::SetFirstParameter(Standard_Real U1)
{
  ((ChFiDS_FaceInterference*)nativeHandle)->SetFirstParameter(U1);
}

 void OCChFiDS_FaceInterference::SetLastParameter(Standard_Real U1)
{
  ((ChFiDS_FaceInterference*)nativeHandle)->SetLastParameter(U1);
}

 void OCChFiDS_FaceInterference::SetParameter(Standard_Real U1, System::Boolean IsFirst)
{
  ((ChFiDS_FaceInterference*)nativeHandle)->SetParameter(U1, OCConverter::BooleanToStandardBoolean(IsFirst));
}

 Standard_Integer OCChFiDS_FaceInterference::LineIndex()
{
  return ((ChFiDS_FaceInterference*)nativeHandle)->LineIndex();
}

 void OCChFiDS_FaceInterference::SetLineIndex(Standard_Integer I)
{
  ((ChFiDS_FaceInterference*)nativeHandle)->SetLineIndex(I);
}

 OCTopAbs_Orientation OCChFiDS_FaceInterference::Transition()
{
  return (OCTopAbs_Orientation)(((ChFiDS_FaceInterference*)nativeHandle)->Transition());
}

OCGeom2d_Curve^ OCChFiDS_FaceInterference::PCurveOnFace()
{
  Handle(Geom2d_Curve) tmp = ((ChFiDS_FaceInterference*)nativeHandle)->PCurveOnFace();
  return gcnew OCGeom2d_Curve(&tmp);
}

OCGeom2d_Curve^ OCChFiDS_FaceInterference::PCurveOnSurf()
{
  Handle(Geom2d_Curve) tmp = ((ChFiDS_FaceInterference*)nativeHandle)->PCurveOnSurf();
  return gcnew OCGeom2d_Curve(&tmp);
}

OCGeom2d_Curve^ OCChFiDS_FaceInterference::ChangePCurveOnFace()
{
  Handle(Geom2d_Curve) tmp = ((ChFiDS_FaceInterference*)nativeHandle)->ChangePCurveOnFace();
  return gcnew OCGeom2d_Curve(&tmp);
}

OCGeom2d_Curve^ OCChFiDS_FaceInterference::ChangePCurveOnSurf()
{
  Handle(Geom2d_Curve) tmp = ((ChFiDS_FaceInterference*)nativeHandle)->ChangePCurveOnSurf();
  return gcnew OCGeom2d_Curve(&tmp);
}

 Standard_Real OCChFiDS_FaceInterference::FirstParameter()
{
  return ((ChFiDS_FaceInterference*)nativeHandle)->FirstParameter();
}

 Standard_Real OCChFiDS_FaceInterference::LastParameter()
{
  return ((ChFiDS_FaceInterference*)nativeHandle)->LastParameter();
}

 Standard_Real OCChFiDS_FaceInterference::Parameter(System::Boolean IsFirst)
{
  return ((ChFiDS_FaceInterference*)nativeHandle)->Parameter(OCConverter::BooleanToStandardBoolean(IsFirst));
}

