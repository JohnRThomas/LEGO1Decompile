#include "legovideomanager.h"

#include "custom/debug.h"

LegoVideoManager::LegoVideoManager()
{
  PARTIAL;

  unk64_ = 0;
  unk68_ = 0;
  unk6C_ = 0;
  unk74_ = 0;

  // This should accomplish both of these instructions...
  //unkE6_ = 0; //(byte)
  //unkE5_ = 0; // byte
  unkE4_ = 0;

  for (int i=0;i<0x1B;i++) {
    unk78_[i] = 0;
  }

  unk78_[0] = 0x6C;

  unk4E8_ = 0;
  unk4EC_ = 0; // (byte)
  unk4F0_ = 0;
  unk4F4_ = 0;
  unk50C_ = 0;
  unk508_ = 0;
  unk504_ = 0;
  unk514_ = 0;
  unk500_ = 0; // byte
  unk52C_ = 0;
  unk528_ = 0;
  unk540_ = 0;

  //unk501_ = 0; // (byte)
  unk500_ = 0;

  //unk554_ = 0; // byte
  //unk555_ = 0;
  unk554_ = 0;
}

LegoVideoManager::~LegoVideoManager()
{
  STUB;
}

void LegoVideoManager::MoveCursor(int /*x*/, int /*y*/)
{
  STUB;
}

void LegoVideoManager::EnableFullScreenMovie(unsigned char, unsigned char)
{
  STUB;
}

int LegoVideoManager::EnableRMDevice()
{
  STUB;

  return 0;
}

int LegoVideoManager::DisableRMDevice()
{
  STUB;

  return 0;
}

MxResult LegoVideoManager::Create(MxVideoParam &p_param, int p_tickleInterval, MxBool p_createThread)
{
  STUB;

  return SUCCESS;
}
