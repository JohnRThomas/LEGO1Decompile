#ifndef MXATOM_H
#define MXATOM_H

#include "mxstring.h"

enum LookupMode
{
    Unk_LookupMode0, // 0
    Unk_LookupMode1, // 1
    Unk_LookupMode2, // 2
    Unk_LookupMode3, // 3
};

/**
 * @brief The MxAtom class
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
