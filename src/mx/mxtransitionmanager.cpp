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

MxResult MxTransitionManager::vtable14()
{
  ALERT("MxTransitionManager::vtable14()", "Stub");

  return SUCCESS;
}
