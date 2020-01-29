#ifndef MXOMNICREATEFLAGS_H
#define MXOMNICREATEFLAGS_H

#include <WINDOWS.H>

class MxOmniCreateFlags {
public:
  MxOmniCreateFlags();

  void SetCreateObjectFactory(BOOL enabled);

private:
  enum Flags {
    CreateObjectFactory = 0x1,
    CreateVariableTable = 0x2,
    CreateTickleManager = 0x4,
    CreateNotificationManager = 0x8,
    CreateVideoManager = 0x10,
    CreateSoundManager = 0x20,
    CreateMxUnknownManager3 = 0x40,
    CreateMxUnknownManager4 = 0x80,
  };

  enum Flags2 {
    CreateTimer = 0x2,
    CreateStreamer = 0x4
  };

  unsigned char flags1_;

  unsigned char flags2_;

};

#endif // MXOMNICREATEFLAGS_H
