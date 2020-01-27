#include "mxatom.h"

#include "custom/debug.h"

MxAtom::MxAtom(const char *s) :
  string_(s),
  unk10_(0)
{
  ALERT("MxAtom::MxAtom(const char *s)", "Stub");
}

const MxString &MxAtom::string()
{
  return string_;
}

void MxAtom::sub_100AD7F0()
{
  ALERT("void MxAtom::sub_100AD7F0()", "Stub");

  unk10_++;
}
