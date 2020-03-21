#include "mxatom.h"

#include "custom/debug.h"

MxAtom::MxAtom(const char *s) :
  string_(s),
  unk10_(0)
{
  STUB;
}

void MxAtom::sub_100AD7F0()
{
  PARTIAL;

  unk10_++;
}
