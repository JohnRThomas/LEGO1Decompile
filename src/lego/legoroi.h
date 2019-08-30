class LegoROI {
public:
    __declspec(dllexport) LegoROI();

    __declspec(dllexport) static void configureLegoROI(int);

    __declspec(dllexport) void SetDisplayBB(int);
};

__declspec(dllexport) LegoROI* PickROI(long, long);
