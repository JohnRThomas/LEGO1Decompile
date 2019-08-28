class MxOmni {
public:
    MxOmni();

    static MxOmni* GetInstance();
    static void DestroyInstance();

    static const char *GetHD();
    static void SetHD(const char *);

    static const char *GetCD();
    static void SetCD(const char *);

    static unsigned char IsSound3D();
};

void SetOmniUserMessage(void(func*)(const char *, int));
