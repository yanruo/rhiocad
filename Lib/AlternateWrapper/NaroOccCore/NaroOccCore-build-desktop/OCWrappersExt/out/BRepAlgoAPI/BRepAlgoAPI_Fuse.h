// File generated by CPPExt (MPV)
//
#ifndef _BRepAlgoAPI_Fuse_OCWrappers_HeaderFile
#define _BRepAlgoAPI_Fuse_OCWrappers_HeaderFile

// include native header
#include <BRepAlgoAPI_Fuse.hxx>
#include "../Converter.h"

#include "BRepAlgoAPI_BooleanOperation.h"

#include "BRepAlgoAPI_BooleanOperation.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCBOPTools_DSFiller;


//!  The class Fuse provides a <br>
//! Boolean fusion operation on a pair of arguments (Boolean Union). <br>
//! The class Fuse provides a framework for: <br>
//!   -       Defining the construction of a fused shape; <br>
//!   -       Implementing the building algorithm <br>
//!   -       Consulting the result. <br>
public ref class OCBRepAlgoAPI_Fuse  : public OCBRepAlgoAPI_BooleanOperation {

protected:
  // dummy constructor;
  OCBRepAlgoAPI_Fuse(OCDummy^) : OCBRepAlgoAPI_BooleanOperation((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepAlgoAPI_Fuse(BRepAlgoAPI_Fuse* nativeHandle);

// Methods PUBLIC

//! Constructs a fuse of shapes aS1 and aS2. <br>
OCBRepAlgoAPI_Fuse(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2);

//! Constructs a new shape that is a fuse of shapes aS1 and aS2 using aDSFiller. <br>
OCBRepAlgoAPI_Fuse(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2, OCNaroWrappers::OCBOPTools_DSFiller^ aDSF);

~OCBRepAlgoAPI_Fuse()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
