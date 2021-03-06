// File generated by CPPExt (CPP file)
//

#include "BRep_Polygon3D.h"
#include "../Converter.h"
#include "../Poly/Poly_Polygon3D.h"
#include "../TopLoc/TopLoc_Location.h"
#include "BRep_CurveRepresentation.h"


using namespace OCNaroWrappers;

OCBRep_Polygon3D::OCBRep_Polygon3D(Handle(BRep_Polygon3D)* nativeHandle) : OCBRep_CurveRepresentation((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRep_Polygon3D(*nativeHandle);
}

OCBRep_Polygon3D::OCBRep_Polygon3D(OCNaroWrappers::OCPoly_Polygon3D^ P, OCNaroWrappers::OCTopLoc_Location^ L) : OCBRep_CurveRepresentation((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRep_Polygon3D(new BRep_Polygon3D(*((Handle_Poly_Polygon3D*)P->Handle), *((TopLoc_Location*)L->Handle)));
}

 System::Boolean OCBRep_Polygon3D::IsPolygon3D()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRep_Polygon3D*)nativeHandle))->IsPolygon3D());
}

OCPoly_Polygon3D^ OCBRep_Polygon3D::Polygon3D()
{
  Handle(Poly_Polygon3D) tmp = (*((Handle_BRep_Polygon3D*)nativeHandle))->Polygon3D();
  return gcnew OCPoly_Polygon3D(&tmp);
}

 void OCBRep_Polygon3D::Polygon3D(OCNaroWrappers::OCPoly_Polygon3D^ P)
{
  (*((Handle_BRep_Polygon3D*)nativeHandle))->Polygon3D(*((Handle_Poly_Polygon3D*)P->Handle));
}

OCBRep_CurveRepresentation^ OCBRep_Polygon3D::Copy()
{
  Handle(BRep_CurveRepresentation) tmp = (*((Handle_BRep_Polygon3D*)nativeHandle))->Copy();
  return gcnew OCBRep_CurveRepresentation(&tmp);
}


