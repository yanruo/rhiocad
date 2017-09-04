// File generated by CPPExt (CPP file)
//

#include "IFSelect_GeneralModifier.h"
#include "../Converter.h"
#include "IFSelect_Selection.h"
#include "IFSelect_Dispatch.h"
#include "../TCollection/TCollection_AsciiString.h"


using namespace OCNaroWrappers;

OCIFSelect_GeneralModifier::OCIFSelect_GeneralModifier(Handle(IFSelect_GeneralModifier)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_IFSelect_GeneralModifier(*nativeHandle);
}

OCIFSelect_GeneralModifier::OCIFSelect_GeneralModifier(System::Boolean maychangegraph) : OCMMgt_TShared((OCDummy^)nullptr)

{}

 System::Boolean OCIFSelect_GeneralModifier::MayChangeGraph()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IFSelect_GeneralModifier*)nativeHandle))->MayChangeGraph());
}

 void OCIFSelect_GeneralModifier::SetDispatch(OCNaroWrappers::OCIFSelect_Dispatch^ disp)
{
  (*((Handle_IFSelect_GeneralModifier*)nativeHandle))->SetDispatch(*((Handle_IFSelect_Dispatch*)disp->Handle));
}

OCIFSelect_Dispatch^ OCIFSelect_GeneralModifier::Dispatch()
{
  Handle(IFSelect_Dispatch) tmp = (*((Handle_IFSelect_GeneralModifier*)nativeHandle))->Dispatch();
  return gcnew OCIFSelect_Dispatch(&tmp);
}

 System::Boolean OCIFSelect_GeneralModifier::Applies(OCNaroWrappers::OCIFSelect_Dispatch^ disp)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IFSelect_GeneralModifier*)nativeHandle))->Applies(*((Handle_IFSelect_Dispatch*)disp->Handle)));
}

 void OCIFSelect_GeneralModifier::SetSelection(OCNaroWrappers::OCIFSelect_Selection^ sel)
{
  (*((Handle_IFSelect_GeneralModifier*)nativeHandle))->SetSelection(*((Handle_IFSelect_Selection*)sel->Handle));
}

 void OCIFSelect_GeneralModifier::ResetSelection()
{
  (*((Handle_IFSelect_GeneralModifier*)nativeHandle))->ResetSelection();
}

 System::Boolean OCIFSelect_GeneralModifier::HasSelection()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IFSelect_GeneralModifier*)nativeHandle))->HasSelection());
}

OCIFSelect_Selection^ OCIFSelect_GeneralModifier::Selection()
{
  Handle(IFSelect_Selection) tmp = (*((Handle_IFSelect_GeneralModifier*)nativeHandle))->Selection();
  return gcnew OCIFSelect_Selection(&tmp);
}

