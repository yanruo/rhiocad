// File generated by CPPExt (CPP file)
//

#include "AlienImage_XAlienImage.h"
#include "../Converter.h"
#include "AlienImage_X11XWDAlienData.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "../Image/Image_Image.h"
#include "../OSD/OSD_File.h"


using namespace OCNaroWrappers;

OCAlienImage_XAlienImage::OCAlienImage_XAlienImage(Handle(AlienImage_XAlienImage)* nativeHandle) : OCAlienImage_AlienUserImage((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_AlienImage_XAlienImage(*nativeHandle);
}

OCAlienImage_XAlienImage::OCAlienImage_XAlienImage() : OCAlienImage_AlienUserImage((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AlienImage_XAlienImage(new AlienImage_XAlienImage());
}

 void OCAlienImage_XAlienImage::SetName(OCNaroWrappers::OCTCollection_AsciiString^ aName)
{
  (*((Handle_AlienImage_XAlienImage*)nativeHandle))->SetName(*((TCollection_AsciiString*)aName->Handle));
}

OCTCollection_AsciiString^ OCAlienImage_XAlienImage::Name()
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = (*((Handle_AlienImage_XAlienImage*)nativeHandle))->Name();
  return gcnew OCTCollection_AsciiString(tmp);
}

OCImage_Image^ OCAlienImage_XAlienImage::ToImage()
{
  Handle(Image_Image) tmp = (*((Handle_AlienImage_XAlienImage*)nativeHandle))->ToImage();
  return gcnew OCImage_Image(&tmp);
}

 void OCAlienImage_XAlienImage::FromImage(OCNaroWrappers::OCImage_Image^ anImage)
{
  (*((Handle_AlienImage_XAlienImage*)nativeHandle))->FromImage(*((Handle_Image_Image*)anImage->Handle));
}

 System::Boolean OCAlienImage_XAlienImage::Read(OCNaroWrappers::OCOSD_File^ afile)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AlienImage_XAlienImage*)nativeHandle))->Read(*((OSD_File*)afile->Handle)));
}

 System::Boolean OCAlienImage_XAlienImage::Write(OCNaroWrappers::OCOSD_File^ afile)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AlienImage_XAlienImage*)nativeHandle))->Write(*((OSD_File*)afile->Handle)));
}

