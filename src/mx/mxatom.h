#ifndef MXATOM_H
#define MXATOM_H

#include "mxstring.h"

enum LookupMode
{
    Unk_LookupMode0,
    Unk_LookupMode1,
    Unk_LookupMode2,
    Unk_LookupMode3,
};

/**
 * @brief The MxAtomSubclass1 class
 *
 * 0x14 bytes in size
 */
class MxAtom {
public:
    MxAtom(const char* s);

    const MxString& string();

    void sub_100AD7F0();

private:
    MxString string_;

    unsigned short unk10_;
};

#endif // MXATOM_H
