class MxDirectDraw {
public:
    __declspec(dllexport) MxDirectDraw();

    __declspec(dllexport) static int GetPrimaryBitDepth();

    __declspec(dllexport) int Pause(int);
    __declspec(dllexport) int FlipToGDISurface();
};
