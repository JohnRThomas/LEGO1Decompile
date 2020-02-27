#ifndef MXTICKLEMANAGER_H
#define MXTICKLEMANAGER_H

#include "mxcore.h"
#include "mxnotificationmanager.h"
#include "mxresult.h"

/**
 * @brief Unknown class that's a subclass of MxTickleManager
 *
 * This class is 0xC bytes in size. Usually allocated at ****0A40. First two DWORDs appear to be vtable-related.
 */
class MxTickleUnknownSubclass1 {
public:
  MxTickleUnknownSubclass1* unk00_;
  MxTickleUnknownSubclass1* unk04_;
  MxTickleUnknownSubclass1* unk08_;

};

/**
 * @brief A very important class in LEGO Island that raises one very important question...
 *
 * ...what the fuck is a tickle?
 *
 * This class is 0x14 bytes in size. Usually allocated at ****0A28.
 */
class MxTickleManager : public MxCore {
public:
  // u1 is most likely an MxBool
  inline MxTickleManager(unsigned char u1)
  {
    // FIXME: Imperfect

    unknown08_ = u1;

    MxTickleUnknownSubclass1* list_entry = new MxTickleUnknownSubclass1();
    list_entry->unk00_ = list_entry;
    list_entry->unk04_ = list_entry;
    unknown0C_ = list_entry;

    unknown10_ = 0x0;
  }

  virtual ~MxTickleManager();

  virtual void vtable4();

  virtual void vtable8();

  virtual void vtableC();

  virtual void vtable10();

  virtual void vtable14();

  virtual void vtable18();

  void sub_100BDE80(MxNotificationManager*, int);

private:
  unsigned char unknown08_; // +8
  MxTickleUnknownSubclass1* unknown0C_; // +C
  int unknown10_; // +10
};

#endif // MXTICKLEMANAGER_H
