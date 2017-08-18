#ifndef Vxa_VCollectableObject_Interface
#define Vxa_VCollectableObject_Interface

/************************
 *****  Components  *****
 ************************/

#include "Vxa_VRolePlayer.h"

/**************************
 *****  Declarations  *****
 **************************/

#include "Vxa_VCollectableCollection.h"
#include "Vxa_VCollectableMethod.h"

/*************************
 *****  Definitions  *****
 *************************/

namespace Vxa {
    class VResultBuilder;

    class Vxa_API VCollectableObject : virtual public VRolePlayer {
	DECLARE_ABSTRACT_RTTLITE (VCollectableObject, VRolePlayer);

	friend class VCollectableCollection;

    //  Aliases
    public:
	typedef VCollectableCollection::collection_index_t collection_index_t;

    //  Construction
    protected:
	VCollectableObject ();

    //  Destruction
    protected:
	~VCollectableObject ();

    //  Access
    public:
	VCollectableCollection *objectCollection () const {
	    return m_pCollection;
	}
	collection_index_t objectIndex () const {
	    return m_xObject;
	}

    //  Identity Access
    public:
	bool getIdentity (VCollectableCollection::Reference &rpCollection, collection_index_t &rxObject) const {
	    rpCollection = m_pCollection;
	    rxObject = m_xObject;
	    return rpCollection.isntNil ();
	}

    //  Identity Management
    public:
	bool attach (VCollectableCollection *pCollection, collection_index_t xObject);
	bool detach (VCollectableCollection *pCollection);

    //  State
    private:
	VCollectableCollection::Pointer m_pCollection;
	collection_index_t m_xObject;
    };

    class Vxa_API ClassBuilder {
    //  Method Definition
    public:
#ifndef sun
	template <typename NameType, typename T> bool defineConstant (NameType &rName, T rConstant[]) {
	    return defineConstantImpl (rName, static_cast<T*>(rConstant));
	}
#endif
	template <typename NameType, typename T> bool defineConstant (NameType &rName, T const &rConstant) {
	    return defineConstantImpl (rName, rConstant);
	}

	template <typename Signature> ClassBuilder& defineMethod (VString const &rName, Signature pMember) {
	    typename VCollectableMethod<Signature>::Reference pMethod (
		new VCollectableMethod<Signature> (rName, pMember)
	    );
	    return defineMethod (pMethod);
	}

	ClassBuilder& defineHelp (VString const &rWhere);

    private:
	template <typename NameType, typename T> bool defineConstantImpl (NameType &rName, T const &rConstant) {
	    VMethod::Reference pMethod;
	    return VExportable<T>::CreateMethod (pMethod, rName, rConstant) && defineMethod (pMethod);
	}
	ClassBuilder& defineMethod (VMethod *pMethod) {
	    return *this;
	}

    //  State
    private:
	
    };
}


#endif
