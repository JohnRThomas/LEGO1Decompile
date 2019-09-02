class MxOmni {
public:
    __declspec(dllexport) MxOmni();

    __declspec(dllexport) static MxOmni* GetInstance();
    __declspec(dllexport) static void DestroyInstance();

    __declspec(dllexport) static const char *GetHD();
    __declspec(dllexport) static void SetHD(const char *);

    __declspec(dllexport) static const char *GetCD();
    __declspec(dllexport) static void SetCD(const char *);

    __declspec(dllexport) static unsigned char IsSound3D();
    __declspec(dllexport) static void SetSound3D(unsigned char);

protected:
    static void SetInstance(MxOmni* instance);

private:
    static char cd_path_[];
    static char hd_path_[];
    static unsigned char sound_is_3d_;

    static MxOmni* instance_;
};

__declspec(dllexport) void SetOmniUserMessage(void(const char *, int));
