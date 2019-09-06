#ifndef MXOMNI_H
#define MXOMNI_H

#include "mxcore.h"
#include "mxcriticalsection.h"
#include "mxstring.h"

class MxOmniUnknownStruct1 : public MxCore {
public:
    MxOmniUnknownStruct1();

    ~MxOmniUnknownStruct1();

    MxString string_;
private:

};

class MxOmni : public MxCore {
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

    MxOmniUnknownStruct1 unknown1_;

    DWORD unknown2_[13];

    MxCriticalSection critical_section_;

    unsigned char unknown3_;

};

__declspec(dllexport) void SetOmniUserMessage(void(const char *, int));

#endif // MXOMNI_H
