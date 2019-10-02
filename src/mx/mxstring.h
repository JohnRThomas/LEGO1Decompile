#ifndef MXSTRING_H
#define MXSTRING_H

#include "mxcore.h"

// This class is 0xC bytes in size
class MxString : public MxCore {
public:
    MxString();

    MxString(const char* s);

    __declspec(dllexport) MxString(const MxString&);

    __declspec(dllexport) virtual ~MxString();

    __declspec(dllexport) const MxString& operator=(const char* s);

    bool operator==(const MxString& other) const;

private:
    char* string_;
};

#endif // MXSTRING_H
