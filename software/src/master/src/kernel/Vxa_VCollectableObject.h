#ifndef Vxa_VCollectableObject_Interface
#define Vxa_VCollectableObject_Interface

/************************
 *****  Components  *****
 ************************/

#include "Vxa_VRolePlayer.h"

/**************************
 *****  Declarations  *****
 **************************/

#include "Vxa_VCollectableCollectionOf.h"
#include "Vxa_VCollectableMethod.h"

/*************************
 *****  Definitions  *****
 *************************/

namespace Vxa {
    class VResultBuilder;

    /*-----------------------------------------*
     *----  class Vxa::VCollectableObject  ----*
     *-----------------------------------------*/

    class Vxa_API VCollectableObject : virtual public VRolePlayer {
	DECLARE_ABSTRACT_RTTLITE (VCollectableObject, VRolePlayer);

	friend class VCollectableCollection;

    //  Aliases
    public:
	typedef ThisClass Object;
	typedef VCollectableCollection::collection_index_t collection_index_t;

    //  Class Builder
    public:
	class Vxa_API ClassBuilder;

    //  Traits
    public:
    //  ClusterOf<collectable_reference_t>
    //  ... redefine in derived types to use something other than a VCollectableCollectionOf<T>
        template <typename collectable_reference_t> struct ClusterOf {
            typedef VCollectableCollectionOf<collectable_reference_t> type;
        };

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

    /*-------------------------------------------------------*
     *----  class Vxa::VCollectableObject::ClassBuilder  ----*
     *-------------------------------------------------------*/

    class Vxa_API VCollectableObject::ClassBuilder {
    //  Construction
    protected:
	ClassBuilder (Vxa::VClass *pClass);

    //  Method Definition
    public:
#ifndef sun
	template <typename T> bool defineConstant (VString const &rName, T rConstant[]) {
	    return defineConstantImpl (rName, static_cast<T*>(rConstant));
	}
#endif
	template <typename T> bool defineConstant (VString const &rName, T const &rConstant) {
	    return defineConstantImpl (rName, rConstant);
	}

	template <typename Signature> bool defineMethod (VString const &rName, Signature pMember) {
	    typename VCollectableMethod<Signature>::Reference pMethod (
		new VCollectableMethod<Signature> (rName, pMember)
	    );
	    return defineMethod (pMethod);
	}

	bool defineHelp (VString const &rWhere);

    private:
	template <typename T> bool defineConstantImpl (VString const &rName, T const &rConstant) {
	    VMethod::Reference pMethod;
	    return VExportable<T>::CreateMethod (pMethod, rName, rConstant) && defineMethod (pMethod);
	}
	bool defineMethod (VMethod *pMethod);

    //  State
    private:
	VClass* m_pClass;
	VString m_iHelpInfo;
    }; // class Vxa::VCollectableObject

    /*----------------------------------------------------------*
     *----  typedef Vxa::Object => Vxa::VCollectableObject  ----*
     *----------------------------------------------------------*/

    typedef VCollectableObject Object;
}


#endif
