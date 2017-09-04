// File generated by CPPExt (MPV)
//
#ifndef _Extrema_GenLocateExtPS_OCWrappers_HeaderFile
#define _Extrema_GenLocateExtPS_OCWrappers_HeaderFile

// include native header
#include <Extrema_GenLocateExtPS.hxx>
#include "../Converter.h"


#include "Extrema_POnSurf.h"


namespace OCNaroWrappers
{

ref class OCgp_Pnt;
ref class OCAdaptor3d_Surface;
ref class OCExtrema_POnSurf;


//! With a close point, it calculates the distance <br>
//!          between a point and a surface. <br>
//!          This distance can be a minimum or a maximum. <br>
public ref class OCExtrema_GenLocateExtPS  {

protected:
  Extrema_GenLocateExtPS* nativeHandle;
  OCExtrema_GenLocateExtPS(OCDummy^) {};

public:
  property Extrema_GenLocateExtPS* Handle
  {
    Extrema_GenLocateExtPS* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCExtrema_GenLocateExtPS(Extrema_GenLocateExtPS* nativeHandle);

// Methods PUBLIC


OCExtrema_GenLocateExtPS();

//! Calculates the distance with a close point. <br>
//!          The close point is defined by the parameter values <br>
//!          U0 and V0. <br>
//!          The function F(u,v)=distance(S(u,v),p) has an <br>
//!          extremun when gradient(F)=0. The algorithm searchs <br>
//!          a zero near the close point. <br>
OCExtrema_GenLocateExtPS(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCAdaptor3d_Surface^ S, Standard_Real U0, Standard_Real V0, Standard_Real TolU, Standard_Real TolV);

//! Returns True if the distance is found. <br>
 /*instead*/  System::Boolean IsDone() ;

//! Returns the value of the extremum square distance. <br>
 /*instead*/  Standard_Real SquareDistance() ;

//! Returns the point of the extremum distance. <br>
 /*instead*/  OCExtrema_POnSurf^ Point() ;

~OCExtrema_GenLocateExtPS()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif