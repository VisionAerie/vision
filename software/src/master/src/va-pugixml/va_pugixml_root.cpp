/*****  VA::PugiXML::Root Implementation  *****/

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

#include "va_pugixml_root.h"

/************************
 *****  Supporting  *****
 ************************/

#include "V_VString.h"
#include "Vxa_VCollectable.h"
#include "Vxa_VResultBuilder.h"


/*******************************
 *******************************
 *****                     *****
 *****  VA::Pugixml::Root  *****
 *****                     *****
 *******************************
 *******************************/

/***************************
 ***************************
 *****  Run Time Type  *****
 ***************************
 ***************************/

DEFINE_CONCRETE_RTTLITE (VA::PugiXML::Root);

/**************************
 **************************
 *****  Construction  *****
 **************************
 **************************/

VA::PugiXML::Root::Root () {
}


/************************************
 ************************************
 *****  Method Implementations  *****
 ************************************
 ************************************/

// void VA::PugiXML::Root::getCalendar (VResultBuilder &rRB) {
//     m_pFQLFetchObject->getCalendar (rRB);
// }

// void VA::PugiXML::Root::setCalendar_(VResultBuilder &rRB, VString const &rCalender) {
//     m_pFQLFetchObject->setCalendar_(rRB, rCalender);
// }

namespace VA {
    namespace PugiXML {
	class RootClass : public Vxa::VCollectable<Root> {
	public:
	    RootClass () {
		VString iHelpInfo ("The class PugiXML::Root supports the following methods:\nhelp\n");

		defineConstant ("whatTypeAmI", "VA::PugiXML::Root");
		defineConstant ("isErrorObject", false);

		// defineMethod ("getCalendar", &PugiXML::Root::getCalendar);
		// defineMethod ("setCalendar:", &PugiXML::Root::setCalendar_);

		// defineMethod ("getFetchObject:", &PugiXML::Root::getFetchObject);
		// defineMethod ("newFetchObject", &PugiXML::Root::newFetchObject);

		// defineMethod ("getFormulaObject:", &PugiXML::Root::getFormulaObject_);
		defineConstant ("help", (iHelpInfo << m_iHelpInfo));
	    }
	} g_iRootClass;
    }
}

DEFINE_VXA_COLLECTABLE(VA::PugiXML::Root);
