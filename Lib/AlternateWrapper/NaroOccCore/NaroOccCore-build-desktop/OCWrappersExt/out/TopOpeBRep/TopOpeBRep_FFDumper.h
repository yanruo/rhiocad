// File generated by CPPExt (Transient)
//
#ifndef _TopOpeBRep_FFDumper_OCWrappers_HeaderFile
#define _TopOpeBRep_FFDumper_OCWrappers_HeaderFile

// include the wrapped class
#include <TopOpeBRep_FFDumper.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../TopoDS/TopoDS_Face.h"
#include "../TopTools/TopTools_DataMapOfShapeInteger.h"
#include "../TopOpeBRepDS/TopOpeBRepDS_Kind.h"


namespace OCNaroWrappers
{

ref class OCTopOpeBRep_LineInter;
ref class OCTopOpeBRep_VPointInter;
ref class OCTopoDS_Shape;



public ref class OCTopOpeBRep_FFDumper : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCTopOpeBRep_FFDumper(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopOpeBRep_FFDumper(Handle(TopOpeBRep_FFDumper)* nativeHandle);

// Methods PUBLIC


OCTopOpeBRep_FFDumper(TopOpeBRep_PFacesFiller PFF);


 /*instead*/  void Init(TopOpeBRep_PFacesFiller PFF) ;


 /*instead*/  void DumpLine(Standard_Integer I) ;


 /*instead*/  void DumpLine(OCNaroWrappers::OCTopOpeBRep_LineInter^ L) ;


 /*instead*/  void DumpVP(OCNaroWrappers::OCTopOpeBRep_VPointInter^ VP) ;


 /*instead*/  void DumpVP(OCNaroWrappers::OCTopOpeBRep_VPointInter^ VP, Standard_Integer ISI) ;


 /*instead*/  Standard_Integer ExploreIndex(OCNaroWrappers::OCTopoDS_Shape^ S, Standard_Integer ISI) ;


 /*instead*/  void DumpDSP(OCNaroWrappers::OCTopOpeBRep_VPointInter^ VP, OCTopOpeBRepDS_Kind GK, Standard_Integer G, System::Boolean newinDS) ;


 /*instead*/  TopOpeBRep_PFacesFiller PFacesFillerDummy() ;

~OCTopOpeBRep_FFDumper()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
