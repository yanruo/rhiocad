// File generated by CPPExt (Transient)
//
#ifndef _TDF_StdMapNodeOfAttributeMap_OCWrappers_HeaderFile
#define _TDF_StdMapNodeOfAttributeMap_OCWrappers_HeaderFile

// include the wrapped class
#include <TDF_StdMapNodeOfAttributeMap.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"



namespace OCNaroWrappers
{

ref class OCTDF_Attribute;
ref class OCTColStd_MapTransientHasher;
ref class OCTDF_AttributeMap;
ref class OCTDF_MapIteratorOfAttributeMap;



public ref class OCTDF_StdMapNodeOfAttributeMap : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCTDF_StdMapNodeOfAttributeMap(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDF_StdMapNodeOfAttributeMap(Handle(TDF_StdMapNodeOfAttributeMap)* nativeHandle);

// Methods PUBLIC


OCTDF_StdMapNodeOfAttributeMap(OCNaroWrappers::OCTDF_Attribute^ K, TCollection_MapNodePtr n);


 /*instead*/  OCTDF_Attribute^ Key() ;

~OCTDF_StdMapNodeOfAttributeMap()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif