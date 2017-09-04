// File generated by CPPExt (MPV)
//
#ifndef _Bnd_BoundSortBox_OCWrappers_HeaderFile
#define _Bnd_BoundSortBox_OCWrappers_HeaderFile

// include native header
#include <Bnd_BoundSortBox.hxx>
#include "../Converter.h"


#include "Bnd_Box.h"
#include "../TColStd/TColStd_DataMapOfIntegerInteger.h"
#include "../TColStd/TColStd_ListOfInteger.h"


namespace OCNaroWrappers
{

ref class OCBnd_HArray1OfBox;
ref class OCBnd_Box;
ref class OCTColStd_ListOfInteger;
ref class OCgp_Pln;


//! A tool to compare a bounding box or a plane with a set of <br>
//! bounding boxes. It sorts the set of bounding boxes to give <br>
//! the list of boxes which intersect the element being compared. <br>
//! The boxes being sorted generally bound a set of shapes, <br>
//! while the box being compared bounds a shape to be <br>
//! compared. The resulting list of intersecting boxes therefore <br>
//! gives the list of items which potentially intersect the shape to be compared. <br>
public ref class OCBnd_BoundSortBox  {

protected:
  Bnd_BoundSortBox* nativeHandle;
  OCBnd_BoundSortBox(OCDummy^) {};

public:
  property Bnd_BoundSortBox* Handle
  {
    Bnd_BoundSortBox* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBnd_BoundSortBox(Bnd_BoundSortBox* nativeHandle);

// Methods PUBLIC

//! Constructs an empty comparison algorithm for bounding boxes. <br>
//! The bounding boxes are then defined using the Initialize function. <br>
OCBnd_BoundSortBox();

//! Initializes this comparison algorithm with <br>
//! -   the set of bounding boxes SetOfBox. <br>
 /*instead*/  void Initialize(OCNaroWrappers::OCBnd_Box^ CompleteBox, OCNaroWrappers::OCBnd_HArray1OfBox^ SetOfBox) ;

//! Initializes this comparison algorithm with <br>
//! -   the set of bounding boxes SetOfBox, where <br>
//!   CompleteBox is given as the global bounding box of SetOfBox. <br>
 /*instead*/  void Initialize(OCNaroWrappers::OCBnd_HArray1OfBox^ SetOfBox) ;

//! Initializes this comparison algorithm, giving it only <br>
//! -   the maximum number nbComponents <br>
//! of the bounding boxes to be managed. Use the Add <br>
//! function to define the array of bounding boxes to be sorted by this algorithm. <br>
 /*instead*/  void Initialize(OCNaroWrappers::OCBnd_Box^ CompleteBox, Standard_Integer nbComponents) ;

//! Adds the bounding box theBox at position boxIndex in <br>
//! the array of boxes to be sorted by this comparison algorithm. <br>
//! This function is used only in conjunction with the third <br>
//! syntax described in the synopsis of Initialize. <br>
 /*instead*/  void Add(OCNaroWrappers::OCBnd_Box^ theBox, Standard_Integer boxIndex) ;

//! Compares the bounding box theBox, <br>
//! with the set of bounding boxes to be sorted by this <br>
//! comparison algorithm, and returns the list of intersecting <br>
//! bounding boxes as a list of indexes on the array of <br>
//! bounding boxes used by this algorithm. <br>
 /*instead*/  OCTColStd_ListOfInteger^ Compare(OCNaroWrappers::OCBnd_Box^ theBox) ;

//! Compares the plane P <br>
//! with the set of bounding boxes to be sorted by this <br>
//! comparison algorithm, and returns the list of intersecting <br>
//! bounding boxes as a list of indexes on the array of <br>
//! bounding boxes used by this algorithm. <br>
 /*instead*/  OCTColStd_ListOfInteger^ Compare(OCNaroWrappers::OCgp_Pln^ P) ;


 /*instead*/  void Dump() ;

~OCBnd_BoundSortBox()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif