#ifndef MXBITMAP_H
#define MXBITMAP_H

#include "mxpalette.h"

class MxBitmap {
public:
    MxBitmap();
    virtual ~MxBitmap();

    virtual long Read(const char *);
    virtual MxPalette* CreatePalette();
};

#endif // MXBITMAP_H
