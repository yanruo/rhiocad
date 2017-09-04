// File generated by CPPExt (MPV)
//
#ifndef _BOP_ListIteratorOfListOfConnexityBlock_OCWrappers_HeaderFile
#define _BOP_ListIteratorOfListOfConnexityBlock_OCWrappers_HeaderFile

// include native header
#include <BOP_ListIteratorOfListOfConnexityBlock.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCBOP_ListOfConnexityBlock;
ref class OCBOP_ConnexityBlock;
ref class OCBOP_ListNodeOfListOfConnexityBlock;



public ref class OCBOP_ListIteratorOfListOfConnexityBlock  {

protected:
  BOP_ListIteratorOfListOfConnexityBlock* nativeHandle;
  OCBOP_ListIteratorOfListOfConnexityBlock(OCDummy^) {};

public:
  property BOP_ListIteratorOfListOfConnexityBlock* Handle
  {
    BOP_ListIteratorOfListOfConnexityBlock* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBOP_ListIteratorOfListOfConnexityBlock(BOP_ListIteratorOfListOfConnexityBlock* nativeHandle);

// Methods PUBLIC


OCBOP_ListIteratorOfListOfConnexityBlock();


OCBOP_ListIteratorOfListOfConnexityBlock(OCNaroWrappers::OCBOP_ListOfConnexityBlock^ L);


 /*instead*/  void Initialize(OCNaroWrappers::OCBOP_ListOfConnexityBlock^ L) ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  OCBOP_ConnexityBlock^ Value() ;

~OCBOP_ListIteratorOfListOfConnexityBlock()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif