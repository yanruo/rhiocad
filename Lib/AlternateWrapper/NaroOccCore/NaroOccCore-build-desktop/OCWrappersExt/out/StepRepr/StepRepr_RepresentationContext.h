// File generated by CPPExt (Transient)
//
#ifndef _StepRepr_RepresentationContext_OCWrappers_HeaderFile
#define _StepRepr_RepresentationContext_OCWrappers_HeaderFile

// include the wrapped class
#include <StepRepr_RepresentationContext.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;



public ref class OCStepRepr_RepresentationContext : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepRepr_RepresentationContext(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepRepr_RepresentationContext(Handle(StepRepr_RepresentationContext)* nativeHandle);

// Methods PUBLIC

//! Returns a RepresentationContext <br>
OCStepRepr_RepresentationContext();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aContextIdentifier, OCNaroWrappers::OCTCollection_HAsciiString^ aContextType) ;


 /*instead*/  void SetContextIdentifier(OCNaroWrappers::OCTCollection_HAsciiString^ aContextIdentifier) ;


 /*instead*/  OCTCollection_HAsciiString^ ContextIdentifier() ;


 /*instead*/  void SetContextType(OCNaroWrappers::OCTCollection_HAsciiString^ aContextType) ;


 /*instead*/  OCTCollection_HAsciiString^ ContextType() ;

~OCStepRepr_RepresentationContext()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif