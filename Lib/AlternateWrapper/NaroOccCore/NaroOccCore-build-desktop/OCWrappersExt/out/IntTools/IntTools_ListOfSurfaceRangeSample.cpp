// File generated by CPPExt (CPP file)
//

#include "IntTools_ListOfSurfaceRangeSample.h"
#include "../Converter.h"
#include "IntTools_ListIteratorOfListOfSurfaceRangeSample.h"
#include "IntTools_SurfaceRangeSample.h"
#include "IntTools_ListNodeOfListOfSurfaceRangeSample.h"


using namespace OCNaroWrappers;

OCIntTools_ListOfSurfaceRangeSample::OCIntTools_ListOfSurfaceRangeSample(IntTools_ListOfSurfaceRangeSample* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntTools_ListOfSurfaceRangeSample::OCIntTools_ListOfSurfaceRangeSample() 
{
  nativeHandle = new IntTools_ListOfSurfaceRangeSample();
}

 void OCIntTools_ListOfSurfaceRangeSample::Assign(OCNaroWrappers::OCIntTools_ListOfSurfaceRangeSample^ Other)
{
  ((IntTools_ListOfSurfaceRangeSample*)nativeHandle)->Assign(*((IntTools_ListOfSurfaceRangeSample*)Other->Handle));
}

 Standard_Integer OCIntTools_ListOfSurfaceRangeSample::Extent()
{
  return ((IntTools_ListOfSurfaceRangeSample*)nativeHandle)->Extent();
}

 System::Boolean OCIntTools_ListOfSurfaceRangeSample::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((IntTools_ListOfSurfaceRangeSample*)nativeHandle)->IsEmpty());
}

 void OCIntTools_ListOfSurfaceRangeSample::Prepend(OCNaroWrappers::OCIntTools_SurfaceRangeSample^ I)
{
  ((IntTools_ListOfSurfaceRangeSample*)nativeHandle)->Prepend(*((IntTools_SurfaceRangeSample*)I->Handle));
}

 void OCIntTools_ListOfSurfaceRangeSample::Prepend(OCNaroWrappers::OCIntTools_SurfaceRangeSample^ I, OCNaroWrappers::OCIntTools_ListIteratorOfListOfSurfaceRangeSample^ theIt)
{
  ((IntTools_ListOfSurfaceRangeSample*)nativeHandle)->Prepend(*((IntTools_SurfaceRangeSample*)I->Handle), *((IntTools_ListIteratorOfListOfSurfaceRangeSample*)theIt->Handle));
}

 void OCIntTools_ListOfSurfaceRangeSample::Prepend(OCNaroWrappers::OCIntTools_ListOfSurfaceRangeSample^ Other)
{
  ((IntTools_ListOfSurfaceRangeSample*)nativeHandle)->Prepend(*((IntTools_ListOfSurfaceRangeSample*)Other->Handle));
}

 void OCIntTools_ListOfSurfaceRangeSample::Append(OCNaroWrappers::OCIntTools_SurfaceRangeSample^ I)
{
  ((IntTools_ListOfSurfaceRangeSample*)nativeHandle)->Append(*((IntTools_SurfaceRangeSample*)I->Handle));
}

 void OCIntTools_ListOfSurfaceRangeSample::Append(OCNaroWrappers::OCIntTools_SurfaceRangeSample^ I, OCNaroWrappers::OCIntTools_ListIteratorOfListOfSurfaceRangeSample^ theIt)
{
  ((IntTools_ListOfSurfaceRangeSample*)nativeHandle)->Append(*((IntTools_SurfaceRangeSample*)I->Handle), *((IntTools_ListIteratorOfListOfSurfaceRangeSample*)theIt->Handle));
}

 void OCIntTools_ListOfSurfaceRangeSample::Append(OCNaroWrappers::OCIntTools_ListOfSurfaceRangeSample^ Other)
{
  ((IntTools_ListOfSurfaceRangeSample*)nativeHandle)->Append(*((IntTools_ListOfSurfaceRangeSample*)Other->Handle));
}

OCIntTools_SurfaceRangeSample^ OCIntTools_ListOfSurfaceRangeSample::First()
{
  IntTools_SurfaceRangeSample* tmp = new IntTools_SurfaceRangeSample();
  *tmp = ((IntTools_ListOfSurfaceRangeSample*)nativeHandle)->First();
  return gcnew OCIntTools_SurfaceRangeSample(tmp);
}

OCIntTools_SurfaceRangeSample^ OCIntTools_ListOfSurfaceRangeSample::Last()
{
  IntTools_SurfaceRangeSample* tmp = new IntTools_SurfaceRangeSample();
  *tmp = ((IntTools_ListOfSurfaceRangeSample*)nativeHandle)->Last();
  return gcnew OCIntTools_SurfaceRangeSample(tmp);
}

 void OCIntTools_ListOfSurfaceRangeSample::RemoveFirst()
{
  ((IntTools_ListOfSurfaceRangeSample*)nativeHandle)->RemoveFirst();
}

 void OCIntTools_ListOfSurfaceRangeSample::Remove(OCNaroWrappers::OCIntTools_ListIteratorOfListOfSurfaceRangeSample^ It)
{
  ((IntTools_ListOfSurfaceRangeSample*)nativeHandle)->Remove(*((IntTools_ListIteratorOfListOfSurfaceRangeSample*)It->Handle));
}

 void OCIntTools_ListOfSurfaceRangeSample::InsertBefore(OCNaroWrappers::OCIntTools_SurfaceRangeSample^ I, OCNaroWrappers::OCIntTools_ListIteratorOfListOfSurfaceRangeSample^ It)
{
  ((IntTools_ListOfSurfaceRangeSample*)nativeHandle)->InsertBefore(*((IntTools_SurfaceRangeSample*)I->Handle), *((IntTools_ListIteratorOfListOfSurfaceRangeSample*)It->Handle));
}

 void OCIntTools_ListOfSurfaceRangeSample::InsertBefore(OCNaroWrappers::OCIntTools_ListOfSurfaceRangeSample^ Other, OCNaroWrappers::OCIntTools_ListIteratorOfListOfSurfaceRangeSample^ It)
{
  ((IntTools_ListOfSurfaceRangeSample*)nativeHandle)->InsertBefore(*((IntTools_ListOfSurfaceRangeSample*)Other->Handle), *((IntTools_ListIteratorOfListOfSurfaceRangeSample*)It->Handle));
}

 void OCIntTools_ListOfSurfaceRangeSample::InsertAfter(OCNaroWrappers::OCIntTools_SurfaceRangeSample^ I, OCNaroWrappers::OCIntTools_ListIteratorOfListOfSurfaceRangeSample^ It)
{
  ((IntTools_ListOfSurfaceRangeSample*)nativeHandle)->InsertAfter(*((IntTools_SurfaceRangeSample*)I->Handle), *((IntTools_ListIteratorOfListOfSurfaceRangeSample*)It->Handle));
}

 void OCIntTools_ListOfSurfaceRangeSample::InsertAfter(OCNaroWrappers::OCIntTools_ListOfSurfaceRangeSample^ Other, OCNaroWrappers::OCIntTools_ListIteratorOfListOfSurfaceRangeSample^ It)
{
  ((IntTools_ListOfSurfaceRangeSample*)nativeHandle)->InsertAfter(*((IntTools_ListOfSurfaceRangeSample*)Other->Handle), *((IntTools_ListIteratorOfListOfSurfaceRangeSample*)It->Handle));
}


