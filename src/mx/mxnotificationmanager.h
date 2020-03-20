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
  MxNotificationManagerUnknown1* next_;
  MxNotificationManagerUnknown1* previous_;
  int unk8_;
};

class MAMU1WrapperBaseBase {
public:
  // Inlined into MxNotificationManager::MxNotificationManager()
  MAMU1WrapperBaseBase(unsigned char punk1){
    unk0_ = punk1;

    MxNotificationManagerUnknown1* mamu1 = new MxNotificationManagerUnknown1();

    mamu1->next_ = mamu1;
    mamu1->previous_ = mamu1;
    root_ = mamu1;

    count_ = 0;
  }

  // sub_100AC320
  ~MAMU1WrapperBaseBase(){
    ALERT("MAMU1WrapperBaseBase Destructor", "Stub");

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

private:
  unsigned char unk0_;

  MxNotificationManagerUnknown1* root_;

  int count_;

};

class MAMU1WrapperBase : public MAMU1WrapperBaseBase {
public:
  MAMU1WrapperBase(unsigned char punk1) :
    MAMU1WrapperBaseBase(punk1)
  {}

  ~MAMU1WrapperBase(){
    ALERT("MAMU1WrapperBase Destructor", "Stub");
  }
};

class MAMU1Wrapper : public MAMU1WrapperBase {
public:
  MAMU1Wrapper(unsigned char punk1) :
    MAMU1WrapperBase(punk1)
  {}

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
  MAMU1Wrapper* unk8_;
  int unkC_;

  MxCriticalSection critical_section_;

  int unk2C_;

  MAMU1Wrapper unk30_;
  unsigned char unk3C_;

};

#endif // MXNOTIFICATIONMANAGER_H
