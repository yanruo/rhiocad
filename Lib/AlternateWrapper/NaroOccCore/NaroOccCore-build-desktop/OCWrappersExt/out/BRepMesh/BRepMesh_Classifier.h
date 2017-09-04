// File generated by CPPExt (MPV)
//
#ifndef _BRepMesh_Classifier_OCWrappers_HeaderFile
#define _BRepMesh_Classifier_OCWrappers_HeaderFile

// include native header
#include <BRepMesh_Classifier.hxx>
#include "../Converter.h"


#include "../TColStd/TColStd_SequenceOfInteger.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../TopAbs/TopAbs_State.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Face;
ref class OCBRepMesh_DataMapOfShapePairOfPolygon;
ref class OCTColStd_IndexedMapOfInteger;
ref class OCBRepMesh_DataStructureOfDelaun;
ref class OCgp_Pnt2d;
ref class OCTColgp_SequenceOfPnt2d;



public ref class OCBRepMesh_Classifier  {

protected:
  BRepMesh_Classifier* nativeHandle;
  OCBRepMesh_Classifier(OCDummy^) {};

public:
  property BRepMesh_Classifier* Handle
  {
    BRepMesh_Classifier* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepMesh_Classifier(BRepMesh_Classifier* nativeHandle);

// Methods PUBLIC


OCBRepMesh_Classifier(OCNaroWrappers::OCTopoDS_Face^ theFace, Standard_Real theTolUV, OCNaroWrappers::OCBRepMesh_DataMapOfShapePairOfPolygon^ theEdges, OCNaroWrappers::OCTColStd_IndexedMapOfInteger^ theMap, OCNaroWrappers::OCBRepMesh_DataStructureOfDelaun^ theStructure, Standard_Real theUmin, Standard_Real theUmax, Standard_Real theVmin, Standard_Real theVmax);


 /*instead*/  OCTopAbs_State Perform(OCNaroWrappers::OCgp_Pnt2d^ thePoint) ;


 /*instead*/  BRepMesh_Status State() ;

~OCBRepMesh_Classifier()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif