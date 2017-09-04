// File generated by CPPExt (CPP file)
//

#include "Quantity_Date.h"
#include "../Converter.h"
#include "Quantity_Period.h"


using namespace OCNaroWrappers;

OCQuantity_Date::OCQuantity_Date(Quantity_Date* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCQuantity_Date::OCQuantity_Date() 
{
  nativeHandle = new Quantity_Date();
}

OCQuantity_Date::OCQuantity_Date(Standard_Integer mm, Standard_Integer dd, Standard_Integer yyyy, Standard_Integer hh, Standard_Integer mn, Standard_Integer ss, Standard_Integer mis, Standard_Integer mics) 
{
  nativeHandle = new Quantity_Date(mm, dd, yyyy, hh, mn, ss, mis, mics);
}

 void OCQuantity_Date::Values(Standard_Integer& mm, Standard_Integer& dd, Standard_Integer& yy, Standard_Integer& hh, Standard_Integer& mn, Standard_Integer& ss, Standard_Integer& mis, Standard_Integer& mics)
{
  ((Quantity_Date*)nativeHandle)->Values(mm, dd, yy, hh, mn, ss, mis, mics);
}

 void OCQuantity_Date::SetValues(Standard_Integer mm, Standard_Integer dd, Standard_Integer yy, Standard_Integer hh, Standard_Integer mn, Standard_Integer ss, Standard_Integer mis, Standard_Integer mics)
{
  ((Quantity_Date*)nativeHandle)->SetValues(mm, dd, yy, hh, mn, ss, mis, mics);
}

OCQuantity_Period^ OCQuantity_Date::Difference(OCNaroWrappers::OCQuantity_Date^ anOther)
{
  Quantity_Period* tmp = new Quantity_Period(0, 0, 0, 0, 0, 0);
  *tmp = ((Quantity_Date*)nativeHandle)->Difference(*((Quantity_Date*)anOther->Handle));
  return gcnew OCQuantity_Period(tmp);
}

OCQuantity_Date^ OCQuantity_Date::Subtract(OCNaroWrappers::OCQuantity_Period^ aPeriod)
{
  Quantity_Date* tmp = new Quantity_Date();
  *tmp = ((Quantity_Date*)nativeHandle)->Subtract(*((Quantity_Period*)aPeriod->Handle));
  return gcnew OCQuantity_Date(tmp);
}

OCQuantity_Date^ OCQuantity_Date::Add(OCNaroWrappers::OCQuantity_Period^ aPeriod)
{
  Quantity_Date* tmp = new Quantity_Date();
  *tmp = ((Quantity_Date*)nativeHandle)->Add(*((Quantity_Period*)aPeriod->Handle));
  return gcnew OCQuantity_Date(tmp);
}

 Standard_Integer OCQuantity_Date::Year()
{
  return ((Quantity_Date*)nativeHandle)->Year();
}

 Standard_Integer OCQuantity_Date::Month()
{
  return ((Quantity_Date*)nativeHandle)->Month();
}

 Standard_Integer OCQuantity_Date::Day()
{
  return ((Quantity_Date*)nativeHandle)->Day();
}

 Standard_Integer OCQuantity_Date::Hour()
{
  return ((Quantity_Date*)nativeHandle)->Hour();
}

 Standard_Integer OCQuantity_Date::Minute()
{
  return ((Quantity_Date*)nativeHandle)->Minute();
}

 Standard_Integer OCQuantity_Date::Second()
{
  return ((Quantity_Date*)nativeHandle)->Second();
}

 Standard_Integer OCQuantity_Date::MilliSecond()
{
  return ((Quantity_Date*)nativeHandle)->MilliSecond();
}

 Standard_Integer OCQuantity_Date::MicroSecond()
{
  return ((Quantity_Date*)nativeHandle)->MicroSecond();
}

 System::Boolean OCQuantity_Date::IsEqual(OCNaroWrappers::OCQuantity_Date^ anOther)
{
  return OCConverter::StandardBooleanToBoolean(((Quantity_Date*)nativeHandle)->IsEqual(*((Quantity_Date*)anOther->Handle)));
}

 System::Boolean OCQuantity_Date::IsEarlier(OCNaroWrappers::OCQuantity_Date^ anOther)
{
  return OCConverter::StandardBooleanToBoolean(((Quantity_Date*)nativeHandle)->IsEarlier(*((Quantity_Date*)anOther->Handle)));
}

 System::Boolean OCQuantity_Date::IsLater(OCNaroWrappers::OCQuantity_Date^ anOther)
{
  return OCConverter::StandardBooleanToBoolean(((Quantity_Date*)nativeHandle)->IsLater(*((Quantity_Date*)anOther->Handle)));
}

 System::Boolean OCQuantity_Date::IsValid(Standard_Integer mm, Standard_Integer dd, Standard_Integer yy, Standard_Integer hh, Standard_Integer mn, Standard_Integer ss, Standard_Integer mis, Standard_Integer mics)
{
  return OCConverter::StandardBooleanToBoolean(Quantity_Date::IsValid(mm, dd, yy, hh, mn, ss, mis, mics));
}

 System::Boolean OCQuantity_Date::IsLeap(Standard_Integer yy)
{
  return OCConverter::StandardBooleanToBoolean(Quantity_Date::IsLeap(yy));
}

