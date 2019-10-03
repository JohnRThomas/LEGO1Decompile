#include "mxatomid.h"

#include "custom/debug.h"
#include "mxomni.h"

MxAtomId::MxAtomId(const char* str, LookupMode mode)
{
    ALERT("Partial Stub")

    if (MxOmni::GetInstance() != nullptr && AtomManager() != nullptr) {
        MxAtom* atom = AtomManager()->sub_100AD210(str, mode);

        str_ = atom->string();

        atom->sub_100AD7F0();
    }
}

MxAtomId::~MxAtomId()
{
    ALERT("Stub")
}

MxAtomId& MxAtomId::operator=(const MxAtomId &)
{
    ALERT("Stub")

    return *this;
}
