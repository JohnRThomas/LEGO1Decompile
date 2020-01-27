#include "mxvideomanager.h"

#include "custom/debug.h"

MxVideoManager::MxVideoManager()
{
  Init();
}

MxVideoManager::~MxVideoManager()
{
  ALERT("Stub");
}

void MxVideoManager::Init()
{
  unk50_ = 0;
  unk54_ = 0;
  unk58_ = 0;
  unk5C_ = 0;
  video_param_.SetPalette(NULL);
  unk60_ = 0;
}

void MxVideoManager::InvalidateRect(MxRect32 &)
{
  ALERT("Stub");
}

long MxVideoManager::RealizePalette(MxPalette *)
{
  ALERT("Stub");

  return 0;
}
