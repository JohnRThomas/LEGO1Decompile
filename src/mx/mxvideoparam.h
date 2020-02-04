#ifndef MXVIDEOPARAM_H
#define MXVIDEOPARAM_H

#include "mxpalette.h"
#include "mxrect32.h"
#include "mxvideoparamflags.h"

/**
 * @brief The MxVideoParam class
 *
 * SEEMS to be 0x24 bytes in size
 */
class MxVideoParam {
public:
  MxVideoParam();
  MxVideoParam(MxRect32&, MxPalette*, unsigned long, MxVideoParamFlags&);
  MxVideoParam(MxVideoParam&);
  ~MxVideoParam();

  MxVideoParam& operator=(const MxVideoParam&);

  void SetDeviceName(char*);

  const int& x() const;
  const int& y() const;
  const int& width() const;
  const int& height() const;

  const char* device_name() const;

  // +0
  int x_;

  // +4
  int y_;

  // +8
  int width_;

  // +C
  int height_;

  // +10
  MxPalette* palette_;

  // +14
  unsigned long unknown1_;

  // +18
  MxVideoParamFlags flags_;

  // +1C
  int unknown2_;

  // +20
  char* device_name_;
};

#endif // MXVIDEOPARAM_H
