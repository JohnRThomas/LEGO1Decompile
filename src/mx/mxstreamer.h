#ifndef MXSTREAMER_H
#define MXSTREAMER_H

#include "custom/debug.h"
#include "mxcore.h"
#include "mxstreamcontroller.h"

#include <WINDOWS.H>

/**
 * @brief The MxStreamerUnknown class
 *
 * 0xC bytes in size
 */
class MxStreamerUnkSub1 {
public:
  MxStreamerUnkSub1* unk0_;
  MxStreamerUnkSub1* unk4_;
  int unk8_;
};

class MxStreamerUnkSub2 {
public:
  MxStreamerUnkSub2(int punk1) {
    IMPERFECT;

    unk0_ = 0;
    unk4_ = punk1;

    int* unk8ptr = &unk8_;

    for (int i=0;i>=0;i--) {
      unk8ptr[i] = 0;
    }
  }

  ~MxStreamerUnkSub2() {
    STUB;
  }

  int unk0_;
  int unk4_;
  int unk8_;

};

class MxStreamerUnkSub3 {
public:
  MxStreamerUnkSub3() {
    IMPERFECT;

    MxStreamerUnkSub1* msus11 = new MxStreamerUnkSub1();
    msus11->unk0_ = msus11;
    msus11->unk4_ = msus11;
    unk0_ = msus11;

    unk4_ = 0;
  }

  ~MxStreamerUnkSub3() {
    STUB;
  }

  MxStreamerUnkSub1* unk0_;
  int unk4_;
};

class MxStreamerBase {
public:
  MxStreamerBase() {
    IMPERFECT;

    unk8_ = 0x10;
  }

private:
  unsigned char unk8_;

};

/**
 * @brief The MxStreamer class
 *
 * 0x2C bytes in size, allocated at ****0AC0
 */
class MxStreamer : public MxCore, public MxStreamerBase {
public:
  // sub_100B8F00
  MxStreamer();

  MxStreamController* Open(const char*, unsigned short);
  long Close(const char*);

  virtual void vtable08(){STUB;}
  virtual void vtable0C(){STUB;}
  virtual void vtable10(){STUB;}
  virtual BOOL sub_100B9190(){STUB;return TRUE;}

  MxStreamerUnkSub3 unkC_;

  MxStreamerUnkSub2 unk14_;

  MxStreamerUnkSub2 unk20_;

};

MxStreamer* Streamer();

#endif // MXSTREAMER_H
