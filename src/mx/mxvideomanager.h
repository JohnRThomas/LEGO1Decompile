#ifndef MXVIDEOMANAGER_H
#define MXVIDEOMANAGER_H

#include "mxpalette.h"
#include "mxrect32.h"

class MxVideoManager {
public:
    MxVideoManager();

    void InvalidateRect(MxRect32&);

    virtual long RealizePalette(MxPalette*);
};

#endif // MXVIDEOMANAGER_H
