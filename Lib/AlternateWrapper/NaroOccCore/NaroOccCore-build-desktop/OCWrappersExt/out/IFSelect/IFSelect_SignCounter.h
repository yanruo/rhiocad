// File generated by CPPExt (Transient)
//
#ifndef _IFSelect_SignCounter_OCWrappers_HeaderFile
#define _IFSelect_SignCounter_OCWrappers_HeaderFile

// include the wrapped class
#include <IFSelect_SignCounter.hxx>
#include "../Converter.h"

#include "IFSelect_SignatureList.h"

#include "../TColStd/TColStd_MapOfTransient.h"


namespace OCNaroWrappers
{

ref class OCIFSelect_Signature;
ref class OCIFSelect_Selection;
ref class OCStandard_Transient;
ref class OCInterface_InterfaceModel;
ref class OCTColStd_HSequenceOfTransient;
ref class OCInterface_Graph;
ref class OCTCollection_HAsciiString;


//! SignCounter gives the frame to count signatures associated <br>
//!           with entities, deducted from them. Ex.: their Dynamic Type. <br>
//! <br>
//!	         It can sort a set of Entities according a signature, i.e. : <br>
//!           - list of different values found for this Signature <br>
//!           - for each one, count and list of entities <br>
//!           Results are returned as a SignatureList, which can be queried <br>
//!           on the count (list of strings, count per signature, or list of <br>
//!           entities per signature) <br>
//! <br>
//!           A SignCounter can be filled, either directly from lists, or <br>
//!           from the result of a Selection : hence, its content can be <br>
//!           automatically recomputed as desired <br>
//! <br>
//!           SignCounter works by using a Signature in its method AddSign <br>
//! <br>
//!           Methods can be redefined to, either <br>
//!           - directly compute the value without a Signature <br>
//!           - compute the value in the context of a Graph <br>
public ref class OCIFSelect_SignCounter : OCIFSelect_SignatureList {

protected:
  // dummy constructor;
  OCIFSelect_SignCounter(OCDummy^) : OCIFSelect_SignatureList((OCDummy^)nullptr) {};

public:

// constructor from native
OCIFSelect_SignCounter(Handle(IFSelect_SignCounter)* nativeHandle);

// Methods PUBLIC

//! Creates a SignCounter, without proper Signature <br>
//!           If <withmap> is True (default), added entities are counted <br>
//!           only if they are not yet recorded in the map <br>
//!           Map control can be set off if the input garantees uniqueness <br>
//!           of data <br>
//!           <withlist> is transmitted to SignatureList (option to list <br>
//!           entities, not only to count them). <br>
OCIFSelect_SignCounter(System::Boolean withmap, System::Boolean withlist);

//! Creates a SignCounter, with a predefined Signature <br>
//!           Other arguments as for Create without Signature. <br>
OCIFSelect_SignCounter(OCNaroWrappers::OCIFSelect_Signature^ matcher, System::Boolean withmap, System::Boolean withlist);

//! Returns the Signature used to count entities. It can be null. <br>
 /*instead*/  OCIFSelect_Signature^ Signature() ;

//! Changes the control status. The map is not cleared, simply <br>
//!           its use changes <br>
 /*instead*/  void SetMap(System::Boolean withmap) ;

//! Adds an entity by considering its signature, which is given by <br>
//!           call to method AddSign <br>
//!           Returns True if added, False if already in the map (and <br>
//!           map control status set) <br>
virtual /*instead*/  System::Boolean AddEntity(OCNaroWrappers::OCStandard_Transient^ ent, OCNaroWrappers::OCInterface_InterfaceModel^ model) ;

//! Adds an entity (already filtered by Map) with its signature. <br>
//!           This signature can be computed with the containing model. <br>
//!           Its value is provided by the object Signature given at start, <br>
//!           if no Signature is defined, it does nothing. <br>
//! <br>
//!           Can be redefined (in this case, see also Sign) <br>
virtual /*instead*/  void AddSign(OCNaroWrappers::OCStandard_Transient^ ent, OCNaroWrappers::OCInterface_InterfaceModel^ model) ;

//! Adds a list of entities by adding each of the items <br>
 /*instead*/  void AddList(OCNaroWrappers::OCTColStd_HSequenceOfTransient^ list, OCNaroWrappers::OCInterface_InterfaceModel^ model) ;

//! Adds a list of entities in the context given by the graph <br>
//!           Default just call basic AddList <br>
//!           Can be redefined to get a signature computed with the graph <br>
virtual /*instead*/  void AddWithGraph(OCNaroWrappers::OCTColStd_HSequenceOfTransient^ list, OCNaroWrappers::OCInterface_Graph^ graph) ;

//! Adds all the entities contained in a Model <br>
 /*instead*/  void AddModel(OCNaroWrappers::OCInterface_InterfaceModel^ model) ;

//! Adds the result determined by a Selection from a Graph <br>
//!           Remark : does not impact at all data from SetSelection & Co <br>
 /*instead*/  void AddFromSelection(OCNaroWrappers::OCIFSelect_Selection^ sel, OCNaroWrappers::OCInterface_Graph^ G) ;

//! Sets a Selection as input : this causes content to be cleared <br>
//!           then the Selection to be ready to compute (but not immediatly) <br>
 /*instead*/  void SetSelection(OCNaroWrappers::OCIFSelect_Selection^ sel) ;

//! Returns the selection, or a null Handle <br>
 /*instead*/  OCIFSelect_Selection^ Selection() ;

//! Changes the mode of working with the selection : <br>
//!           -1 just clears optimisation data and nothing else <br>
//!           0 clears it   1 inhibits it for computing (but no clearing) <br>
//!           2 sets it active for computing <br>
//!           Default at creation is 0, after SetSelection (not null) is 2 <br>
 /*instead*/  void SetSelMode(Standard_Integer selmode) ;

//! Returns the mode of working with the selection <br>
 /*instead*/  Standard_Integer SelMode() ;

//! Computes from the selection result, if selection is active <br>
//!           (mode 2). If selection is not defined (mode 0) or is inhibited <br>
//!           (mode 1) does nothing. <br>
//!           Returns True if computation is done (or optimised), False else <br>
//!           This method is called by ComputeCounter from WorkSession <br>
//! <br>
//!           If <forced> is True, recomputes systematically <br>
//!           Else (D), if the counter was not cleared and if the former <br>
//!           computed result started from the same total size of Graph and <br>
//!           same count of selected entities : computation is not redone <br>
//!           unless <forced> is given as True <br>
 /*instead*/  System::Boolean ComputeSelected(OCNaroWrappers::OCInterface_Graph^ G, System::Boolean forced) ;

//! Determines and returns the value of the signature for an <br>
//!           entity as an HAsciiString. This method works exactly as <br>
//!           AddSign, which is optimized <br>
//! <br>
//!           Can be redefined, accorded with AddSign <br>
virtual /*instead*/  OCTCollection_HAsciiString^ Sign(OCNaroWrappers::OCStandard_Transient^ ent, OCNaroWrappers::OCInterface_InterfaceModel^ model) ;

//! Applies AddWithGraph on one entity, and returns the Signature <br>
//!           Value which has been recorded <br>
//!           To do this, Add is called with SignOnly Mode True during the <br>
//!           call, the returned value is LastValue <br>
 /*instead*/  System::String^ ComputedSign(OCNaroWrappers::OCStandard_Transient^ ent, OCNaroWrappers::OCInterface_Graph^ G) ;

~OCIFSelect_SignCounter()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
