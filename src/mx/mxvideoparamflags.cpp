#include "mxvideoparamflags.h"

#include "custom/debug.h"

MxVideoParamFlags::MxVideoParamFlags()
{
  flags1_ &= 0xFE;
  flags1_ &= 0xFD;
  flags1_ &= 0xFB;
  flags1_ &= 0xF7;
  flags1_ &= 0xEF;
  flags1_ &= 0xDF;
  flags1_ |= 0x40;
  flags1_ |= 0x80;

  flags2_ |= 0x2;
}
