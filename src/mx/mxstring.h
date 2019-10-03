#ifndef MXSTRING_H
#define MXSTRING_H

#include "mxcore.h"

/**
 * @brief String type abstract
 *
 * A wrapper around char* that handles memory de/allocation.
 *
 * This class is 0x10 bytes in size.
 */
class MxString : public MxCore {
public:
    MxString();

    MxString(const char* s);

    __declspec(dllexport) MxString(const MxString&);

    __declspec(dllexport) virtual ~MxString();

    __declspec(dllexport) const MxString& operator=(const char* s);

    bool operator==(const MxString& other) const;

    const char& operator[](int i) const;

    operator const char*() const;

private:
    char* string_;

    unsigned short length_;
};

#endif // MXSTRING_H
