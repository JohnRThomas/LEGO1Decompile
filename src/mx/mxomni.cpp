#include "mxomni.h"

#include <string.h>

#include "custom/debug.h"

// Arbitrary maximum path length
const int kMaximumPathLength = 255;

char MxOmni::cd_path_[kMaximumPathLength];
char MxOmni::hd_path_[kMaximumPathLength];
unsigned char MxOmni::sound_is_3d_ = 0;

MxOmni* MxOmni::instance_ = nullptr;

MxOmni::MxOmni()
{
    Init();
}

MxOmni::~MxOmni()
{
    ALERT("Stub")
}

void MxOmni::Init()
{
    window_handle_ = nullptr;
    object_factory_ = nullptr;
    variable_table_ = nullptr;
    tickle_manager_ = nullptr;
    notification_manager_ = nullptr;
    video_manager_ = nullptr;
    sound_manager_ = nullptr;
    unknown34_ = nullptr;
    unknown38_ = nullptr;
    timer_ = nullptr;
    streamer_ = nullptr;
    atom_manager_ = nullptr;
    unknown64_ = 0;
}

unsigned int MxOmni::Create(MxOmniCreateParam& param)
{
    ALERT("Partial Stub")

    atom_manager_ = new MxAtomManager();

    unknown8_ = param.unknown1();

    window_handle_ = param.window_handle();

    if (param.flags() & MxOmniCreateFlags::CreateObjectFactory) {
        object_factory_ = new MxObjectFactory();
    }

    if (param.flags() & MxOmniCreateFlags::CreateVariableTable) {
        variable_table_ = new MxVariableTable();
    }

    if (param.flags() & MxOmniCreateFlags::CreateTimer) {
        timer_ = new MxTimer();
    }

    if (param.flags() & MxOmniCreateFlags::CreateTickleManager) {
        tickle_manager_ = new MxTickleManager(0);
    }

    if (param.flags() & MxOmniCreateFlags::CreateNotificationManager) {
        notification_manager_ = new MxNotificationManager();

        // call 100AC600(64, 0) - definitely virtual function
    }

    if (param.flags() & MxOmniCreateFlags::CreateStreamer) {
        streamer_ = new MxStreamer();

        // call function on streamer_
    }

    if (param.flags() & MxOmniCreateFlags::CreateVideoManager) {
        video_manager_ = new MxVideoManager();

        // call function on video_manager_
    }

    if (param.flags() & MxOmniCreateFlags::CreateSoundManager) {
        sound_manager_ = new MxSoundManager();

        // function on sound manager
    }

    if (param.flags() & MxOmniCreateFlags::CreateMxUnknownManager3) {
        unknown34_ = new MxMIDIPresenter();

        // function on unknown34_
    }

    if (param.flags() & MxOmniCreateFlags::CreateMxUnknownManager4) {
        unknown38_ = new MxUnknownManager4();

        // function on unknown38_(32, 0)
    }

    return 0;
}

MxOmni* MxOmni::GetInstance()
{
    return instance_;
}

void MxOmni::DestroyInstance()
{
    delete instance_;
    instance_ = nullptr;
}

const char *MxOmni::GetHD()
{
    return hd_path_;
}

void MxOmni::SetHD(const char *hd)
{
    strcpy_s(hd_path_, kMaximumPathLength, hd);
}

const char *MxOmni::GetCD()
{
    return cd_path_;
}

void MxOmni::SetCD(const char *cd)
{
    strcpy_s(cd_path_, kMaximumPathLength, cd);
}

unsigned char MxOmni::IsSound3D()
{
    return sound_is_3d_;
}

void MxOmni::SetSound3D(unsigned char c)
{
    sound_is_3d_ = c;
}

MxVariableTable *MxOmni::GetVariableTable()
{
    return variable_table_;
}

MxTickleManager *MxOmni::GetTickleManager()
{
    return tickle_manager_;
}

MxSoundManager* MxOmni::GetSoundManager()
{
    return sound_manager_;
}

MxAtomManager *MxOmni::GetAtomManager()
{
    return atom_manager_;
}

MxNotificationManager *MxOmni::GetNotificationManager()
{
    return notification_manager_;
}

MxTimer *MxOmni::GetTimer()
{
    return timer_;
}

void MxOmni::SetInstance(MxOmni* instance)
{
    instance_ = instance;
}

MxVariableTable *VariableTable()
{
    return MxOmni::GetInstance()->GetVariableTable();
}

MxTickleManager* TickleManager()
{
    return MxOmni::GetInstance()->GetTickleManager();
}

MxSoundManager *MSoundManager()
{
    return MxOmni::GetInstance()->GetSoundManager();
}

MxAtomManager *AtomManager()
{
    return MxOmni::GetInstance()->GetAtomManager();
}

MxNotificationManager *NotificationManager()
{
    return MxOmni::GetInstance()->GetNotificationManager();
}

MxTimer* Timer()
{
    return MxOmni::GetInstance()->GetTimer();
}
