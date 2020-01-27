#include "mxtransitionmanager.h"

#include "custom/debug.h"

MxTransitionManager::MxTransitionManager()
{
  ALERT("MxTransitionManager::MxTransitionManager()", "Stub\n\nSize: %x", sizeof(MxTransitionManager));
}

void MxTransitionManager::SetWaitIndicator(MxVideoPresenter*)
{
  ALERT("void MxTransitionManager::SetWaitIndicator(MxVideoPresenter*)", "Stub");
}

MxTransitionManager* TransitionManager()
{
  ALERT("MxTransitionManager* TransitionManager()", "Stub");

  return NULL;
}
