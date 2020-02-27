#ifndef MXOMNICREATEFLAGS_H
#define MXOMNICREATEFLAGS_H

#include "mxbool.h"
#include <WINDOWS.H>

class MxOmniCreateFlags {
public:
  enum Flags {
    CreateObjectFactory = 0x1,
    CreateVariableTable = 0x2,
    CreateTickleManager = 0x4,
    CreateNotificationManager = 0x8,
    CreateVideoManager = 0x10,
    CreateSoundManager = 0x20,
    CreateMxUnknownManager3 = 0x40,
    CreateMxUnknownManager4 = 0x80
  };

  enum Flags2 {
    CreateTimer = 0x2,
    CreateStreamer = 0x4
  };

  MxOmniCreateFlags();

  unsigned char& flags1() { return flags1_; }
  unsigned char& flags2() { return flags2_; }

private:
  unsigned char flags1_;

  unsigned char flags2_;

};

#endif // MXOMNICREATEFLAGS_H
