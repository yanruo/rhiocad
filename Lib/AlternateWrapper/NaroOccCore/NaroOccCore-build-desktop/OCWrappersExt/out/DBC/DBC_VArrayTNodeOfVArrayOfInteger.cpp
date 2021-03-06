// File generated by CPPExt (CPP file)
//

#include "DBC_VArrayTNodeOfVArrayOfInteger.h"
#include "../Converter.h"
#include "DBC_VArrayOfInteger.h"
#include "DBC_VArrayNodeOfVArrayOfInteger.h"


using namespace OCNaroWrappers;

OCDBC_VArrayTNodeOfVArrayOfInteger::OCDBC_VArrayTNodeOfVArrayOfInteger(DBC_VArrayTNodeOfVArrayOfInteger* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCDBC_VArrayTNodeOfVArrayOfInteger::OCDBC_VArrayTNodeOfVArrayOfInteger() 
{
  nativeHandle = new DBC_VArrayTNodeOfVArrayOfInteger();
}

OCDBC_VArrayTNodeOfVArrayOfInteger::OCDBC_VArrayTNodeOfVArrayOfInteger(Standard_Integer aValue) 
{
  nativeHandle = new DBC_VArrayTNodeOfVArrayOfInteger(aValue);
}

 void OCDBC_VArrayTNodeOfVArrayOfInteger::SetValue(Standard_Integer aValue)
{
  ((DBC_VArrayTNodeOfVArrayOfInteger*)nativeHandle)->SetValue(aValue);
}

 Standard_Address OCDBC_VArrayTNodeOfVArrayOfInteger::Value()
{
  return ((DBC_VArrayTNodeOfVArrayOfInteger*)nativeHandle)->Value();
}


