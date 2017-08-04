#pragma once
#ifndef VA_PugiXML_Node_Interface
#define VA_PugiXML_Node_Interface

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
	class Node : public Vxa::VCollectableObject {
	    DECLARE_CONCRETE_RTTLITE (Node, Vxa::VCollectableObject);

	//  Aliases
	public:
	    typedef Vxa::VResultBuilder VResultBuilder;

	//  Construction
	public:
	    Node ();

	//  Destruction
	private:
	    ~Node () {
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
