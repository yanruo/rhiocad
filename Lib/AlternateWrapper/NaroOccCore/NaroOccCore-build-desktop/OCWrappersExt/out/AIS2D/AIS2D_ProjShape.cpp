// File generated by CPPExt (CPP file)
//

#include "AIS2D_ProjShape.h"
#include "../Converter.h"
#include "../Graphic2d/Graphic2d_SetOfSegments.h"
#include "../GGraphic2d/GGraphic2d_SetOfCurves.h"
#include "../HLRAlgo/HLRAlgo_Projector.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../Graphic2d/Graphic2d_Line.h"


using namespace OCNaroWrappers;

OCAIS2D_ProjShape::OCAIS2D_ProjShape(Handle(AIS2D_ProjShape)* nativeHandle) : OCAIS2D_InteractiveObject((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_AIS2D_ProjShape(*nativeHandle);
}

OCAIS2D_ProjShape::OCAIS2D_ProjShape() : OCAIS2D_InteractiveObject((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AIS2D_ProjShape(new AIS2D_ProjShape());
}

OCAIS2D_ProjShape::OCAIS2D_ProjShape(OCNaroWrappers::OCHLRAlgo_Projector^ aProjector, Standard_Integer nbIsos, System::Boolean isPolyAlgo, System::Boolean visHL) : OCAIS2D_InteractiveObject((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AIS2D_ProjShape(new AIS2D_ProjShape(*((HLRAlgo_Projector*)aProjector->Handle), nbIsos, OCConverter::BooleanToStandardBoolean(isPolyAlgo), OCConverter::BooleanToStandardBoolean(visHL)));
}

 void OCAIS2D_ProjShape::Add(OCNaroWrappers::OCTopoDS_Shape^ aShape)
{
  (*((Handle_AIS2D_ProjShape*)nativeHandle))->Add(*((TopoDS_Shape*)aShape->Handle));
}

 void OCAIS2D_ProjShape::SetProjector(OCNaroWrappers::OCHLRAlgo_Projector^ aProjector)
{
  (*((Handle_AIS2D_ProjShape*)nativeHandle))->SetProjector(*((HLRAlgo_Projector*)aProjector->Handle));
}

OCHLRAlgo_Projector^ OCAIS2D_ProjShape::Projector()
{
  HLRAlgo_Projector* tmp = new HLRAlgo_Projector();
  *tmp = (*((Handle_AIS2D_ProjShape*)nativeHandle))->Projector();
  return gcnew OCHLRAlgo_Projector(tmp);
}

 void OCAIS2D_ProjShape::SetNbIsos(Standard_Integer aNbIsos)
{
  (*((Handle_AIS2D_ProjShape*)nativeHandle))->SetNbIsos(aNbIsos);
}

 void OCAIS2D_ProjShape::SetPolyAlgo(System::Boolean aIsPoly)
{
  (*((Handle_AIS2D_ProjShape*)nativeHandle))->SetPolyAlgo(OCConverter::BooleanToStandardBoolean(aIsPoly));
}

 void OCAIS2D_ProjShape::SetHLMode(System::Boolean aIsHLM)
{
  (*((Handle_AIS2D_ProjShape*)nativeHandle))->SetHLMode(OCConverter::BooleanToStandardBoolean(aIsHLM));
}

 System::Boolean OCAIS2D_ProjShape::IsHLMode()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS2D_ProjShape*)nativeHandle))->IsHLMode());
}

 Standard_Integer OCAIS2D_ProjShape::GetNbIsos()
{
  return (*((Handle_AIS2D_ProjShape*)nativeHandle))->GetNbIsos();
}

 System::Boolean OCAIS2D_ProjShape::GetIsPoly()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS2D_ProjShape*)nativeHandle))->GetIsPoly());
}

OCGraphic2d_Line^ OCAIS2D_ProjShape::GetPrimitives()
{
  Handle(Graphic2d_Line) tmp = (*((Handle_AIS2D_ProjShape*)nativeHandle))->GetPrimitives();
  return gcnew OCGraphic2d_Line(&tmp);
}

OCGraphic2d_Line^ OCAIS2D_ProjShape::GetHLPrimitives()
{
  Handle(Graphic2d_Line) tmp = (*((Handle_AIS2D_ProjShape*)nativeHandle))->GetHLPrimitives();
  return gcnew OCGraphic2d_Line(&tmp);
}

 void OCAIS2D_ProjShape::ShowEdges(System::Boolean aSharp, System::Boolean aSmooth, System::Boolean aSewn, System::Boolean anOutline, System::Boolean anIsoline)
{
  (*((Handle_AIS2D_ProjShape*)nativeHandle))->ShowEdges(OCConverter::BooleanToStandardBoolean(aSharp), OCConverter::BooleanToStandardBoolean(aSmooth), OCConverter::BooleanToStandardBoolean(aSewn), OCConverter::BooleanToStandardBoolean(anOutline), OCConverter::BooleanToStandardBoolean(anIsoline));
}


