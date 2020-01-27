#ifndef MXOMNI_H
#define MXOMNI_H

#include "mxatommanager.h"
#include "mxcore.h"
#include "mxomnicreateparam.h"
#include "mxcriticalsection.h"
#include "mxmidipresenter.h"
#include "mxnotificationmanager.h"
#include "mxobjectfactory.h"
#include "mxsoundmanager.h"
#include "mxstreamer.h"
#include "mxstring.h"
#include "mxticklemanager.h"
#include "mxtimer.h"
#include "mxvariabletable.h"
#include "mxvideomanager.h"
#include "unknown/mxunknownmanager4.h"

/**
 * @brief Main game controller (base)
 *
 * This class is 0x68 bytes in size.
 */
class MxOmni : public MxCore {
protected:
    static void SetInstance(MxOmni* instance);

    static char cd_path_[];
    static char hd_path_[];
    static unsigned char sound_is_3d_;

    static MxOmni* instance_;

    // +8
    MxString unknown8_;

    // +18
    struct HWND__* window_handle_;

    // +1C
    MxObjectFactory* object_factory_;

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
    MxMIDIPresenter* unknown34_;

    // +38
    MxUnknownManager4* unknown38_;

    // +3C
    MxTimer* timer_;

    // +40
    MxStreamer* streamer_;

    // +44
    MxAtomManager* atom_manager_;

    // +48
    MxCriticalSection critical_section_;

    // +64
    unsigned char unknown64_;

    __declspec(dllexport) MxOmni();
    virtual ~MxOmni();

    virtual void Init();

    unsigned int Create(MxOmniCreateParam& param);
public:
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
    MxSoundManager* GetSoundManager();
    MxAtomManager* GetAtomManager();
    MxNotificationManager* GetNotificationManager();
    MxTimer* GetTimer();

};

__declspec(dllexport) void SetOmniUserMessage(void (__cdecl*)(const char*, int));

__declspec(dllexport) MxVariableTable* VariableTable();

__declspec(dllexport) MxTickleManager* TickleManager();

__declspec(dllexport) MxSoundManager* MSoundManager();

__declspec(dllexport) MxTimer* Timer();

MxNotificationManager* NotificationManager();

MxAtomManager* AtomManager();

#endif // MXOMNI_H
