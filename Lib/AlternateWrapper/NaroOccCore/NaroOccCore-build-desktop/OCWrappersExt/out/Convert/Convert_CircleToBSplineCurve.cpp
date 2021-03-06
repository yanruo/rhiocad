// File generated by CPPExt (CPP file)
//

#include "Convert_CircleToBSplineCurve.h"
#include "../Converter.h"
#include "../gp/gp_Circ2d.h"


using namespace OCNaroWrappers;

OCConvert_CircleToBSplineCurve::OCConvert_CircleToBSplineCurve(Convert_CircleToBSplineCurve* nativeHandle) : OCConvert_ConicToBSplineCurve((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCConvert_CircleToBSplineCurve::OCConvert_CircleToBSplineCurve(OCNaroWrappers::OCgp_Circ2d^ C, OCConvert_ParameterisationType Parameterisation) : OCConvert_ConicToBSplineCurve((OCDummy^)nullptr)

{
  nativeHandle = new Convert_CircleToBSplineCurve(*((gp_Circ2d*)C->Handle), (Convert_ParameterisationType)Parameterisation);
}

OCConvert_CircleToBSplineCurve::OCConvert_CircleToBSplineCurve(OCNaroWrappers::OCgp_Circ2d^ C, Standard_Real U1, Standard_Real U2, OCConvert_ParameterisationType Parameterisation) : OCConvert_ConicToBSplineCurve((OCDummy^)nullptr)

{
  nativeHandle = new Convert_CircleToBSplineCurve(*((gp_Circ2d*)C->Handle), U1, U2, (Convert_ParameterisationType)Parameterisation);
}


