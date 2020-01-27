#ifndef MXDIRECTDRAW_H
#define MXDIRECTDRAW_H

class MxDirectDraw {
public:
    MxDirectDraw();

    static int GetPrimaryBitDepth();

    int Pause(int);
    int FlipToGDISurface();
};

#endif // MXDIRECTDRAW_H
