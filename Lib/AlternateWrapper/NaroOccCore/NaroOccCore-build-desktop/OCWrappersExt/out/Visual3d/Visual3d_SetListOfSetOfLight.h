// File generated by CPPExt (MPV)
//
#ifndef _Visual3d_SetListOfSetOfLight_OCWrappers_HeaderFile
#define _Visual3d_SetListOfSetOfLight_OCWrappers_HeaderFile

// include native header
#include <Visual3d_SetListOfSetOfLight.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCVisual3d_ListIteratorOfSetListOfSetOfLight;
ref class OCVisual3d_Light;
ref class OCVisual3d_ListNodeOfSetListOfSetOfLight;



public ref class OCVisual3d_SetListOfSetOfLight  {

protected:
  Visual3d_SetListOfSetOfLight* nativeHandle;
  OCVisual3d_SetListOfSetOfLight(OCDummy^) {};

public:
  property Visual3d_SetListOfSetOfLight* Handle
  {
    Visual3d_SetListOfSetOfLight* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCVisual3d_SetListOfSetOfLight(Visual3d_SetListOfSetOfLight* nativeHandle);

// Methods PUBLIC


OCVisual3d_SetListOfSetOfLight();


 /*instead*/  void Assign(OCNaroWrappers::OCVisual3d_SetListOfSetOfLight^ Other) ;


 /*instead*/  Standard_Integer Extent() ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  void Prepend(OCNaroWrappers::OCVisual3d_Light^ I) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCVisual3d_Light^ I, OCNaroWrappers::OCVisual3d_ListIteratorOfSetListOfSetOfLight^ theIt) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCVisual3d_SetListOfSetOfLight^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCVisual3d_Light^ I) ;


 /*instead*/  void Append(OCNaroWrappers::OCVisual3d_Light^ I, OCNaroWrappers::OCVisual3d_ListIteratorOfSetListOfSetOfLight^ theIt) ;


 /*instead*/  void Append(OCNaroWrappers::OCVisual3d_SetListOfSetOfLight^ Other) ;


 /*instead*/  OCVisual3d_Light^ First() ;


 /*instead*/  OCVisual3d_Light^ Last() ;


 /*instead*/  void RemoveFirst() ;


 /*instead*/  void Remove(OCNaroWrappers::OCVisual3d_ListIteratorOfSetListOfSetOfLight^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCVisual3d_Light^ I, OCNaroWrappers::OCVisual3d_ListIteratorOfSetListOfSetOfLight^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCVisual3d_SetListOfSetOfLight^ Other, OCNaroWrappers::OCVisual3d_ListIteratorOfSetListOfSetOfLight^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCVisual3d_Light^ I, OCNaroWrappers::OCVisual3d_ListIteratorOfSetListOfSetOfLight^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCVisual3d_SetListOfSetOfLight^ Other, OCNaroWrappers::OCVisual3d_ListIteratorOfSetListOfSetOfLight^ It) ;

~OCVisual3d_SetListOfSetOfLight()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
