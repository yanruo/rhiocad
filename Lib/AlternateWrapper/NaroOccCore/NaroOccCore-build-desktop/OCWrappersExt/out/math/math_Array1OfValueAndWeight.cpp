// File generated by CPPExt (CPP file)
//

#include "math_Array1OfValueAndWeight.h"
#include "../Converter.h"
#include "math_ValueAndWeight.h"


using namespace OCNaroWrappers;

OCmath_Array1OfValueAndWeight::OCmath_Array1OfValueAndWeight(math_Array1OfValueAndWeight* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCmath_Array1OfValueAndWeight::OCmath_Array1OfValueAndWeight(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new math_Array1OfValueAndWeight(Low, Up);
}

OCmath_Array1OfValueAndWeight::OCmath_Array1OfValueAndWeight(OCNaroWrappers::OCmath_ValueAndWeight^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new math_Array1OfValueAndWeight(*((math_ValueAndWeight*)Item->Handle), Low, Up);
}

 void OCmath_Array1OfValueAndWeight::Init(OCNaroWrappers::OCmath_ValueAndWeight^ V)
{
  ((math_Array1OfValueAndWeight*)nativeHandle)->Init(*((math_ValueAndWeight*)V->Handle));
}

 System::Boolean OCmath_Array1OfValueAndWeight::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((math_Array1OfValueAndWeight*)nativeHandle)->IsAllocated());
}

OCmath_Array1OfValueAndWeight^ OCmath_Array1OfValueAndWeight::Assign(OCNaroWrappers::OCmath_Array1OfValueAndWeight^ Other)
{
  math_Array1OfValueAndWeight* tmp = new math_Array1OfValueAndWeight(0, 0);
  *tmp = ((math_Array1OfValueAndWeight*)nativeHandle)->Assign(*((math_Array1OfValueAndWeight*)Other->Handle));
  return gcnew OCmath_Array1OfValueAndWeight(tmp);
}

 Standard_Integer OCmath_Array1OfValueAndWeight::Length()
{
  return ((math_Array1OfValueAndWeight*)nativeHandle)->Length();
}

 Standard_Integer OCmath_Array1OfValueAndWeight::Lower()
{
  return ((math_Array1OfValueAndWeight*)nativeHandle)->Lower();
}

 Standard_Integer OCmath_Array1OfValueAndWeight::Upper()
{
  return ((math_Array1OfValueAndWeight*)nativeHandle)->Upper();
}

 void OCmath_Array1OfValueAndWeight::SetValue(Standard_Integer Index, OCNaroWrappers::OCmath_ValueAndWeight^ Value)
{
  ((math_Array1OfValueAndWeight*)nativeHandle)->SetValue(Index, *((math_ValueAndWeight*)Value->Handle));
}

OCmath_ValueAndWeight^ OCmath_Array1OfValueAndWeight::Value(Standard_Integer Index)
{
  math_ValueAndWeight* tmp = new math_ValueAndWeight();
  *tmp = ((math_Array1OfValueAndWeight*)nativeHandle)->Value(Index);
  return gcnew OCmath_ValueAndWeight(tmp);
}

OCmath_ValueAndWeight^ OCmath_Array1OfValueAndWeight::ChangeValue(Standard_Integer Index)
{
  math_ValueAndWeight* tmp = new math_ValueAndWeight();
  *tmp = ((math_Array1OfValueAndWeight*)nativeHandle)->ChangeValue(Index);
  return gcnew OCmath_ValueAndWeight(tmp);
}


