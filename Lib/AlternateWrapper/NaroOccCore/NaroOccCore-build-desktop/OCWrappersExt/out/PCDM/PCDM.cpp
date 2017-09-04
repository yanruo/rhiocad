// File generated by CPPExt (CPP file)
//

#include "PCDM.h"
#include "../Converter.h"


using namespace OCNaroWrappers;



 System::Boolean OCPCDM::FindStorageDriver(OCNaroWrappers::OCCDM_Document^ aDocument)
{
  return OCConverter::StandardBooleanToBoolean(PCDM::FindStorageDriver(*((Handle_CDM_Document*)aDocument->Handle)));
}

OCPCDM_StorageDriver^ OCPCDM::StorageDriver(OCNaroWrappers::OCCDM_Document^ aDocument)
{
  Handle(PCDM_StorageDriver) tmp = PCDM::StorageDriver(*((Handle_CDM_Document*)aDocument->Handle));
  return gcnew OCPCDM_StorageDriver(&tmp);
}

OCStorage_Schema^ OCPCDM::Schema(OCNaroWrappers::OCTCollection_ExtendedString^ aSchemaName, OCNaroWrappers::OCCDM_Application^ anApplication)
{
  Handle(Storage_Schema) tmp = PCDM::Schema(*((TCollection_ExtendedString*)aSchemaName->Handle), *((Handle_CDM_Application*)anApplication->Handle));
  return gcnew OCStorage_Schema(&tmp);
}

