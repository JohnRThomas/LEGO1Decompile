#ifndef MXNOTIFICATIONMANAGER_H
#define MXNOTIFICATIONMANAGER_H

#include "custom/debug.h"
#include "mxcore.h"
#include "mxcriticalsection.h"
#include "mxresult.h"
#include "mxstreamer.h"

/**
 * @brief The MxNotificationManagerUnknown1 class
 *
 * 0xC bytes in size
 */
class MxNotificationManagerUnknown1 {
public:
  /// +0
  MxNotificationManagerUnknown1* next_;

  /// +4
  MxNotificationManagerUnknown1* previous_;

  /// +8
  unsigned int id_;
};

class MAMU1WrapperBaseBase {
public:
  // Inlined into MxNotificationManager::MxNotificationManager()
  MAMU1WrapperBaseBase(unsigned char punk1){
    PERFECT;

    unk0_ = punk1;

    MxNotificationManagerUnknown1* mamu1 = new MxNotificationManagerUnknown1();

    mamu1->next_ = mamu1;
    mamu1->previous_ = mamu1;
    root_ = mamu1;

    count_ = 0;
  }

  // sub_100AC320
  ~MAMU1WrapperBaseBase() {
    PARTIAL;

    if (root_->next_ != root_) {
      MxNotificationManagerUnknown1* edi = root_->next_;

      do {

        MxNotificationManagerUnknown1** edx = &edi->previous_;
        MxNotificationManagerUnknown1* esp_8 = edi;
        MxNotificationManagerUnknown1* eax = edi;
        edi = edi->next_;
        MxNotificationManagerUnknown1* ecx = *edx;
        eax = eax->next_;
        ecx->next_ = eax;
        ecx = *edx;
        eax = esp_8;

        MxNotificationManagerUnknown1* edx2 = eax->next_;
        edx2->next_ = ecx;

        delete eax;

        count_--;
      } while (edi != root_);
    }

    delete root_;
    root_ = NULL;

    count_ = 0;
  }

  /// +0
  unsigned char unk0_;

  /// +4
  MxNotificationManagerUnknown1* root_;

  /// +8
  int count_;

};

class MAMU1WrapperBase : public MAMU1WrapperBaseBase {
public:
  MAMU1WrapperBase(unsigned char punk1) :
    MAMU1WrapperBaseBase(punk1)
  {
    PERFECT;
  }

  ~MAMU1WrapperBase(){
    STUB;
  }
};

class MAMU1Wrapper : public MAMU1WrapperBase {
public:
  MAMU1Wrapper(unsigned char punk1) :
    MAMU1WrapperBase(punk1)
  {
    PERFECT;
  }

  ~MAMU1Wrapper() {
    STUB;
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

  virtual void vtable08(){STUB;}
  virtual void vtable0C(){STUB;}
  virtual void vtable10(){STUB;}
  virtual void vtable14(){STUB;}
  virtual void vtable18(){STUB;}
  virtual void vtable1C(){STUB;}
  virtual void vtable20(){STUB;}
  virtual void vtable24(){STUB;}
  virtual MxResult sub_100AC600(int unkp1, int unkp2);

  void sub_100ACD20(MxCore *core);

private:
  MAMU1Wrapper* unk8_;
  int unkC_;

  MxCriticalSection critical_section_;

  int unk2C_;

  MAMU1Wrapper unk30_;
  unsigned char unk3C_;

};

#endif // MXNOTIFICATIONMANAGER_H
