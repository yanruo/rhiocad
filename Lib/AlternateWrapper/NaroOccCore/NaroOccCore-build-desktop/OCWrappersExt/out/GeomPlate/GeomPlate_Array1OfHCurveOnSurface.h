// File generated by CPPExt (MPV)
//
#ifndef _GeomPlate_Array1OfHCurveOnSurface_OCWrappers_HeaderFile
#define _GeomPlate_Array1OfHCurveOnSurface_OCWrappers_HeaderFile

// include native header
#include <GeomPlate_Array1OfHCurveOnSurface.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCAdaptor3d_HCurveOnSurface;



public ref class OCGeomPlate_Array1OfHCurveOnSurface  {

protected:
  GeomPlate_Array1OfHCurveOnSurface* nativeHandle;
  OCGeomPlate_Array1OfHCurveOnSurface(OCDummy^) {};

public:
  property GeomPlate_Array1OfHCurveOnSurface* Handle
  {
    GeomPlate_Array1OfHCurveOnSurface* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGeomPlate_Array1OfHCurveOnSurface(GeomPlate_Array1OfHCurveOnSurface* nativeHandle);

// Methods PUBLIC


OCGeomPlate_Array1OfHCurveOnSurface(Standard_Integer Low, Standard_Integer Up);


OCGeomPlate_Array1OfHCurveOnSurface(OCNaroWrappers::OCAdaptor3d_HCurveOnSurface^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCAdaptor3d_HCurveOnSurface^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCGeomPlate_Array1OfHCurveOnSurface^ Assign(OCNaroWrappers::OCGeomPlate_Array1OfHCurveOnSurface^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCAdaptor3d_HCurveOnSurface^ Value) ;


 /*instead*/  OCAdaptor3d_HCurveOnSurface^ Value(Standard_Integer Index) ;


 /*instead*/  OCAdaptor3d_HCurveOnSurface^ ChangeValue(Standard_Integer Index) ;

~OCGeomPlate_Array1OfHCurveOnSurface()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
