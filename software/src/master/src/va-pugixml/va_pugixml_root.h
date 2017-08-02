#pragma once
#ifndef VA_PugiXML_Root_Interface
#define VA_PugiXML_Root_Interface

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
	class Root : public Vxa::VCollectableObject {
	    DECLARE_CONCRETE_RTTLITE (Root, Vxa::VCollectableObject);

	//  Aliases
	public:
	    typedef Vxa::VResultBuilder VResultBuilder;

	//  Construction
	public:
	    Root ();

	//  Destruction
	private:
	    ~Root () {
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
