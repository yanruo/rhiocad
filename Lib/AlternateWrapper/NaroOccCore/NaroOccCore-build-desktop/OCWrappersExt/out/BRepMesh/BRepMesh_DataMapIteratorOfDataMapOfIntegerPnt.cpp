// File generated by CPPExt (CPP file)
//

#include "BRepMesh_DataMapIteratorOfDataMapOfIntegerPnt.h"
#include "../Converter.h"
#include "../gp/gp_Pnt.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "BRepMesh_DataMapOfIntegerPnt.h"
#include "BRepMesh_DataMapNodeOfDataMapOfIntegerPnt.h"


using namespace OCNaroWrappers;

OCBRepMesh_DataMapIteratorOfDataMapOfIntegerPnt::OCBRepMesh_DataMapIteratorOfDataMapOfIntegerPnt(BRepMesh_DataMapIteratorOfDataMapOfIntegerPnt* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepMesh_DataMapIteratorOfDataMapOfIntegerPnt::OCBRepMesh_DataMapIteratorOfDataMapOfIntegerPnt() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new BRepMesh_DataMapIteratorOfDataMapOfIntegerPnt();
}

OCBRepMesh_DataMapIteratorOfDataMapOfIntegerPnt::OCBRepMesh_DataMapIteratorOfDataMapOfIntegerPnt(OCNaroWrappers::OCBRepMesh_DataMapOfIntegerPnt^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new BRepMesh_DataMapIteratorOfDataMapOfIntegerPnt(*((BRepMesh_DataMapOfIntegerPnt*)aMap->Handle));
}

 void OCBRepMesh_DataMapIteratorOfDataMapOfIntegerPnt::Initialize(OCNaroWrappers::OCBRepMesh_DataMapOfIntegerPnt^ aMap)
{
  ((BRepMesh_DataMapIteratorOfDataMapOfIntegerPnt*)nativeHandle)->Initialize(*((BRepMesh_DataMapOfIntegerPnt*)aMap->Handle));
}

 Standard_Integer OCBRepMesh_DataMapIteratorOfDataMapOfIntegerPnt::Key()
{
  return ((BRepMesh_DataMapIteratorOfDataMapOfIntegerPnt*)nativeHandle)->Key();
}

OCgp_Pnt^ OCBRepMesh_DataMapIteratorOfDataMapOfIntegerPnt::Value()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((BRepMesh_DataMapIteratorOfDataMapOfIntegerPnt*)nativeHandle)->Value();
  return gcnew OCgp_Pnt(tmp);
}


