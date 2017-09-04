// File generated by CPPExt (MPV)
//
#ifndef _BRepTools_ShapeSet_OCWrappers_HeaderFile
#define _BRepTools_ShapeSet_OCWrappers_HeaderFile

// include native header
#include <BRepTools_ShapeSet.hxx>
#include "../Converter.h"

#include "../TopTools/TopTools_ShapeSet.h"

#include "../BRep/BRep_Builder.h"
#include "../GeomTools/GeomTools_SurfaceSet.h"
#include "../GeomTools/GeomTools_CurveSet.h"
#include "../GeomTools/GeomTools_Curve2dSet.h"
#include "../TColStd/TColStd_IndexedMapOfTransient.h"
#include "../TopTools/TopTools_ShapeSet.h"
#include "../TopAbs/TopAbs_ShapeEnum.h"


namespace OCNaroWrappers
{

ref class OCBRep_Builder;
ref class OCTopoDS_Shape;


//! Contains a Shape and all  its subshapes, locations <br>
//!          and geometries. <br>
//! <br>
//!          The topology is inherited from TopTools. <br>
public ref class OCBRepTools_ShapeSet  : public OCTopTools_ShapeSet {

protected:
  // dummy constructor;
  OCBRepTools_ShapeSet(OCDummy^) : OCTopTools_ShapeSet((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepTools_ShapeSet(BRepTools_ShapeSet* nativeHandle);

// Methods PUBLIC

//! Builds an empty ShapeSet. <br>
//!          Parameter <isWithTriangles> is added for XML Persistence <br>
OCBRepTools_ShapeSet(System::Boolean isWithTriangles);

//! Builds an empty ShapeSet. <br>
//!          Parameter <isWithTriangles> is added for XML Persistence <br>
OCBRepTools_ShapeSet(OCNaroWrappers::OCBRep_Builder^ B, System::Boolean isWithTriangles);

//! Clears the content of the set. <br>
virtual /*instead*/  void Clear() override;

//! Stores the goemetry of <S>. <br>
virtual /*instead*/  void AddGeometry(OCNaroWrappers::OCTopoDS_Shape^ S) override;

//! Dumps the geometry of me on the stream <OS>. <br>
virtual /*instead*/  void DumpGeometry(Standard_OStream& OS) override;

//! Writes the geometry of  me  on the stream <OS> in a <br>
//!          format that can be read back by Read. <br>
virtual /*instead*/  void WriteGeometry(Standard_OStream& OS) override;

//! Reads the geometry of me from the  stream  <IS>. <br>
virtual /*instead*/  void ReadGeometry(Standard_IStream& IS) override;

//! Dumps the geometry of <S> on the stream <OS>. <br>
virtual /*instead*/  void DumpGeometry(OCNaroWrappers::OCTopoDS_Shape^ S, Standard_OStream& OS) override;

//! Writes the geometry of <S>  on the stream <OS> in a <br>
//!          format that can be read back by Read. <br>
virtual /*instead*/  void WriteGeometry(OCNaroWrappers::OCTopoDS_Shape^ S, Standard_OStream& OS) override;

//! Reads the geometry of a shape of type <T> from the <br>
//!          stream <IS> and returns it in <S>. <br>
virtual /*instead*/  void ReadGeometry(OCTopAbs_ShapeEnum T, Standard_IStream& IS, OCNaroWrappers::OCTopoDS_Shape^ S) override;

//! Inserts  the shape <S2> in  the  shape <S1>.  This <br>
//!          method must be   redefined  to  use   the  correct <br>
//!          builder. <br>
virtual /*instead*/  void AddShapes(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2) override;


virtual /*instead*/  void Check(OCTopAbs_ShapeEnum T, OCNaroWrappers::OCTopoDS_Shape^ S) override;

//! Reads the 3d polygons  of me <br>
//!          from the  stream  <IS>. <br>
 /*instead*/  void ReadPolygon3D(Standard_IStream& IS) ;

//! Writes the 3d polygons <br>
//!          on the stream <OS> in a format that can <br>
//!          be read back by Read. <br>
 /*instead*/  void WritePolygon3D(Standard_OStream& OS, System::Boolean Compact) ;

//! Dumps the 3d polygons <br>
//!          on the stream <OS>. <br>
 /*instead*/  void DumpPolygon3D(Standard_OStream& OS) ;

//! Reads the triangulation of me <br>
//!          from the  stream  <IS>. <br>
 /*instead*/  void ReadTriangulation(Standard_IStream& IS) ;

//! Writes the triangulation <br>
//!          on the stream <OS> in a format that can <br>
//!          be read back by Read. <br>
 /*instead*/  void WriteTriangulation(Standard_OStream& OS, System::Boolean Compact) ;

//! Dumps the triangulation <br>
//!          on the stream <OS>. <br>
 /*instead*/  void DumpTriangulation(Standard_OStream& OS) ;

//! Reads the polygons on triangulation of me <br>
//!          from the  stream  <IS>. <br>
 /*instead*/  void ReadPolygonOnTriangulation(Standard_IStream& IS) ;

//! Writes the polygons on triangulation <br>
//!          on the stream <OS> in a format that can <br>
//!          be read back by Read. <br>
 /*instead*/  void WritePolygonOnTriangulation(Standard_OStream& OS, System::Boolean Compact) ;

//! Dumps the polygons on triangulation <br>
//!          on the stream <OS>. <br>
 /*instead*/  void DumpPolygonOnTriangulation(Standard_OStream& OS) ;

~OCBRepTools_ShapeSet()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif