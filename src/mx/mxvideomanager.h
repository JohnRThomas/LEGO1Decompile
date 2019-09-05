#ifndef MXVIDEOMANAGER_H
#define MXVIDEOMANAGER_H

class MxVideoManager {
public:
    MxVideoManager();

    void InvalidateRect(MxRect32&);

    virtual long RealizePalette(MxPalette*);
};

#endif // MXVIDEOMANAGER_H
