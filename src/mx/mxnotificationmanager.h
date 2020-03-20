#ifndef MXNOTIFICATIONMANAGER_H
#define MXNOTIFICATIONMANAGER_H

#include "custom/debug.h"
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

class MAMU1WrapperBaseBase {
public:
  MAMU1WrapperBaseBase(){
    unk0_ = 0x10;

    MxNotificationManagerUnknown1* mamu1 = new MxNotificationManagerUnknown1();

    mamu1->unk0_ = mamu1;
    mamu1->unk4_ = mamu1;
    unk4_ = mamu1;

    unk8_ = 0;
  }

  ~MAMU1WrapperBaseBase(){
    ALERT("MAMU1WrapperBaseBase Destructor", "Stub");
  }

private:
  unsigned char unk0_;

  MxNotificationManagerUnknown1* unk4_;

  int unk8_;

};

class MAMU1WrapperBase : public MAMU1WrapperBaseBase {
public:
  MAMU1WrapperBase(){}

  ~MAMU1WrapperBase(){
    ALERT("MAMU1WrapperBase Destructor", "Stub");
  }
};

class MAMU1Wrapper : public MAMU1WrapperBase {
public:
  MAMU1Wrapper() {

  }

  ~MAMU1Wrapper() {
    ALERT("MAMU1Wrapper Destructor", "Stub");
  }

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
