#include "mxvideomanager.h"

#include "custom/debug.h"

MxVideoManager::MxVideoManager()
{
  PARTIAL;
  Init();
}

MxVideoManager::~MxVideoManager()
{
  STUB;
}

void MxVideoManager::Init()
{
  PARTIAL;
  unk50_ = 0;
  unk54_ = 0;
  unk58_ = 0;
  unk5C_ = 0;
  video_param_.palette_ = NULL;
  unk60_ = 0;
}

void MxVideoManager::InvalidateRect(MxRect32 &)
{
  STUB;
}

MxResult MxVideoManager::Create(MxVideoParam &p_param, int p_tickleInterval, MxBool p_createThread)
{
  STUB;

  return SUCCESS;
}

long MxVideoManager::RealizePalette(MxPalette *)
{
  STUB;

  return 0;
}
