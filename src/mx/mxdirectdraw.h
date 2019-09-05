#ifndef MXDIRECTDRAW_H
#define MXDIRECTDRAW_H

class MxDirectDraw {
public:
    __declspec(dllexport) MxDirectDraw();

    __declspec(dllexport) static int GetPrimaryBitDepth();

    __declspec(dllexport) int Pause(int);
    __declspec(dllexport) int FlipToGDISurface();
};

#endif // MXDIRECTDRAW_H
