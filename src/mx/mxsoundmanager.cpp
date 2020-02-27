#include "mxsoundmanager.h"

#include "custom/debug.h"

MxSoundManager::MxSoundManager()
{
  ALERT("MxSoundManager::MxSoundManager()", "Stub");
  Init();
}

void MxSoundManager::Init()
{
  ALERT("void MxSoundManager::Init()", "Stub");
  unk30_ = 0;
  unk34_ = 0;
}

MxResult MxSoundManager::sub_100AE8B0(int punk1, int punk2)
{
  ALERT("MxResult MxSoundManager::sub_100AE8B0(int punk1, int punk2)", "Stub");

  return SUCCESS;
}
