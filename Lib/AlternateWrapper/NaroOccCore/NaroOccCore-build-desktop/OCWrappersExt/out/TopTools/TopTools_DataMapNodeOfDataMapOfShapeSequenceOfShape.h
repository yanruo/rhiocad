// File generated by CPPExt (Transient)
//
#ifndef _TopTools_DataMapNodeOfDataMapOfShapeSequenceOfShape_OCWrappers_HeaderFile
#define _TopTools_DataMapNodeOfDataMapOfShapeSequenceOfShape_OCWrappers_HeaderFile

// include the wrapped class
#include <TopTools_DataMapNodeOfDataMapOfShapeSequenceOfShape.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "../TopoDS/TopoDS_Shape.h"
#include "TopTools_SequenceOfShape.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_SequenceOfShape;
ref class OCTopTools_ShapeMapHasher;
ref class OCTopTools_DataMapOfShapeSequenceOfShape;
ref class OCTopTools_DataMapIteratorOfDataMapOfShapeSequenceOfShape;



public ref class OCTopTools_DataMapNodeOfDataMapOfShapeSequenceOfShape : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCTopTools_DataMapNodeOfDataMapOfShapeSequenceOfShape(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopTools_DataMapNodeOfDataMapOfShapeSequenceOfShape(Handle(TopTools_DataMapNodeOfDataMapOfShapeSequenceOfShape)* nativeHandle);

// Methods PUBLIC


OCTopTools_DataMapNodeOfDataMapOfShapeSequenceOfShape(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCTopTools_SequenceOfShape^ I, TCollection_MapNodePtr n);


 /*instead*/  OCTopoDS_Shape^ Key() ;


 /*instead*/  OCTopTools_SequenceOfShape^ Value() ;

~OCTopTools_DataMapNodeOfDataMapOfShapeSequenceOfShape()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif