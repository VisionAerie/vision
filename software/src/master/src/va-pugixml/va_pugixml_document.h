#pragma once
#ifndef VA_PugiXML_Document_Interface
#define VA_PugiXML_Document_Interface

/************************
 *****  Components  *****
 ************************/

#include "Vxa_VCollectableObject.h"

#include <pugixml.hpp>

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
	class Document : public Vxa::VCollectableObject {
	    DECLARE_CONCRETE_RTTLITE (Document, Vxa::VCollectableObject);

	//  Aliases
	public:
	    typedef Vxa::VResultBuilder VResultBuilder;

	//  Construction
	public:
	    Document (VString const &rFilename);

	//  Destruction
	private:
	    ~Document () {
	    }

	//  Methods
	public:

	//  State
	private:
	    pugi::xml_document     m_iXMLDocument;
	    pugi::xml_parse_result m_iXMLParseResult;
	};
    }
}


#endif
