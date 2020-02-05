#ifndef MXNOTIFICATIONMANAGER_H
#define MXNOTIFICATIONMANAGER_H

#include "mxcore.h"
#include "mxcriticalsection.h"

/**
 * @brief The MxNotificationManagerUnknown1 class
 *
 * 0xC bytes in size
 */
class MxNotificationManagerUnknown1 {
public:
  int unk0_;
  int unk4_;
  int unk8_;
};

/**
 * @brief The MxNotificationManagerUnknown3 class
 *
 * 0xC bytes in size
 */
class MxNotificationManagerUnknown3 {
public:
  MxNotificationManagerUnknown3* unk0_;
  MxNotificationManagerUnknown3* unk4_;
  int unk8_;
};

/**
 * @brief The MxNotificationManagerUnknown2 class
 *
 * 0xC bytes in size
 */
class MxNotificationManagerUnknown2 {
public:
  unsigned char unk0_;
  MxNotificationManagerUnknown3* unk4_;
  int unk8_;
};

/**
 * @brief The MxNotificationManager class
 *
 * 0x40 bytes in size
 */
class MxNotificationManager : public MxCore {
public:
  MxNotificationManager();

  void sub_100AC600(int unkp1, int unkp2);

  void sub_100ACD20(MxCore *core);

private:
  MxNotificationManagerUnknown2* unk8_;
  int unkC_;

  MxCriticalSection critical_section_;

  int unk2C_;
  unsigned char unk30_;
  MxNotificationManagerUnknown1* unk34_;
  int unk38_;
  unsigned char unk3C_;
};

#endif // MXNOTIFICATIONMANAGER_H
