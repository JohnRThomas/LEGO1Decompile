#ifndef MXATOMID_H
#define MXATOMID_H

#include "mxatommanager.h"

/**
 * @brief The MxAtomId class
 *
 * 0x4 bytes in size
 */
class MxAtomId {
public:
    MxAtomId();
    MxAtomId(const char* str, LookupMode mode);
    ~MxAtomId();

    MxAtomId& operator=(const MxAtomId &);

private:
    MxAtom* sub_100AD210(const char* str, LookupMode mode);

    void sub_100ACFE0();

    const char* str_;
};

#endif // MXATOMID_H
