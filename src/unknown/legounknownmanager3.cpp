#include "legounknownmanager3.h"

LUM31* LegoUnknownManager3::addr_100F0100 = NULL;

__int64* LegoUnknownManager3::addr_100F42E8 = NULL;
__int64* LegoUnknownManager3::addr_100F42EC = NULL;
__int64* LegoUnknownManager3::addr_100F4358 = NULL;
__int64* LegoUnknownManager3::addr_100F435C = NULL;

LegoUnknownManager3::~LegoUnknownManager3()
{
  PARTIAL;

  // FIXME: Unknown behavior, inferred
  delete unk1C_;
  delete unkC_;
}

void LegoUnknownManager3::sub_10046C10()
{
  PARTIAL;

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
