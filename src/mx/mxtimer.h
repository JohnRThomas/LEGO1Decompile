class MxTimer {
public:
    __declspec(dllexport) MxTimer();

    __declspec(dllexport) long GetRealTime();
};

__declspec(dllexport) MxTimer* Timer();
