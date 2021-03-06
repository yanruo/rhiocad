// File generated by CPPExt (CPP file)
//

#include "StepAP203_Array1OfChangeRequestItem.h"
#include "../Converter.h"
#include "StepAP203_ChangeRequestItem.h"


using namespace OCNaroWrappers;

OCStepAP203_Array1OfChangeRequestItem::OCStepAP203_Array1OfChangeRequestItem(StepAP203_Array1OfChangeRequestItem* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCStepAP203_Array1OfChangeRequestItem::OCStepAP203_Array1OfChangeRequestItem(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepAP203_Array1OfChangeRequestItem(Low, Up);
}

OCStepAP203_Array1OfChangeRequestItem::OCStepAP203_Array1OfChangeRequestItem(OCNaroWrappers::OCStepAP203_ChangeRequestItem^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepAP203_Array1OfChangeRequestItem(*((StepAP203_ChangeRequestItem*)Item->Handle), Low, Up);
}

 void OCStepAP203_Array1OfChangeRequestItem::Init(OCNaroWrappers::OCStepAP203_ChangeRequestItem^ V)
{
  ((StepAP203_Array1OfChangeRequestItem*)nativeHandle)->Init(*((StepAP203_ChangeRequestItem*)V->Handle));
}

 System::Boolean OCStepAP203_Array1OfChangeRequestItem::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((StepAP203_Array1OfChangeRequestItem*)nativeHandle)->IsAllocated());
}

OCStepAP203_Array1OfChangeRequestItem^ OCStepAP203_Array1OfChangeRequestItem::Assign(OCNaroWrappers::OCStepAP203_Array1OfChangeRequestItem^ Other)
{
  StepAP203_Array1OfChangeRequestItem* tmp = new StepAP203_Array1OfChangeRequestItem(0, 0);
  *tmp = ((StepAP203_Array1OfChangeRequestItem*)nativeHandle)->Assign(*((StepAP203_Array1OfChangeRequestItem*)Other->Handle));
  return gcnew OCStepAP203_Array1OfChangeRequestItem(tmp);
}

 Standard_Integer OCStepAP203_Array1OfChangeRequestItem::Length()
{
  return ((StepAP203_Array1OfChangeRequestItem*)nativeHandle)->Length();
}

 Standard_Integer OCStepAP203_Array1OfChangeRequestItem::Lower()
{
  return ((StepAP203_Array1OfChangeRequestItem*)nativeHandle)->Lower();
}

 Standard_Integer OCStepAP203_Array1OfChangeRequestItem::Upper()
{
  return ((StepAP203_Array1OfChangeRequestItem*)nativeHandle)->Upper();
}

 void OCStepAP203_Array1OfChangeRequestItem::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepAP203_ChangeRequestItem^ Value)
{
  ((StepAP203_Array1OfChangeRequestItem*)nativeHandle)->SetValue(Index, *((StepAP203_ChangeRequestItem*)Value->Handle));
}

OCStepAP203_ChangeRequestItem^ OCStepAP203_Array1OfChangeRequestItem::Value(Standard_Integer Index)
{
  StepAP203_ChangeRequestItem* tmp = new StepAP203_ChangeRequestItem();
  *tmp = ((StepAP203_Array1OfChangeRequestItem*)nativeHandle)->Value(Index);
  return gcnew OCStepAP203_ChangeRequestItem(tmp);
}

OCStepAP203_ChangeRequestItem^ OCStepAP203_Array1OfChangeRequestItem::ChangeValue(Standard_Integer Index)
{
  StepAP203_ChangeRequestItem* tmp = new StepAP203_ChangeRequestItem();
  *tmp = ((StepAP203_Array1OfChangeRequestItem*)nativeHandle)->ChangeValue(Index);
  return gcnew OCStepAP203_ChangeRequestItem(tmp);
}


