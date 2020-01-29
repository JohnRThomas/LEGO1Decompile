#include "mxomnicreateflags.h"

#include "custom/debug.h"

MxOmniCreateFlags::MxOmniCreateFlags()
{
  flags1_ |= CreateObjectFactory;
  flags1_ |= CreateVariableTable;
  flags1_ |= CreateTickleManager;
  flags1_ |= CreateNotificationManager;
  flags1_ |= CreateVideoManager;
  flags1_ |= CreateSoundManager;
  flags1_ |= CreateMxUnknownManager3;
  flags1_ |= CreateMxUnknownManager4;
  flags2_ |= CreateTimer;
  flags2_ |= CreateStreamer;
}

void MxOmniCreateFlags::SetCreateObjectFactory(BOOL enabled)
{
  if (enabled) {
    flags1_ |= CreateObjectFactory;
  } else {
    flags1_ &= ~CreateObjectFactory;
  }
}
