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

    unk4_ = new MxAtomManagerUnknown2(addr_101013F0);
}

MxAtom *MxAtomManager::sub_100AD210(const char *str, LookupMode mode)
{
    ALERT("Partial Stub")

    MxAtom* atom = new MxAtom(str);

    switch (mode) {
    case Unk_LookupMode0:
        AtomManager()->sub_100AD780(/* eax */);

        break;
    case Unk_LookupMode1:
        break;
    case Unk_LookupMode2:
        break;
    case Unk_LookupMode3:
        break;
    }

    return atom;
}

void MxAtomManager::sub_100AD780()
{
    ALERT("Stub")
}

MxAtomManagerUnknown2::MxAtomManagerUnknown2(MxAtomManagerUnknown1* mamu1) :
    unk4_(mamu1),
    unk10_(0)
{
}

MxAtomManagerUnknown1::MxAtomManagerUnknown1() :
    unk0_(0),
    unk4_(0),
    unk8_(0),
    unk10_(1)
{
}
