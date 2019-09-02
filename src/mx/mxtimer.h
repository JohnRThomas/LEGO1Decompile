class MxTimer {
public:
    __declspec(dllexport) MxTimer();

    __declspec(dllexport) long GetRealTime();

private:
    int unknown1_;

    int unknown2_;
    
    int start_time_;
};

__declspec(dllexport) MxTimer* Timer();
