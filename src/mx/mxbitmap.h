#ifndef MXBITMAP_H
#define MXBITMAP_H

#include "mxpalette.h"

class MxBitmap {
public:
    __declspec(dllexport) MxBitmap();
    __declspec(dllexport) virtual ~MxBitmap();

    __declspec(dllexport) long Read(const char *);
    __declspec(dllexport) MxPalette* CreatePalette();
};

#endif // MXBITMAP_H
