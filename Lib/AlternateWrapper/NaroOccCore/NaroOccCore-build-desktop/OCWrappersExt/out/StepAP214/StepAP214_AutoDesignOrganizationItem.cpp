// File generated by CPPExt (CPP file)
//

#include "StepAP214_AutoDesignOrganizationItem.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "../StepBasic/StepBasic_Document.h"
#include "../StepBasic/StepBasic_PhysicallyModeledProductDefinition.h"


using namespace OCNaroWrappers;

OCStepAP214_AutoDesignOrganizationItem::OCStepAP214_AutoDesignOrganizationItem(StepAP214_AutoDesignOrganizationItem* nativeHandle) : OCStepAP214_AutoDesignGeneralOrgItem((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepAP214_AutoDesignOrganizationItem::OCStepAP214_AutoDesignOrganizationItem() : OCStepAP214_AutoDesignGeneralOrgItem((OCDummy^)nullptr)

{
  nativeHandle = new StepAP214_AutoDesignOrganizationItem();
}

 Standard_Integer OCStepAP214_AutoDesignOrganizationItem::CaseNum(OCNaroWrappers::OCStandard_Transient^ ent)
{
  return ((StepAP214_AutoDesignOrganizationItem*)nativeHandle)->CaseNum(*((Handle_Standard_Transient*)ent->Handle));
}

OCStepBasic_Document^ OCStepAP214_AutoDesignOrganizationItem::Document()
{
  Handle(StepBasic_Document) tmp = ((StepAP214_AutoDesignOrganizationItem*)nativeHandle)->Document();
  return gcnew OCStepBasic_Document(&tmp);
}

OCStepBasic_PhysicallyModeledProductDefinition^ OCStepAP214_AutoDesignOrganizationItem::PhysicallyModeledProductDefinition()
{
  Handle(StepBasic_PhysicallyModeledProductDefinition) tmp = ((StepAP214_AutoDesignOrganizationItem*)nativeHandle)->PhysicallyModeledProductDefinition();
  return gcnew OCStepBasic_PhysicallyModeledProductDefinition(&tmp);
}


