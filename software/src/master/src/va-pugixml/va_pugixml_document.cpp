/*****  VA::PugiXML::Document Implementation  *****/

/************************
 ************************
 *****  Interfaces  *****
 ************************
 ************************/

/********************
 *****  System  *****
 ********************/

#include "Vk.h"

/******************
 *****  Self  *****
 ******************/

#include "va_pugixml_document.h"

/************************
 *****  Supporting  *****
 ************************/

#include "V_VString.h"
#include "Vxa_VCollectable.h"
#include "Vxa_VResultBuilder.h"


/***********************************
 ***********************************
 *****                         *****
 *****  VA::Pugixml::Document  *****
 *****                         *****
 ***********************************
 ***********************************/

/***************************
 ***************************
 *****  Run Time Type  *****
 ***************************
 ***************************/

DEFINE_CONCRETE_RTTLITE (VA::PugiXML::Document);

/**************************
 **************************
 *****  Construction  *****
 **************************
 **************************/

VA::PugiXML::Document::Document (VString const &rFilename) {
    m_iXMLParseResult = m_iXMLDocument.load_file (rFilename);
}


/************************************
 ************************************
 *****  Method Implementations  *****
 ************************************
 ************************************/

// void VA::PugiXML::Document::getCalendar (VResultBuilder &rRB) {
//     m_pFQLFetchObject->getCalendar (rRB);
// }

// void VA::PugiXML::Document::setCalendar_(VResultBuilder &rRB, VString const &rCalender) {
//     m_pFQLFetchObject->setCalendar_(rRB, rCalender);
// }

namespace VA {
    namespace PugiXML {
	class DocumentClass : public Vxa::VCollectable<Document> {
	public:
	    DocumentClass () {
		VString iHelpInfo ("The class PugiXML::Document supports the following methods:\nhelp\n");

		defineConstant ("whatTypeAmI", "VA::PugiXML::Document");
		defineConstant ("isErrorObject", false);

		// defineMethod ("getCalendar", &PugiXML::Document::getCalendar);
		// defineMethod ("setCalendar:", &PugiXML::Document::setCalendar_);

		// defineMethod ("getFetchObject:", &PugiXML::Document::getFetchObject);
		// defineMethod ("newFetchObject", &PugiXML::Document::newFetchObject);

		// defineMethod ("getFormulaObject:", &PugiXML::Document::getFormulaObject_);
		defineConstant ("help", (iHelpInfo << m_iHelpInfo));
	    }
	} g_iDocumentClass;
    }
}

DEFINE_VXA_COLLECTABLE(VA::PugiXML::Document);
