// File generated by CPPExt (Transient)
//
#ifndef _BRepAlgo_DataMapNodeOfDataMapOfShapeInterference_OCWrappers_HeaderFile
#define _BRepAlgo_DataMapNodeOfDataMapOfShapeInterference_OCWrappers_HeaderFile

// include the wrapped class
#include <BRepAlgo_DataMapNodeOfDataMapOfShapeInterference.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "../TopoDS/TopoDS_Shape.h"


namespace OCNaroWrappers
{

ref class OCTopOpeBRepDS_Interference;
ref class OCTopoDS_Shape;
ref class OCTopTools_ShapeMapHasher;
ref class OCBRepAlgo_DataMapOfShapeInterference;
ref class OCBRepAlgo_DataMapIteratorOfDataMapOfShapeInterference;



public ref class OCBRepAlgo_DataMapNodeOfDataMapOfShapeInterference : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCBRepAlgo_DataMapNodeOfDataMapOfShapeInterference(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepAlgo_DataMapNodeOfDataMapOfShapeInterference(Handle(BRepAlgo_DataMapNodeOfDataMapOfShapeInterference)* nativeHandle);

// Methods PUBLIC


OCBRepAlgo_DataMapNodeOfDataMapOfShapeInterference(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCTopOpeBRepDS_Interference^ I, TCollection_MapNodePtr n);


 /*instead*/  OCTopoDS_Shape^ Key() ;


 /*instead*/  OCTopOpeBRepDS_Interference^ Value() ;

~OCBRepAlgo_DataMapNodeOfDataMapOfShapeInterference()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
