#include "mxatommanager.h"

#include "custom/debug.h"
#include "mxomni.h"

MxAtomManagerUnknown1* MxAtomManager::addr_101013F0 = nullptr;

MxAtomManager::MxAtomManager() :
    unk0_(0),
    unk8_(0),
    unkC_(0)
{
    if (addr_101013F0 == nullptr) {
        addr_101013F0 = new MxAtomManagerUnknown1();
    }

    MxAtomManagerUnknown1* eax_1 = new MxAtomManagerUnknown1();
    eax_1->unk4_ = addr_101013F0;
    eax_1->unk10_ = 0;
    unk4_ = eax_1;

    unk4()->unk0_ = unk4();
    unk4()->unk8_ = unk4();
}

MxAtomManagerUnknown1 *MxAtomManager::unk4()
{
    return unk4_;
}

const int& MxAtomManager::unk8()
{
    return unk8_;
}

MxAtomManagerUnknown1 *MxAtomManager::sub_100AD780(MxAtom *atom)
{
    MxAtomManagerUnknown1* esi_1 = unk4_->unk4_;
    MxAtomManagerUnknown1* ret = unk4_;

    while (esi_1 != addr_101013F0) {
        MxAtom* ecx_1 = esi_1->unkC_;

        if (ecx_1->string() == atom->string()) {
            ret = esi_1;
            esi_1 = esi_1->unk0_;
        } else {
            esi_1 = esi_1->unk8_;
        }
    }

    // FIXME: This is not correct behavior
    return ret;
}

void MxAtomManager::sub_100AD4D0(int*, MxAtomManagerUnknown1 *, MxAtomManagerUnknown1 *, MxAtom **)
{
    ALERT("Stub")
}

MxAtomManagerUnknown1::MxAtomManagerUnknown1() :
    unk0_(nullptr),
    unk4_(nullptr),
    unk8_(nullptr),
    unk10_(1)
{
}
