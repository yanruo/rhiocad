// File generated by CPPExt (CPP file)
//

#include "IntTools_Range.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCIntTools_Range::OCIntTools_Range(IntTools_Range* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntTools_Range::OCIntTools_Range() 
{
  nativeHandle = new IntTools_Range();
}

OCIntTools_Range::OCIntTools_Range(Standard_Real aFirst, Standard_Real aLast) 
{
  nativeHandle = new IntTools_Range(aFirst, aLast);
}

 void OCIntTools_Range::SetFirst(Standard_Real aFirst)
{
  ((IntTools_Range*)nativeHandle)->SetFirst(aFirst);
}

 void OCIntTools_Range::SetLast(Standard_Real aLast)
{
  ((IntTools_Range*)nativeHandle)->SetLast(aLast);
}

 Standard_Real OCIntTools_Range::First()
{
  return ((IntTools_Range*)nativeHandle)->First();
}

 Standard_Real OCIntTools_Range::Last()
{
  return ((IntTools_Range*)nativeHandle)->Last();
}

 void OCIntTools_Range::Range(Standard_Real& aFirst, Standard_Real& aLast)
{
  ((IntTools_Range*)nativeHandle)->Range(aFirst, aLast);
}

