#ifndef MXOMNI_H
#define MXOMNI_H

#include "mxcore.h"
#include "mxcriticalsection.h"
#include "mxnotificationmanager.h"
#include "mxsoundmanager.h"
#include "mxstreamer.h"
#include "mxstring.h"
#include "mxticklemanager.h"
#include "mxvariabletable.h"
#include "mxvideomanager.h"

class MxOmni : public MxCore {
protected:
    static void SetInstance(MxOmni* instance);

    static char cd_path_[];
    static char hd_path_[];
    static unsigned char sound_is_3d_;

    static MxOmni* instance_;

    // +8
    MxString unknown1_;

    // +14
    DWORD unknown2_;

    // +18
    DWORD unknown3_;

    // +1C
    DWORD unknown4_;

    // +20
    MxVariableTable* variable_table_;

    // +24
    MxTickleManager* tickle_manager_;

    // +28
    MxNotificationManager* notification_manager_;

    // +2C
    MxVideoManager* video_manager_;

    // +30
    MxSoundManager* sound_manager_;

    // +34
    DWORD unknown10_;

    // +38
    DWORD unknown11_;

    // +3C
    DWORD unknown12_;

    // +40
    MxStreamer* unknown13_;

    // +44
    DWORD unknown14_;

    // +48
    MxCriticalSection critical_section_;

    // +64
    unsigned char unknown15_;

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

    MxVariableTable* GetVariableTable();
    MxTickleManager* GetTickleManager();

};

__declspec(dllexport) void SetOmniUserMessage(void(const char *, int));

__declspec(dllexport) MxVariableTable* VariableTable();

__declspec(dllexport) MxTickleManager* TickleManager();

#endif // MXOMNI_H
