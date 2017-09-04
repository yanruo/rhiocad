// File generated by CPPExt (CPP file)
//

#include "MeshShape_ListNodeOfListOfSurfacePoint.h"
#include "../Converter.h"
#include "MeshShape_SurfacePoint.h"
#include "MeshShape_ListOfSurfacePoint.h"
#include "MeshShape_ListIteratorOfListOfSurfacePoint.h"


using namespace OCNaroWrappers;

OCMeshShape_ListNodeOfListOfSurfacePoint::OCMeshShape_ListNodeOfListOfSurfacePoint(Handle(MeshShape_ListNodeOfListOfSurfacePoint)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_MeshShape_ListNodeOfListOfSurfacePoint(*nativeHandle);
}

OCMeshShape_ListNodeOfListOfSurfacePoint::OCMeshShape_ListNodeOfListOfSurfacePoint(OCNaroWrappers::OCMeshShape_SurfacePoint^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_MeshShape_ListNodeOfListOfSurfacePoint(new MeshShape_ListNodeOfListOfSurfacePoint(*((MeshShape_SurfacePoint*)I->Handle), n));
}

OCMeshShape_SurfacePoint^ OCMeshShape_ListNodeOfListOfSurfacePoint::Value()
{
  MeshShape_SurfacePoint* tmp = new MeshShape_SurfacePoint();
  *tmp = (*((Handle_MeshShape_ListNodeOfListOfSurfacePoint*)nativeHandle))->Value();
  return gcnew OCMeshShape_SurfacePoint(tmp);
}

