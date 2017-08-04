/*****  VA::PugiXML::Attribute Implementation  *****/

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

#include "va_pugixml_attribute.h"

/************************
 *****  Supporting  *****
 ************************/

#include "V_VString.h"
#include "Vxa_VCollectable.h"
#include "Vxa_VResultBuilder.h"


/************************************
 ************************************
 *****                          *****
 *****  VA::Pugixml::Attribute  *****
 *****                          *****
 ************************************
 ************************************/

/***************************
 ***************************
 *****  Run Time Type  *****
 ***************************
 ***************************/

DEFINE_CONCRETE_RTTLITE (VA::PugiXML::Attribute);

/**************************
 **************************
 *****  Construction  *****
 **************************
 **************************/

VA::PugiXML::Attribute::Attribute () {
}


/************************************
 ************************************
 *****  Method Implementations  *****
 ************************************
 ************************************/

// void VA::PugiXML::Attribute::getCalendar (VResultBuilder &rRB) {
//     m_pFQLFetchObject->getCalendar (rRB);
// }

// void VA::PugiXML::Attribute::setCalendar_(VResultBuilder &rRB, VString const &rCalender) {
//     m_pFQLFetchObject->setCalendar_(rRB, rCalender);
// }

namespace VA {
    namespace PugiXML {
	class AttributeClass : public Vxa::VCollectable<Attribute> {
	public:
	    AttributeClass () {
		VString iHelpInfo ("The class PugiXML::Attribute supports the following methods:\nhelp\n");

		defineConstant ("whatTypeAmI", "VA::PugiXML::Attribute");
		defineConstant ("isErrorObject", false);

		// defineMethod ("getCalendar", &PugiXML::Attribute::getCalendar);
		// defineMethod ("setCalendar:", &PugiXML::Attribute::setCalendar_);

		// defineMethod ("getFetchObject:", &PugiXML::Attribute::getFetchObject);
		// defineMethod ("newFetchObject", &PugiXML::Attribute::newFetchObject);

		// defineMethod ("getFormulaObject:", &PugiXML::Attribute::getFormulaObject_);
		defineConstant ("help", (iHelpInfo << m_iHelpInfo));
	    }
	} g_iAttributeClass;
    }
}

DEFINE_VXA_COLLECTABLE(VA::PugiXML::Attribute);
