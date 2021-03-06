// File generated by CPPExt (CPP file)
//

#include "BOPTools_ListOfCoupleOfInteger.h"
#include "../Converter.h"
#include "BOPTools_ListIteratorOfListOfCoupleOfInteger.h"
#include "BOPTools_CoupleOfInteger.h"
#include "BOPTools_ListNodeOfListOfCoupleOfInteger.h"


using namespace OCNaroWrappers;

OCBOPTools_ListOfCoupleOfInteger::OCBOPTools_ListOfCoupleOfInteger(BOPTools_ListOfCoupleOfInteger* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBOPTools_ListOfCoupleOfInteger::OCBOPTools_ListOfCoupleOfInteger() 
{
  nativeHandle = new BOPTools_ListOfCoupleOfInteger();
}

 void OCBOPTools_ListOfCoupleOfInteger::Assign(OCNaroWrappers::OCBOPTools_ListOfCoupleOfInteger^ Other)
{
  ((BOPTools_ListOfCoupleOfInteger*)nativeHandle)->Assign(*((BOPTools_ListOfCoupleOfInteger*)Other->Handle));
}

 Standard_Integer OCBOPTools_ListOfCoupleOfInteger::Extent()
{
  return ((BOPTools_ListOfCoupleOfInteger*)nativeHandle)->Extent();
}

 System::Boolean OCBOPTools_ListOfCoupleOfInteger::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((BOPTools_ListOfCoupleOfInteger*)nativeHandle)->IsEmpty());
}

 void OCBOPTools_ListOfCoupleOfInteger::Prepend(OCNaroWrappers::OCBOPTools_CoupleOfInteger^ I)
{
  ((BOPTools_ListOfCoupleOfInteger*)nativeHandle)->Prepend(*((BOPTools_CoupleOfInteger*)I->Handle));
}

 void OCBOPTools_ListOfCoupleOfInteger::Prepend(OCNaroWrappers::OCBOPTools_CoupleOfInteger^ I, OCNaroWrappers::OCBOPTools_ListIteratorOfListOfCoupleOfInteger^ theIt)
{
  ((BOPTools_ListOfCoupleOfInteger*)nativeHandle)->Prepend(*((BOPTools_CoupleOfInteger*)I->Handle), *((BOPTools_ListIteratorOfListOfCoupleOfInteger*)theIt->Handle));
}

 void OCBOPTools_ListOfCoupleOfInteger::Prepend(OCNaroWrappers::OCBOPTools_ListOfCoupleOfInteger^ Other)
{
  ((BOPTools_ListOfCoupleOfInteger*)nativeHandle)->Prepend(*((BOPTools_ListOfCoupleOfInteger*)Other->Handle));
}

 void OCBOPTools_ListOfCoupleOfInteger::Append(OCNaroWrappers::OCBOPTools_CoupleOfInteger^ I)
{
  ((BOPTools_ListOfCoupleOfInteger*)nativeHandle)->Append(*((BOPTools_CoupleOfInteger*)I->Handle));
}

 void OCBOPTools_ListOfCoupleOfInteger::Append(OCNaroWrappers::OCBOPTools_CoupleOfInteger^ I, OCNaroWrappers::OCBOPTools_ListIteratorOfListOfCoupleOfInteger^ theIt)
{
  ((BOPTools_ListOfCoupleOfInteger*)nativeHandle)->Append(*((BOPTools_CoupleOfInteger*)I->Handle), *((BOPTools_ListIteratorOfListOfCoupleOfInteger*)theIt->Handle));
}

 void OCBOPTools_ListOfCoupleOfInteger::Append(OCNaroWrappers::OCBOPTools_ListOfCoupleOfInteger^ Other)
{
  ((BOPTools_ListOfCoupleOfInteger*)nativeHandle)->Append(*((BOPTools_ListOfCoupleOfInteger*)Other->Handle));
}

OCBOPTools_CoupleOfInteger^ OCBOPTools_ListOfCoupleOfInteger::First()
{
  BOPTools_CoupleOfInteger* tmp = new BOPTools_CoupleOfInteger();
  *tmp = ((BOPTools_ListOfCoupleOfInteger*)nativeHandle)->First();
  return gcnew OCBOPTools_CoupleOfInteger(tmp);
}

OCBOPTools_CoupleOfInteger^ OCBOPTools_ListOfCoupleOfInteger::Last()
{
  BOPTools_CoupleOfInteger* tmp = new BOPTools_CoupleOfInteger();
  *tmp = ((BOPTools_ListOfCoupleOfInteger*)nativeHandle)->Last();
  return gcnew OCBOPTools_CoupleOfInteger(tmp);
}

 void OCBOPTools_ListOfCoupleOfInteger::RemoveFirst()
{
  ((BOPTools_ListOfCoupleOfInteger*)nativeHandle)->RemoveFirst();
}

 void OCBOPTools_ListOfCoupleOfInteger::Remove(OCNaroWrappers::OCBOPTools_ListIteratorOfListOfCoupleOfInteger^ It)
{
  ((BOPTools_ListOfCoupleOfInteger*)nativeHandle)->Remove(*((BOPTools_ListIteratorOfListOfCoupleOfInteger*)It->Handle));
}

 void OCBOPTools_ListOfCoupleOfInteger::InsertBefore(OCNaroWrappers::OCBOPTools_CoupleOfInteger^ I, OCNaroWrappers::OCBOPTools_ListIteratorOfListOfCoupleOfInteger^ It)
{
  ((BOPTools_ListOfCoupleOfInteger*)nativeHandle)->InsertBefore(*((BOPTools_CoupleOfInteger*)I->Handle), *((BOPTools_ListIteratorOfListOfCoupleOfInteger*)It->Handle));
}

 void OCBOPTools_ListOfCoupleOfInteger::InsertBefore(OCNaroWrappers::OCBOPTools_ListOfCoupleOfInteger^ Other, OCNaroWrappers::OCBOPTools_ListIteratorOfListOfCoupleOfInteger^ It)
{
  ((BOPTools_ListOfCoupleOfInteger*)nativeHandle)->InsertBefore(*((BOPTools_ListOfCoupleOfInteger*)Other->Handle), *((BOPTools_ListIteratorOfListOfCoupleOfInteger*)It->Handle));
}

 void OCBOPTools_ListOfCoupleOfInteger::InsertAfter(OCNaroWrappers::OCBOPTools_CoupleOfInteger^ I, OCNaroWrappers::OCBOPTools_ListIteratorOfListOfCoupleOfInteger^ It)
{
  ((BOPTools_ListOfCoupleOfInteger*)nativeHandle)->InsertAfter(*((BOPTools_CoupleOfInteger*)I->Handle), *((BOPTools_ListIteratorOfListOfCoupleOfInteger*)It->Handle));
}

 void OCBOPTools_ListOfCoupleOfInteger::InsertAfter(OCNaroWrappers::OCBOPTools_ListOfCoupleOfInteger^ Other, OCNaroWrappers::OCBOPTools_ListIteratorOfListOfCoupleOfInteger^ It)
{
  ((BOPTools_ListOfCoupleOfInteger*)nativeHandle)->InsertAfter(*((BOPTools_ListOfCoupleOfInteger*)Other->Handle), *((BOPTools_ListIteratorOfListOfCoupleOfInteger*)It->Handle));
}


