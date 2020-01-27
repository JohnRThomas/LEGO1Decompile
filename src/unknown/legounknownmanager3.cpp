#include "legounknownmanager3.h"

#include "custom/debug.h"

LUM31* LegoUnknownManager3::addr_100F0100 = NULL;

__int64* LegoUnknownManager3::addr_100F42E8 = NULL;
__int64* LegoUnknownManager3::addr_100F42EC = NULL;
__int64* LegoUnknownManager3::addr_100F4358 = NULL;
__int64* LegoUnknownManager3::addr_100F435C = NULL;

LegoUnknownManager3::LegoUnknownManager3() :
    unk8_(0),
    unk10_(0)
{
    if (addr_100F0100 == NULL) {
        addr_100F0100 = new LUM31();
        addr_100F0100->unk0_ = 0;
        addr_100F0100->unk4_ = NULL;
        addr_100F0100->unk8_ = NULL;
        addr_100F0100->unk14_ = 1;
    }

    unkC_ = new LUM31();
    unkC_->unk4_ = addr_100F0100;
    unkC_->unk8_ = unkC_;
    unkC_->unk14_ = 0;

    unk14_ = 0;

    SetUnknown4(1);
    unk18_ = 0;

    unk1C_ = new LUM32();

    unk20_ = 0;
}

LegoUnknownManager3::~LegoUnknownManager3()
{
    // FIXME: Unknown behavior, inferred
    delete unk1C_;
    delete unkC_;
}

void LegoUnknownManager3::SetUnknown4(unsigned char u)
{
    unk4_ = u;
}

void LegoUnknownManager3::sub_10046C10()
{
    if (addr_100F42E8 != NULL) {
        return;
    }

    if (addr_100F42EC != NULL) {
        return;
    }

    if (addr_100F4358 != NULL) {
        return;
    }

    if (addr_100F435C != NULL) {
        return;
    }

    addr_100F42E8 = new __int64[0x10];
    memset(addr_100F42E8, 0x0, 0x10 * sizeof(__int64));

    addr_100F42EC = new __int64[0x10];
    memset(addr_100F42EC, 0x0, 0x10 * sizeof(__int64));

    addr_100F4358 = new __int64[0xA];
    memset(addr_100F4358, 0x0, 0xA * sizeof(__int64));

    addr_100F435C = new __int64[0xA];
    memset(addr_100F435C, 0x0, 0xA * sizeof(__int64));
}
