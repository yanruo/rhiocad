// File generated by CPPExt (CPP file)
//

#include "PlotMgt_ListOfMFTFonts.h"
#include "../Converter.h"
#include "../MFT/MFT_FontManager.h"


using namespace OCNaroWrappers;

OCPlotMgt_ListOfMFTFonts::OCPlotMgt_ListOfMFTFonts(PlotMgt_ListOfMFTFonts* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCPlotMgt_ListOfMFTFonts::OCPlotMgt_ListOfMFTFonts(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new PlotMgt_ListOfMFTFonts(Low, Up);
}

OCPlotMgt_ListOfMFTFonts::OCPlotMgt_ListOfMFTFonts(OCNaroWrappers::OCMFT_FontManager^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new PlotMgt_ListOfMFTFonts(*((Handle_MFT_FontManager*)Item->Handle), Low, Up);
}

 void OCPlotMgt_ListOfMFTFonts::Init(OCNaroWrappers::OCMFT_FontManager^ V)
{
  ((PlotMgt_ListOfMFTFonts*)nativeHandle)->Init(*((Handle_MFT_FontManager*)V->Handle));
}

 System::Boolean OCPlotMgt_ListOfMFTFonts::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((PlotMgt_ListOfMFTFonts*)nativeHandle)->IsAllocated());
}

OCPlotMgt_ListOfMFTFonts^ OCPlotMgt_ListOfMFTFonts::Assign(OCNaroWrappers::OCPlotMgt_ListOfMFTFonts^ Other)
{
  PlotMgt_ListOfMFTFonts* tmp = new PlotMgt_ListOfMFTFonts(0, 0);
  *tmp = ((PlotMgt_ListOfMFTFonts*)nativeHandle)->Assign(*((PlotMgt_ListOfMFTFonts*)Other->Handle));
  return gcnew OCPlotMgt_ListOfMFTFonts(tmp);
}

 Standard_Integer OCPlotMgt_ListOfMFTFonts::Length()
{
  return ((PlotMgt_ListOfMFTFonts*)nativeHandle)->Length();
}

 Standard_Integer OCPlotMgt_ListOfMFTFonts::Lower()
{
  return ((PlotMgt_ListOfMFTFonts*)nativeHandle)->Lower();
}

 Standard_Integer OCPlotMgt_ListOfMFTFonts::Upper()
{
  return ((PlotMgt_ListOfMFTFonts*)nativeHandle)->Upper();
}

 void OCPlotMgt_ListOfMFTFonts::SetValue(Standard_Integer Index, OCNaroWrappers::OCMFT_FontManager^ Value)
{
  ((PlotMgt_ListOfMFTFonts*)nativeHandle)->SetValue(Index, *((Handle_MFT_FontManager*)Value->Handle));
}

OCMFT_FontManager^ OCPlotMgt_ListOfMFTFonts::Value(Standard_Integer Index)
{
  Handle(MFT_FontManager) tmp = ((PlotMgt_ListOfMFTFonts*)nativeHandle)->Value(Index);
  return gcnew OCMFT_FontManager(&tmp);
}

OCMFT_FontManager^ OCPlotMgt_ListOfMFTFonts::ChangeValue(Standard_Integer Index)
{
  Handle(MFT_FontManager) tmp = ((PlotMgt_ListOfMFTFonts*)nativeHandle)->ChangeValue(Index);
  return gcnew OCMFT_FontManager(&tmp);
}

