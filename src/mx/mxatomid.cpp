#include "mxatomid.h"

#include "custom/debug.h"
#include "mxomni.h"

MxAtomId::MxAtomId() :
    str_(nullptr)
{
}

MxAtomId::MxAtomId(const char* str, LookupMode mode)
{
    if (MxOmni::GetInstance() != nullptr && AtomManager() != nullptr) {
        MxAtom* atom = sub_100AD210(str, mode);

        str_ = atom->string();

        atom->sub_100AD7F0();
    }
}

MxAtomId::~MxAtomId()
{
    if (str_ != nullptr
            && MxOmni::GetInstance() != nullptr
            && AtomManager() != nullptr) {
        ALERT("Partial Stub")
    }
}

MxAtomId& MxAtomId::operator=(const MxAtomId &other)
{
    if (str_ != nullptr) {
        sub_100ACFE0();
    }

    if (other.str_ != nullptr) {
        if (MxOmni::GetInstance() != nullptr && AtomManager() != nullptr) {
            MxAtom* atom = sub_100AD210(other.str_, Unk_LookupMode0);

            str_ = atom->string();

            atom->sub_100AD7F0();
        }
    } else {
        str_ = nullptr;
    }

    return *this;
}

MxAtom *MxAtomId::sub_100AD210(const char *str, LookupMode mode)
{
    ALERT("Partial Stub")

    MxAtom* atom = new MxAtom(str);

    if (mode == Unk_LookupMode1 || mode == Unk_LookupMode3) {
        // Call 100AE4A0
    } else if (mode == Unk_LookupMode2) {
        // Call MxString operator ==
    }

    /*
    int something;
    MxAtomManagerUnknown2* mamu2 = AtomManager()->sub_100AD780(&something);

    // 100AD2B6
    if (mamu2 != AtomManager()->unk_mamu2()) {
        // 100AD2BB
    }

    // 100AD2F3


    // 100AD345
    bool run_later = true;
    if (AtomManager()->unk4_->unk4_ != addr_101013F0) {

    }

    // 100AD3B0
    if (AtomManager()->unk8_ == 0) {
    }

    // 100AD3C4
    if (run_later) {
    }

    // 100AD424
    AtomManager()->sub_100AD4D0()->sub_100AD46A();

    */

    return atom;
}

void MxAtomId::sub_100ACFE0()
{
    ALERT("Stub")
}
