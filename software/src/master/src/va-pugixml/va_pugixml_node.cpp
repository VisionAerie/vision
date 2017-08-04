/*****  VA::PugiXML::Node Implementation  *****/

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

#include "va_pugixml_node.h"

/************************
 *****  Supporting  *****
 ************************/

#include "V_VString.h"
#include "Vxa_VCollectable.h"
#include "Vxa_VResultBuilder.h"


/*******************************
 *******************************
 *****                     *****
 *****  VA::Pugixml::Node  *****
 *****                     *****
 *******************************
 *******************************/

/***************************
 ***************************
 *****  Run Time Type  *****
 ***************************
 ***************************/

DEFINE_CONCRETE_RTTLITE (VA::PugiXML::Node);

/**************************
 **************************
 *****  Construction  *****
 **************************
 **************************/

VA::PugiXML::Node::Node () {
}


/************************************
 ************************************
 *****  Method Implementations  *****
 ************************************
 ************************************/

// void VA::PugiXML::Node::getCalendar (VResultBuilder &rRB) {
//     m_pFQLFetchObject->getCalendar (rRB);
// }

// void VA::PugiXML::Node::setCalendar_(VResultBuilder &rRB, VString const &rCalender) {
//     m_pFQLFetchObject->setCalendar_(rRB, rCalender);
// }

namespace VA {
    namespace PugiXML {
	class NodeClass : public Vxa::VCollectable<Node> {
	public:
	    NodeClass () {
		VString iHelpInfo ("The class PugiXML::Node supports the following methods:\nhelp\n");

		defineConstant ("whatTypeAmI", "VA::PugiXML::Node");
		defineConstant ("isErrorObject", false);

		// defineMethod ("getCalendar", &PugiXML::Node::getCalendar);
		// defineMethod ("setCalendar:", &PugiXML::Node::setCalendar_);

		// defineMethod ("getFetchObject:", &PugiXML::Node::getFetchObject);
		// defineMethod ("newFetchObject", &PugiXML::Node::newFetchObject);

		// defineMethod ("getFormulaObject:", &PugiXML::Node::getFormulaObject_);
		defineConstant ("help", (iHelpInfo << m_iHelpInfo));
	    }
	} g_iNodeClass;
    }
}

DEFINE_VXA_COLLECTABLE(VA::PugiXML::Node);
