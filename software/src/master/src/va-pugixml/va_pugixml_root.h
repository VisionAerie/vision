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

#include "va_pugixml_document.h"

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

	//  Class Builder
	public:
	    class ClassBuilder : virtual public Vxa::ClassBuilder {
	    public:
		ClassBuilder ();
	    };

	//  Construction
	public:
	    Root ();

	//  Destruction
	private:
	    ~Root () {
	    }

	//  Document Creation
	public:

	//  Methods
	public:
	    void loadDocument (Vxa::VResultBuilder &rRB, VString const &rFilename);

	//  State
	private:
	};
    }
}


#endif
