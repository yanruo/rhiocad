// File generated by CPPExt (CPP file)
//

#include "TShort_Array2OfShortReal.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCTShort_Array2OfShortReal::OCTShort_Array2OfShortReal(TShort_Array2OfShortReal* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTShort_Array2OfShortReal::OCTShort_Array2OfShortReal(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) 
{
  nativeHandle = new TShort_Array2OfShortReal(R1, R2, C1, C2);
}

OCTShort_Array2OfShortReal::OCTShort_Array2OfShortReal(Standard_ShortReal Item, Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) 
{
  nativeHandle = new TShort_Array2OfShortReal(Item, R1, R2, C1, C2);
}

 void OCTShort_Array2OfShortReal::Init(Standard_ShortReal V)
{
  ((TShort_Array2OfShortReal*)nativeHandle)->Init(V);
}

OCTShort_Array2OfShortReal^ OCTShort_Array2OfShortReal::Assign(OCNaroWrappers::OCTShort_Array2OfShortReal^ Other)
{
  TShort_Array2OfShortReal* tmp = new TShort_Array2OfShortReal(0, 0, 0, 0);
  *tmp = ((TShort_Array2OfShortReal*)nativeHandle)->Assign(*((TShort_Array2OfShortReal*)Other->Handle));
  return gcnew OCTShort_Array2OfShortReal(tmp);
}

 Standard_Integer OCTShort_Array2OfShortReal::ColLength()
{
  return ((TShort_Array2OfShortReal*)nativeHandle)->ColLength();
}

 Standard_Integer OCTShort_Array2OfShortReal::RowLength()
{
  return ((TShort_Array2OfShortReal*)nativeHandle)->RowLength();
}

 Standard_Integer OCTShort_Array2OfShortReal::LowerCol()
{
  return ((TShort_Array2OfShortReal*)nativeHandle)->LowerCol();
}

 Standard_Integer OCTShort_Array2OfShortReal::LowerRow()
{
  return ((TShort_Array2OfShortReal*)nativeHandle)->LowerRow();
}

 Standard_Integer OCTShort_Array2OfShortReal::UpperCol()
{
  return ((TShort_Array2OfShortReal*)nativeHandle)->UpperCol();
}

 Standard_Integer OCTShort_Array2OfShortReal::UpperRow()
{
  return ((TShort_Array2OfShortReal*)nativeHandle)->UpperRow();
}

 void OCTShort_Array2OfShortReal::SetValue(Standard_Integer Row, Standard_Integer Col, Standard_ShortReal Value)
{
  ((TShort_Array2OfShortReal*)nativeHandle)->SetValue(Row, Col, Value);
}

 Standard_ShortReal OCTShort_Array2OfShortReal::Value(Standard_Integer Row, Standard_Integer Col)
{
  return ((TShort_Array2OfShortReal*)nativeHandle)->Value(Row, Col);
}

 Standard_ShortReal OCTShort_Array2OfShortReal::ChangeValue(Standard_Integer Row, Standard_Integer Col)
{
  return ((TShort_Array2OfShortReal*)nativeHandle)->ChangeValue(Row, Col);
}

