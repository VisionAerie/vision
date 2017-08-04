#pragma once
#ifndef VA_PugiXML_Attribute_Interface
#define VA_PugiXML_Attribute_Interface

/************************
 *****  Components  *****
 ************************/

#include "Vxa_VCollectableObject.h"

/**************************
 *****  Declarations  *****
 **************************/

namespace Vxa {
    class VResultBuilder;
}


/*************************
 *****  Definitions  *****
 *************************/

namespace VA {
    namespace PugiXML {
	class Attribute : public Vxa::VCollectableObject {
	    DECLARE_CONCRETE_RTTLITE (Attribute, Vxa::VCollectableObject);

	//  Aliases
	public:
	    typedef Vxa::VResultBuilder VResultBuilder;

	//  Construction
	public:
	    Attribute ();

	//  Destruction
	private:
	    ~Attribute () {
	    }

	//  Methods
	public:
//	    void getCalendar	(VResultBuilder &rRB);
//	    void setCalendar_ 	(VResultBuilder &rRB, VString const & rCalender);

	//  State
	private:
	};
    }
}


#endif
