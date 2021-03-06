// File generated by CPPExt (CPP file)
//

#include "StepAP203_CcDesignPersonAndOrganizationAssignment.h"
#include "../Converter.h"
#include "StepAP203_HArray1OfPersonOrganizationItem.h"
#include "../StepBasic/StepBasic_PersonAndOrganization.h"
#include "../StepBasic/StepBasic_PersonAndOrganizationRole.h"


using namespace OCNaroWrappers;

OCStepAP203_CcDesignPersonAndOrganizationAssignment::OCStepAP203_CcDesignPersonAndOrganizationAssignment(Handle(StepAP203_CcDesignPersonAndOrganizationAssignment)* nativeHandle) : OCStepBasic_PersonAndOrganizationAssignment((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepAP203_CcDesignPersonAndOrganizationAssignment(*nativeHandle);
}

OCStepAP203_CcDesignPersonAndOrganizationAssignment::OCStepAP203_CcDesignPersonAndOrganizationAssignment() : OCStepBasic_PersonAndOrganizationAssignment((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepAP203_CcDesignPersonAndOrganizationAssignment(new StepAP203_CcDesignPersonAndOrganizationAssignment());
}

 void OCStepAP203_CcDesignPersonAndOrganizationAssignment::Init(OCNaroWrappers::OCStepBasic_PersonAndOrganization^ aPersonAndOrganizationAssignment_AssignedPersonAndOrganization, OCNaroWrappers::OCStepBasic_PersonAndOrganizationRole^ aPersonAndOrganizationAssignment_Role, OCNaroWrappers::OCStepAP203_HArray1OfPersonOrganizationItem^ aItems)
{
  (*((Handle_StepAP203_CcDesignPersonAndOrganizationAssignment*)nativeHandle))->Init(*((Handle_StepBasic_PersonAndOrganization*)aPersonAndOrganizationAssignment_AssignedPersonAndOrganization->Handle), *((Handle_StepBasic_PersonAndOrganizationRole*)aPersonAndOrganizationAssignment_Role->Handle), *((Handle_StepAP203_HArray1OfPersonOrganizationItem*)aItems->Handle));
}

OCStepAP203_HArray1OfPersonOrganizationItem^ OCStepAP203_CcDesignPersonAndOrganizationAssignment::Items()
{
  Handle(StepAP203_HArray1OfPersonOrganizationItem) tmp = (*((Handle_StepAP203_CcDesignPersonAndOrganizationAssignment*)nativeHandle))->Items();
  return gcnew OCStepAP203_HArray1OfPersonOrganizationItem(&tmp);
}

 void OCStepAP203_CcDesignPersonAndOrganizationAssignment::SetItems(OCNaroWrappers::OCStepAP203_HArray1OfPersonOrganizationItem^ Items)
{
  (*((Handle_StepAP203_CcDesignPersonAndOrganizationAssignment*)nativeHandle))->SetItems(*((Handle_StepAP203_HArray1OfPersonOrganizationItem*)Items->Handle));
}


