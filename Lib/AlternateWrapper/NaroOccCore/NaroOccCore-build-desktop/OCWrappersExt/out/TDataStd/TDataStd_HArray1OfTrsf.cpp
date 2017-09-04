// File generated by CPPExt (CPP file)
//

#include "TDataStd_HArray1OfTrsf.h"
#include "../Converter.h"
#include "../gp/gp_Trsf.h"
#include "TDataStd_Array1OfTrsf.h"


using namespace OCNaroWrappers;

OCTDataStd_HArray1OfTrsf::OCTDataStd_HArray1OfTrsf(Handle(TDataStd_HArray1OfTrsf)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDataStd_HArray1OfTrsf(*nativeHandle);
}

OCTDataStd_HArray1OfTrsf::OCTDataStd_HArray1OfTrsf(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDataStd_HArray1OfTrsf(new TDataStd_HArray1OfTrsf(Low, Up));
}

OCTDataStd_HArray1OfTrsf::OCTDataStd_HArray1OfTrsf(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCgp_Trsf^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDataStd_HArray1OfTrsf(new TDataStd_HArray1OfTrsf(Low, Up, *((gp_Trsf*)V->Handle)));
}

 void OCTDataStd_HArray1OfTrsf::Init(OCNaroWrappers::OCgp_Trsf^ V)
{
  (*((Handle_TDataStd_HArray1OfTrsf*)nativeHandle))->Init(*((gp_Trsf*)V->Handle));
}

 Standard_Integer OCTDataStd_HArray1OfTrsf::Length()
{
  return (*((Handle_TDataStd_HArray1OfTrsf*)nativeHandle))->Length();
}

 Standard_Integer OCTDataStd_HArray1OfTrsf::Lower()
{
  return (*((Handle_TDataStd_HArray1OfTrsf*)nativeHandle))->Lower();
}

 Standard_Integer OCTDataStd_HArray1OfTrsf::Upper()
{
  return (*((Handle_TDataStd_HArray1OfTrsf*)nativeHandle))->Upper();
}

 void OCTDataStd_HArray1OfTrsf::SetValue(Standard_Integer Index, OCNaroWrappers::OCgp_Trsf^ Value)
{
  (*((Handle_TDataStd_HArray1OfTrsf*)nativeHandle))->SetValue(Index, *((gp_Trsf*)Value->Handle));
}

OCgp_Trsf^ OCTDataStd_HArray1OfTrsf::Value(Standard_Integer Index)
{
  gp_Trsf* tmp = new gp_Trsf();
  *tmp = (*((Handle_TDataStd_HArray1OfTrsf*)nativeHandle))->Value(Index);
  return gcnew OCgp_Trsf(tmp);
}

OCgp_Trsf^ OCTDataStd_HArray1OfTrsf::ChangeValue(Standard_Integer Index)
{
  gp_Trsf* tmp = new gp_Trsf();
  *tmp = (*((Handle_TDataStd_HArray1OfTrsf*)nativeHandle))->ChangeValue(Index);
  return gcnew OCgp_Trsf(tmp);
}

OCTDataStd_Array1OfTrsf^ OCTDataStd_HArray1OfTrsf::Array1()
{
  TDataStd_Array1OfTrsf* tmp = new TDataStd_Array1OfTrsf(0, 0);
  *tmp = (*((Handle_TDataStd_HArray1OfTrsf*)nativeHandle))->Array1();
  return gcnew OCTDataStd_Array1OfTrsf(tmp);
}

OCTDataStd_Array1OfTrsf^ OCTDataStd_HArray1OfTrsf::ChangeArray1()
{
  TDataStd_Array1OfTrsf* tmp = new TDataStd_Array1OfTrsf(0, 0);
  *tmp = (*((Handle_TDataStd_HArray1OfTrsf*)nativeHandle))->ChangeArray1();
  return gcnew OCTDataStd_Array1OfTrsf(tmp);
}

