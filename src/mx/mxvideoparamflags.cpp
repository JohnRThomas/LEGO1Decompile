#include "mxvideoparamflags.h"

#include "custom/debug.h"

MxVideoParamFlags::MxVideoParamFlags()
{
  ALERT("MxVideoParamFlags::MxVideoParamFlags", "Stub");
  // FIXME: No idea what this enum is, but it appears to be hardcoded behavior nonetheless
  flags_ &= 0xFE;
  flags_ &= 0xFD;
  flags_ &= 0xFB;
  flags_ &= 0xF7;
  flags_ &= 0xEF;
  flags_ &= 0xDF;
  flags_ |= 0x200;
  flags_ |= 0x40;
  flags_ |= 0x80;
}

MxVideoParamFlags::operator unsigned short &()
{
  ALERT("MxVideoParamFlags::operator unsigned short &", "Stub");
  return flags_;
}
