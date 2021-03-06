// File generated by CPPExt (CPP file)
//

#include "Transfer_ResultFromTransient.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "Transfer_Binder.h"
#include "../TColStd/TColStd_HSequenceOfTransient.h"
#include "../Interface/Interface_Check.h"
#include "../TColStd/TColStd_IndexedMapOfTransient.h"
#include "Transfer_TransientProcess.h"


using namespace OCNaroWrappers;

OCTransfer_ResultFromTransient::OCTransfer_ResultFromTransient(Handle(Transfer_ResultFromTransient)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Transfer_ResultFromTransient(*nativeHandle);
}

OCTransfer_ResultFromTransient::OCTransfer_ResultFromTransient() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Transfer_ResultFromTransient(new Transfer_ResultFromTransient());
}

 void OCTransfer_ResultFromTransient::SetStart(OCNaroWrappers::OCStandard_Transient^ start)
{
  (*((Handle_Transfer_ResultFromTransient*)nativeHandle))->SetStart(*((Handle_Standard_Transient*)start->Handle));
}

 void OCTransfer_ResultFromTransient::SetBinder(OCNaroWrappers::OCTransfer_Binder^ binder)
{
  (*((Handle_Transfer_ResultFromTransient*)nativeHandle))->SetBinder(*((Handle_Transfer_Binder*)binder->Handle));
}

OCStandard_Transient^ OCTransfer_ResultFromTransient::Start()
{
  Handle(Standard_Transient) tmp = (*((Handle_Transfer_ResultFromTransient*)nativeHandle))->Start();
  return gcnew OCStandard_Transient(&tmp);
}

OCTransfer_Binder^ OCTransfer_ResultFromTransient::Binder()
{
  Handle(Transfer_Binder) tmp = (*((Handle_Transfer_ResultFromTransient*)nativeHandle))->Binder();
  return gcnew OCTransfer_Binder(&tmp);
}

 System::Boolean OCTransfer_ResultFromTransient::HasResult()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Transfer_ResultFromTransient*)nativeHandle))->HasResult());
}

OCInterface_Check^ OCTransfer_ResultFromTransient::Check()
{
  Handle(Interface_Check) tmp = (*((Handle_Transfer_ResultFromTransient*)nativeHandle))->Check();
  return gcnew OCInterface_Check(&tmp);
}

 OCInterface_CheckStatus OCTransfer_ResultFromTransient::CheckStatus()
{
  return (OCInterface_CheckStatus)((*((Handle_Transfer_ResultFromTransient*)nativeHandle))->CheckStatus());
}

 void OCTransfer_ResultFromTransient::ClearSubs()
{
  (*((Handle_Transfer_ResultFromTransient*)nativeHandle))->ClearSubs();
}

 void OCTransfer_ResultFromTransient::AddSubResult(OCNaroWrappers::OCTransfer_ResultFromTransient^ sub)
{
  (*((Handle_Transfer_ResultFromTransient*)nativeHandle))->AddSubResult(*((Handle_Transfer_ResultFromTransient*)sub->Handle));
}

 Standard_Integer OCTransfer_ResultFromTransient::NbSubResults()
{
  return (*((Handle_Transfer_ResultFromTransient*)nativeHandle))->NbSubResults();
}

OCTransfer_ResultFromTransient^ OCTransfer_ResultFromTransient::SubResult(Standard_Integer num)
{
  Handle(Transfer_ResultFromTransient) tmp = (*((Handle_Transfer_ResultFromTransient*)nativeHandle))->SubResult(num);
  return gcnew OCTransfer_ResultFromTransient(&tmp);
}

OCTransfer_ResultFromTransient^ OCTransfer_ResultFromTransient::ResultFromKey(OCNaroWrappers::OCStandard_Transient^ key)
{
  Handle(Transfer_ResultFromTransient) tmp = (*((Handle_Transfer_ResultFromTransient*)nativeHandle))->ResultFromKey(*((Handle_Standard_Transient*)key->Handle));
  return gcnew OCTransfer_ResultFromTransient(&tmp);
}

 void OCTransfer_ResultFromTransient::FillMap(OCNaroWrappers::OCTColStd_IndexedMapOfTransient^ map)
{
  (*((Handle_Transfer_ResultFromTransient*)nativeHandle))->FillMap(*((TColStd_IndexedMapOfTransient*)map->Handle));
}

 void OCTransfer_ResultFromTransient::Fill(OCNaroWrappers::OCTransfer_TransientProcess^ TP)
{
  (*((Handle_Transfer_ResultFromTransient*)nativeHandle))->Fill(*((Handle_Transfer_TransientProcess*)TP->Handle));
}

 void OCTransfer_ResultFromTransient::Strip()
{
  (*((Handle_Transfer_ResultFromTransient*)nativeHandle))->Strip();
}

 void OCTransfer_ResultFromTransient::FillBack(OCNaroWrappers::OCTransfer_TransientProcess^ TP)
{
  (*((Handle_Transfer_ResultFromTransient*)nativeHandle))->FillBack(*((Handle_Transfer_TransientProcess*)TP->Handle));
}


