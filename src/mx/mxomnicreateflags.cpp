#include "mxomnicreateflags.h"

#include "custom/debug.h"

MxOmniCreateFlags::MxOmniCreateFlags()
{
  ALERT("MxOmniCreateFlags::MxOmniCreateFlags()", "Stub");
  flags_ |= CreateObjectFactory;
  flags_ |= CreateVariableTable;
  flags_ |= CreateTickleManager;
  flags_ |= CreateNotificationManager;
  flags_ |= CreateVideoManager;
  flags_ |= CreateSoundManager;
  flags_ |= CreateMxUnknownManager3;
  flags_ |= CreateMxUnknownManager4;
  flags_ |= CreateTimer;
  flags_ |= CreateStreamer;
}

MxOmniCreateFlags::operator unsigned short&()
{
  ALERT("MxOmniCreateFlags::operator unsigned short&()", "Stub");
  return flags_;
}
