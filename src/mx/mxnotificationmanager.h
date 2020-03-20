#ifndef MXNOTIFICATIONMANAGER_H
#define MXNOTIFICATIONMANAGER_H

#include "mxcore.h"
#include "mxcriticalsection.h"
#include "mxresult.h"

/**
 * @brief The MxNotificationManagerUnknown1 class
 *
 * 0xC bytes in size
 */
class MxNotificationManagerUnknown1 {
public:
  MxNotificationManagerUnknown1* unk0_;
  MxNotificationManagerUnknown1* unk4_;
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

class MAMU1Wrapper {
public:
  inline MAMU1Wrapper() {
    unk0_ = 0x10;

    MxNotificationManagerUnknown1* mamu1 = new MxNotificationManagerUnknown1();
    mamu1->unk0_ = mamu1;
    mamu1->unk4_ = mamu1;
    unk4_ = mamu1;

    unk8_ = 0;
  }

private:
  unsigned char unk0_;

  MxNotificationManagerUnknown1* unk4_;

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

  virtual void vtable08(){}
  virtual void vtable0C(){}
  virtual void vtable10(){}
  virtual void vtable14(){}
  virtual void vtable18(){}
  virtual void vtable1C(){}
  virtual void vtable20(){}
  virtual void vtable24(){}
  virtual MxResult sub_100AC600(int unkp1, int unkp2);

  void sub_100ACD20(MxCore *core);

private:
  MxNotificationManagerUnknown2* unk8_;
  int unkC_;

  MxCriticalSection critical_section_;

  int unk2C_;
  MAMU1Wrapper unk30_;
  unsigned char unk3C_;

};

#endif // MXNOTIFICATIONMANAGER_H
