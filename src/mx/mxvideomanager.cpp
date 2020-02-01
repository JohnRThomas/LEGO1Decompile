#include "mxvideomanager.h"

#include "custom/debug.h"

MxVideoManager::MxVideoManager()
{
  ALERT("MxVideoManager::MxVideoManager()", "Stub");
  Init();
}

MxVideoManager::~MxVideoManager()
{
  ALERT("MxVideoManager::~MxVideoManager()", "Stub");
}

void MxVideoManager::Init()
{
  ALERT("void MxVideoManager::Init()", "Stub");
  unk50_ = 0;
  unk54_ = 0;
  unk58_ = 0;
  unk5C_ = 0;
  video_param_.SetPalette(NULL);
  unk60_ = 0;
}

void MxVideoManager::InvalidateRect(MxRect32 &)
{
  ALERT("void MxVideoManager::InvalidateRect(MxRect32 &)", "Stub");
}

MxResult MxVideoManager::Create(MxVideoParam &p_param, int p_tickleInterval, BOOL p_createThread)
{
  ALERT("MxResult MxVideoManager::Create(MxVideoParam &p_param, int p_tickleInterval, BOOL p_createThread)", "Stub");

  return SUCCESS;
}

long MxVideoManager::RealizePalette(MxPalette *)
{
  ALERT("long MxVideoManager::RealizePalette(MxPalette *)", "Stub");

  return 0;
}
