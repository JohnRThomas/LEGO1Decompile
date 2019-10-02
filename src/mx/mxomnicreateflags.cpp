#include "mxomnicreateflags.h"

#include "custom/debug.h"

MxOmniCreateFlags::MxOmniCreateFlags()
{
    // FIXME: No idea what this enum is, but it appears to be hardcoded behavior nonetheless
    flags_ |= 0x1;
    flags_ |= 0x2;
    flags_ |= 0x4;
    flags_ |= 0x8;
    flags_ |= 0x10;
    flags_ |= 0x20;
    flags_ |= 0x40;
    flags_ |= 0x80;
    flags_ |= 0x200;
    flags_ |= 0x400;
}
