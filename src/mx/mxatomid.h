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
    __declspec(dllexport) MxAtomId(const char* str, LookupMode mode);
    __declspec(dllexport) ~MxAtomId();

    __declspec(dllexport) MxAtomId& operator=(const MxAtomId &);

private:
    const char* str_;
};

#endif // MXATOMID_H
