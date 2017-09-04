// File generated by CPPExt (CPP file)
//

#include "MDF_ReferenceStorageDriver.h"
#include "../Converter.h"
#include "../CDM/CDM_MessageDriver.h"
#include "../Standard/Standard_Type.h"
#include "../PDF/PDF_Attribute.h"
#include "../TDF/TDF_Attribute.h"
#include "MDF_SRelocationTable.h"


using namespace OCNaroWrappers;

OCMDF_ReferenceStorageDriver::OCMDF_ReferenceStorageDriver(Handle(MDF_ReferenceStorageDriver)* nativeHandle) : OCMDF_ASDriver((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_MDF_ReferenceStorageDriver(*nativeHandle);
}

OCMDF_ReferenceStorageDriver::OCMDF_ReferenceStorageDriver(OCNaroWrappers::OCCDM_MessageDriver^ theMessageDriver) : OCMDF_ASDriver((OCDummy^)nullptr)

{
  nativeHandle = new Handle_MDF_ReferenceStorageDriver(new MDF_ReferenceStorageDriver(*((Handle_CDM_MessageDriver*)theMessageDriver->Handle)));
}

 Standard_Integer OCMDF_ReferenceStorageDriver::VersionNumber()
{
  return (*((Handle_MDF_ReferenceStorageDriver*)nativeHandle))->VersionNumber();
}

OCStandard_Type^ OCMDF_ReferenceStorageDriver::SourceType()
{
  Handle(Standard_Type) tmp = (*((Handle_MDF_ReferenceStorageDriver*)nativeHandle))->SourceType();
  return gcnew OCStandard_Type(&tmp);
}

OCPDF_Attribute^ OCMDF_ReferenceStorageDriver::NewEmpty()
{
  Handle(PDF_Attribute) tmp = (*((Handle_MDF_ReferenceStorageDriver*)nativeHandle))->NewEmpty();
  return gcnew OCPDF_Attribute(&tmp);
}

 void OCMDF_ReferenceStorageDriver::Paste(OCNaroWrappers::OCTDF_Attribute^ Source, OCNaroWrappers::OCPDF_Attribute^ Target, OCNaroWrappers::OCMDF_SRelocationTable^ RelocTable)
{
  (*((Handle_MDF_ReferenceStorageDriver*)nativeHandle))->Paste(*((Handle_TDF_Attribute*)Source->Handle), *((Handle_PDF_Attribute*)Target->Handle), *((Handle_MDF_SRelocationTable*)RelocTable->Handle));
}

