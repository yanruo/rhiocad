// File generated by CPPExt (CPP file)
//

#include "Viewer_View.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCViewer_View::OCViewer_View(Handle(Viewer_View)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Viewer_View(*nativeHandle);
}

OCViewer_View::OCViewer_View() : OCMMgt_TShared((OCDummy^)nullptr)

{}

 System::Boolean OCViewer_View::SetImmediateUpdate(System::Boolean onoff)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Viewer_View*)nativeHandle))->SetImmediateUpdate(OCConverter::BooleanToStandardBoolean(onoff)));
}


