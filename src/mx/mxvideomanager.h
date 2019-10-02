#ifndef MXVIDEOMANAGER_H
#define MXVIDEOMANAGER_H

#include "mxcore.h"
#include "mxpalette.h"
#include "mxrect32.h"

class MxVideoManager : public MxCore {
public:
    MxVideoManager();

    virtual ~MxVideoManager();

    void InvalidateRect(MxRect32&);

    virtual long RealizePalette(MxPalette*);
};

#endif // MXVIDEOMANAGER_H
