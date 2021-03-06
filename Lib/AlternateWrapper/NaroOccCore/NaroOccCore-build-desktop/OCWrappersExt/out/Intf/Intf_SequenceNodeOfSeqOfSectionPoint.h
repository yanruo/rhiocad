// File generated by CPPExt (Transient)
//
#ifndef _Intf_SequenceNodeOfSeqOfSectionPoint_OCWrappers_HeaderFile
#define _Intf_SequenceNodeOfSeqOfSectionPoint_OCWrappers_HeaderFile

// include the wrapped class
#include <Intf_SequenceNodeOfSeqOfSectionPoint.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"

#include "Intf_SectionPoint.h"


namespace OCNaroWrappers
{

ref class OCIntf_SectionPoint;
ref class OCIntf_SeqOfSectionPoint;



public ref class OCIntf_SequenceNodeOfSeqOfSectionPoint : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCIntf_SequenceNodeOfSeqOfSectionPoint(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntf_SequenceNodeOfSeqOfSectionPoint(Handle(Intf_SequenceNodeOfSeqOfSectionPoint)* nativeHandle);

// Methods PUBLIC


OCIntf_SequenceNodeOfSeqOfSectionPoint(OCNaroWrappers::OCIntf_SectionPoint^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCIntf_SectionPoint^ Value() ;

~OCIntf_SequenceNodeOfSeqOfSectionPoint()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
