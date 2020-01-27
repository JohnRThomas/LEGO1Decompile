#include "mxtransitionmanager.h"

#include "custom/debug.h"

MxTransitionManager::MxTransitionManager()
{
  ALERT("Stub\n\nSize: %x", sizeof(MxTransitionManager));
}

void MxTransitionManager::SetWaitIndicator(MxVideoPresenter*)
{
  ALERT("Stub");
}

MxTransitionManager* TransitionManager()
{
  ALERT("Stub");

  return NULL;
}
