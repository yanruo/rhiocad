// File generated by CPPExt (MPV)
//
#ifndef _TopBas_ListOfTestInterference_OCWrappers_HeaderFile
#define _TopBas_ListOfTestInterference_OCWrappers_HeaderFile

// include native header
#include <TopBas_ListOfTestInterference.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTopBas_ListIteratorOfListOfTestInterference;
ref class OCTopBas_TestInterference;
ref class OCTopBas_ListNodeOfListOfTestInterference;



public ref class OCTopBas_ListOfTestInterference  {

protected:
  TopBas_ListOfTestInterference* nativeHandle;
  OCTopBas_ListOfTestInterference(OCDummy^) {};

public:
  property TopBas_ListOfTestInterference* Handle
  {
    TopBas_ListOfTestInterference* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopBas_ListOfTestInterference(TopBas_ListOfTestInterference* nativeHandle);

// Methods PUBLIC


OCTopBas_ListOfTestInterference();


 /*instead*/  void Assign(OCNaroWrappers::OCTopBas_ListOfTestInterference^ Other) ;


 /*instead*/  Standard_Integer Extent() ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTopBas_TestInterference^ I) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTopBas_TestInterference^ I, OCNaroWrappers::OCTopBas_ListIteratorOfListOfTestInterference^ theIt) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTopBas_ListOfTestInterference^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCTopBas_TestInterference^ I) ;


 /*instead*/  void Append(OCNaroWrappers::OCTopBas_TestInterference^ I, OCNaroWrappers::OCTopBas_ListIteratorOfListOfTestInterference^ theIt) ;


 /*instead*/  void Append(OCNaroWrappers::OCTopBas_ListOfTestInterference^ Other) ;


 /*instead*/  OCTopBas_TestInterference^ First() ;


 /*instead*/  OCTopBas_TestInterference^ Last() ;


 /*instead*/  void RemoveFirst() ;


 /*instead*/  void Remove(OCNaroWrappers::OCTopBas_ListIteratorOfListOfTestInterference^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCTopBas_TestInterference^ I, OCNaroWrappers::OCTopBas_ListIteratorOfListOfTestInterference^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCTopBas_ListOfTestInterference^ Other, OCNaroWrappers::OCTopBas_ListIteratorOfListOfTestInterference^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCTopBas_TestInterference^ I, OCNaroWrappers::OCTopBas_ListIteratorOfListOfTestInterference^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCTopBas_ListOfTestInterference^ Other, OCNaroWrappers::OCTopBas_ListIteratorOfListOfTestInterference^ It) ;

~OCTopBas_ListOfTestInterference()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
