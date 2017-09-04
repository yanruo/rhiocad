// File generated by CPPExt (CPP file)
//

#include "StepRepr_Transformation.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "StepRepr_ItemDefinedTransformation.h"
#include "StepRepr_FunctionallyDefinedTransformation.h"


using namespace OCNaroWrappers;

OCStepRepr_Transformation::OCStepRepr_Transformation(StepRepr_Transformation* nativeHandle) : OCStepData_SelectType((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepRepr_Transformation::OCStepRepr_Transformation() : OCStepData_SelectType((OCDummy^)nullptr)

{
  nativeHandle = new StepRepr_Transformation();
}

 Standard_Integer OCStepRepr_Transformation::CaseNum(OCNaroWrappers::OCStandard_Transient^ ent)
{
  return ((StepRepr_Transformation*)nativeHandle)->CaseNum(*((Handle_Standard_Transient*)ent->Handle));
}

OCStepRepr_ItemDefinedTransformation^ OCStepRepr_Transformation::ItemDefinedTransformation()
{
  Handle(StepRepr_ItemDefinedTransformation) tmp = ((StepRepr_Transformation*)nativeHandle)->ItemDefinedTransformation();
  return gcnew OCStepRepr_ItemDefinedTransformation(&tmp);
}

OCStepRepr_FunctionallyDefinedTransformation^ OCStepRepr_Transformation::FunctionallyDefinedTransformation()
{
  Handle(StepRepr_FunctionallyDefinedTransformation) tmp = ((StepRepr_Transformation*)nativeHandle)->FunctionallyDefinedTransformation();
  return gcnew OCStepRepr_FunctionallyDefinedTransformation(&tmp);
}

