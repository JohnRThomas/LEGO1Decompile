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

    int ebp_1C = 0;

    MxAtom* ebp_14 = new MxAtom(str);

    if (mode == Unk_LookupMode1 || mode == Unk_LookupMode3) {
        // Call 100AE4A0
    } else if (mode == Unk_LookupMode2) {
        // Call MxString operator ==
    }

    MxAtomManagerUnknown2* ebp_18 = AtomManager()->sub_100AD780(&ebp_14);

    // 100AD2B6
    if (ebp_18 != AtomManager()->unk4()) {
        // 100AD2BB
    }

    // 100AD2F3
    MxAtomManagerUnknown2* ebp_10 = AtomManager()->unk4();

    // 100AD309
    if (ebp_10 != AtomManager()->unk4()) {

    }

    // 100AD345
    MxAtomManagerUnknown2* edi_1 = AtomManager()->unk4();
    bool eax_1 = true;
    if (edi_1->unk4_ != MxAtomManager::addr_101013F0) {

    }

    // 100AD3B0
    if (AtomManager()->unk8() != 0) {
    } else {
        // 100AD3C1
        ebp_10 = edi_1;

        // 100AD3C4
        if (eax_1) {
            if (AtomManager()->unk4()->unk0_ == edi_1) {
                //AtomManager()->sub_100AD4D0(&ebp_28, ****0A18, edi_1, &ebp_14);
            } else {
                // Call 100AD480
            }

        }
    }

    // 100AD424
    //AtomManager()->sub_100AD4D0();

    // Call 100AD46A

    return ebp_14;
}

void MxAtomId::sub_100ACFE0()
{
    ALERT("Stub")
}
