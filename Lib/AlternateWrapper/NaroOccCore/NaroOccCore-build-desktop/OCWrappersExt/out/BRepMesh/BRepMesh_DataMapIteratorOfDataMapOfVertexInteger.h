// File generated by CPPExt (MPV)
//
#ifndef _BRepMesh_DataMapIteratorOfDataMapOfVertexInteger_OCWrappers_HeaderFile
#define _BRepMesh_DataMapIteratorOfDataMapOfVertexInteger_OCWrappers_HeaderFile

// include native header
#include <BRepMesh_DataMapIteratorOfDataMapOfVertexInteger.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Vertex;
ref class OCTopTools_ShapeMapHasher;
ref class OCBRepMesh_DataMapOfVertexInteger;
ref class OCBRepMesh_DataMapNodeOfDataMapOfVertexInteger;



public ref class OCBRepMesh_DataMapIteratorOfDataMapOfVertexInteger  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCBRepMesh_DataMapIteratorOfDataMapOfVertexInteger(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepMesh_DataMapIteratorOfDataMapOfVertexInteger(BRepMesh_DataMapIteratorOfDataMapOfVertexInteger* nativeHandle);

// Methods PUBLIC


OCBRepMesh_DataMapIteratorOfDataMapOfVertexInteger();


OCBRepMesh_DataMapIteratorOfDataMapOfVertexInteger(OCNaroWrappers::OCBRepMesh_DataMapOfVertexInteger^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCBRepMesh_DataMapOfVertexInteger^ aMap) ;


 /*instead*/  OCTopoDS_Vertex^ Key() ;


 /*instead*/  Standard_Integer Value() ;

~OCBRepMesh_DataMapIteratorOfDataMapOfVertexInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
