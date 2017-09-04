// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepDS_ListOfInterference_OCWrappers_HeaderFile
#define _TopOpeBRepDS_ListOfInterference_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepDS_ListOfInterference.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTopOpeBRepDS_ListIteratorOfListOfInterference;
ref class OCTopOpeBRepDS_Interference;
ref class OCTopOpeBRepDS_ListNodeOfListOfInterference;



public ref class OCTopOpeBRepDS_ListOfInterference  {

protected:
  TopOpeBRepDS_ListOfInterference* nativeHandle;
  OCTopOpeBRepDS_ListOfInterference(OCDummy^) {};

public:
  property TopOpeBRepDS_ListOfInterference* Handle
  {
    TopOpeBRepDS_ListOfInterference* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRepDS_ListOfInterference(TopOpeBRepDS_ListOfInterference* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepDS_ListOfInterference();


 /*instead*/  void Assign(OCNaroWrappers::OCTopOpeBRepDS_ListOfInterference^ Other) ;


 /*instead*/  Standard_Integer Extent() ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTopOpeBRepDS_Interference^ I) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTopOpeBRepDS_Interference^ I, OCNaroWrappers::OCTopOpeBRepDS_ListIteratorOfListOfInterference^ theIt) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTopOpeBRepDS_ListOfInterference^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCTopOpeBRepDS_Interference^ I) ;


 /*instead*/  void Append(OCNaroWrappers::OCTopOpeBRepDS_Interference^ I, OCNaroWrappers::OCTopOpeBRepDS_ListIteratorOfListOfInterference^ theIt) ;


 /*instead*/  void Append(OCNaroWrappers::OCTopOpeBRepDS_ListOfInterference^ Other) ;


 /*instead*/  OCTopOpeBRepDS_Interference^ First() ;


 /*instead*/  OCTopOpeBRepDS_Interference^ Last() ;


 /*instead*/  void RemoveFirst() ;


 /*instead*/  void Remove(OCNaroWrappers::OCTopOpeBRepDS_ListIteratorOfListOfInterference^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCTopOpeBRepDS_Interference^ I, OCNaroWrappers::OCTopOpeBRepDS_ListIteratorOfListOfInterference^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCTopOpeBRepDS_ListOfInterference^ Other, OCNaroWrappers::OCTopOpeBRepDS_ListIteratorOfListOfInterference^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCTopOpeBRepDS_Interference^ I, OCNaroWrappers::OCTopOpeBRepDS_ListIteratorOfListOfInterference^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCTopOpeBRepDS_ListOfInterference^ Other, OCNaroWrappers::OCTopOpeBRepDS_ListIteratorOfListOfInterference^ It) ;

~OCTopOpeBRepDS_ListOfInterference()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif