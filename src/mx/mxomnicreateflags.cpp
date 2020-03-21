#include "mxomnicreateflags.h"

#include "custom/debug.h"

MxOmniCreateFlags::MxOmniCreateFlags()
{
  PERFECT;

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
