/*****  V_VArgList Implementation  *****/

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

#include "V_VArgList.h"

/************************
 *****  Supporting  *****
 ************************/


/*************************
 *************************
 *****               *****
 *****  V::VArgList  *****
 *****               *****
 *************************
 *************************/

/**************************
 **************************
 *****  Construction  *****
 **************************
 **************************/

V::VArgList::VArgList (va_list iArgList) {
    va_copy (m_pArgList, iArgList);
}

V::VArgList::VArgList (ThisClass const &rOther) {
    va_copy (m_pArgList, const_cast<ThisClass&>(rOther).list ());
}

V::VArgList::VArgList () {
}

/*************************
 *************************
 *****  Destruction  *****
 *************************
 *************************/

V::VArgList::~VArgList () {
    va_end (m_pArgList);
}