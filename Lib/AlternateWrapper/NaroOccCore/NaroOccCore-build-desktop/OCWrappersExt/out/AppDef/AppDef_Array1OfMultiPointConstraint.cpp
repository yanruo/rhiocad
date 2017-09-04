// File generated by CPPExt (CPP file)
//

#include "AppDef_Array1OfMultiPointConstraint.h"
#include "../Converter.h"
#include "AppDef_MultiPointConstraint.h"


using namespace OCNaroWrappers;

OCAppDef_Array1OfMultiPointConstraint::OCAppDef_Array1OfMultiPointConstraint(AppDef_Array1OfMultiPointConstraint* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCAppDef_Array1OfMultiPointConstraint::OCAppDef_Array1OfMultiPointConstraint(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new AppDef_Array1OfMultiPointConstraint(Low, Up);
}

OCAppDef_Array1OfMultiPointConstraint::OCAppDef_Array1OfMultiPointConstraint(OCNaroWrappers::OCAppDef_MultiPointConstraint^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new AppDef_Array1OfMultiPointConstraint(*((AppDef_MultiPointConstraint*)Item->Handle), Low, Up);
}

 void OCAppDef_Array1OfMultiPointConstraint::Init(OCNaroWrappers::OCAppDef_MultiPointConstraint^ V)
{
  ((AppDef_Array1OfMultiPointConstraint*)nativeHandle)->Init(*((AppDef_MultiPointConstraint*)V->Handle));
}

 System::Boolean OCAppDef_Array1OfMultiPointConstraint::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((AppDef_Array1OfMultiPointConstraint*)nativeHandle)->IsAllocated());
}

OCAppDef_Array1OfMultiPointConstraint^ OCAppDef_Array1OfMultiPointConstraint::Assign(OCNaroWrappers::OCAppDef_Array1OfMultiPointConstraint^ Other)
{
  AppDef_Array1OfMultiPointConstraint* tmp = new AppDef_Array1OfMultiPointConstraint(0, 0);
  *tmp = ((AppDef_Array1OfMultiPointConstraint*)nativeHandle)->Assign(*((AppDef_Array1OfMultiPointConstraint*)Other->Handle));
  return gcnew OCAppDef_Array1OfMultiPointConstraint(tmp);
}

 Standard_Integer OCAppDef_Array1OfMultiPointConstraint::Length()
{
  return ((AppDef_Array1OfMultiPointConstraint*)nativeHandle)->Length();
}

 Standard_Integer OCAppDef_Array1OfMultiPointConstraint::Lower()
{
  return ((AppDef_Array1OfMultiPointConstraint*)nativeHandle)->Lower();
}

 Standard_Integer OCAppDef_Array1OfMultiPointConstraint::Upper()
{
  return ((AppDef_Array1OfMultiPointConstraint*)nativeHandle)->Upper();
}

 void OCAppDef_Array1OfMultiPointConstraint::SetValue(Standard_Integer Index, OCNaroWrappers::OCAppDef_MultiPointConstraint^ Value)
{
  ((AppDef_Array1OfMultiPointConstraint*)nativeHandle)->SetValue(Index, *((AppDef_MultiPointConstraint*)Value->Handle));
}

OCAppDef_MultiPointConstraint^ OCAppDef_Array1OfMultiPointConstraint::Value(Standard_Integer Index)
{
  AppDef_MultiPointConstraint* tmp = new AppDef_MultiPointConstraint();
  *tmp = ((AppDef_Array1OfMultiPointConstraint*)nativeHandle)->Value(Index);
  return gcnew OCAppDef_MultiPointConstraint(tmp);
}

OCAppDef_MultiPointConstraint^ OCAppDef_Array1OfMultiPointConstraint::ChangeValue(Standard_Integer Index)
{
  AppDef_MultiPointConstraint* tmp = new AppDef_MultiPointConstraint();
  *tmp = ((AppDef_Array1OfMultiPointConstraint*)nativeHandle)->ChangeValue(Index);
  return gcnew OCAppDef_MultiPointConstraint(tmp);
}

