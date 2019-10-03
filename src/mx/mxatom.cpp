#include "mxatom.h"

MxAtom::MxAtom(const char *s) :
    string_(s),
    unk10_(0)
{
}

const MxString &MxAtom::string()
{
    return string_;
}

void MxAtom::sub_100AD7F0()
{
    unk10_++;
}
