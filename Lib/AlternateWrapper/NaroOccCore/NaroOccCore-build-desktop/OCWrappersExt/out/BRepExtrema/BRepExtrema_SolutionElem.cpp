// File generated by CPPExt (CPP file)
//

#include "BRepExtrema_SolutionElem.h"
#include "../Converter.h"
#include "../gp/gp_Pnt.h"
#include "../TopoDS/TopoDS_Vertex.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../TopoDS/TopoDS_Face.h"


using namespace OCNaroWrappers;

OCBRepExtrema_SolutionElem::OCBRepExtrema_SolutionElem(BRepExtrema_SolutionElem* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepExtrema_SolutionElem::OCBRepExtrema_SolutionElem() 
{
  nativeHandle = new BRepExtrema_SolutionElem();
}

OCBRepExtrema_SolutionElem::OCBRepExtrema_SolutionElem(Standard_Real d, OCNaroWrappers::OCgp_Pnt^ Pt, OCBRepExtrema_SupportType SolType, OCNaroWrappers::OCTopoDS_Vertex^ vertex) 
{
  nativeHandle = new BRepExtrema_SolutionElem(d, *((gp_Pnt*)Pt->Handle), (BRepExtrema_SupportType)SolType, *((TopoDS_Vertex*)vertex->Handle));
}

OCBRepExtrema_SolutionElem::OCBRepExtrema_SolutionElem(Standard_Real d, OCNaroWrappers::OCgp_Pnt^ Pt, OCBRepExtrema_SupportType SolType, OCNaroWrappers::OCTopoDS_Edge^ edge, Standard_Real t) 
{
  nativeHandle = new BRepExtrema_SolutionElem(d, *((gp_Pnt*)Pt->Handle), (BRepExtrema_SupportType)SolType, *((TopoDS_Edge*)edge->Handle), t);
}

OCBRepExtrema_SolutionElem::OCBRepExtrema_SolutionElem(Standard_Real d, OCNaroWrappers::OCgp_Pnt^ Pt, OCBRepExtrema_SupportType SolType, OCNaroWrappers::OCTopoDS_Face^ face, Standard_Real u, Standard_Real v) 
{
  nativeHandle = new BRepExtrema_SolutionElem(d, *((gp_Pnt*)Pt->Handle), (BRepExtrema_SupportType)SolType, *((TopoDS_Face*)face->Handle), u, v);
}

 Standard_Real OCBRepExtrema_SolutionElem::Dist()
{
  return ((BRepExtrema_SolutionElem*)nativeHandle)->Dist();
}

OCgp_Pnt^ OCBRepExtrema_SolutionElem::Point()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((BRepExtrema_SolutionElem*)nativeHandle)->Point();
  return gcnew OCgp_Pnt(tmp);
}

 OCBRepExtrema_SupportType OCBRepExtrema_SolutionElem::SupportKind()
{
  return (OCBRepExtrema_SupportType)(((BRepExtrema_SolutionElem*)nativeHandle)->SupportKind());
}

OCTopoDS_Vertex^ OCBRepExtrema_SolutionElem::Vertex()
{
  TopoDS_Vertex* tmp = new TopoDS_Vertex();
  *tmp = ((BRepExtrema_SolutionElem*)nativeHandle)->Vertex();
  return gcnew OCTopoDS_Vertex(tmp);
}

OCTopoDS_Edge^ OCBRepExtrema_SolutionElem::Edge()
{
  TopoDS_Edge* tmp = new TopoDS_Edge();
  *tmp = ((BRepExtrema_SolutionElem*)nativeHandle)->Edge();
  return gcnew OCTopoDS_Edge(tmp);
}

OCTopoDS_Face^ OCBRepExtrema_SolutionElem::Face()
{
  TopoDS_Face* tmp = new TopoDS_Face();
  *tmp = ((BRepExtrema_SolutionElem*)nativeHandle)->Face();
  return gcnew OCTopoDS_Face(tmp);
}

 void OCBRepExtrema_SolutionElem::EdgeParameter(Standard_Real& par1)
{
  ((BRepExtrema_SolutionElem*)nativeHandle)->EdgeParameter(par1);
}

 void OCBRepExtrema_SolutionElem::FaceParameter(Standard_Real& par1, Standard_Real& par2)
{
  ((BRepExtrema_SolutionElem*)nativeHandle)->FaceParameter(par1, par2);
}


