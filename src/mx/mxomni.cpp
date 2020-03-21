#include "mxomni.h"

#include <STRING.H>

#include "custom/debug.h"

// FIXME: Don't actually know yet how large these buffers are
const int kMaximumPathLength = 255;

char MxOmni::cd_path_[kMaximumPathLength];
char MxOmni::hd_path_[kMaximumPathLength];
unsigned char MxOmni::sound_is_3d_ = 0;

MxOmni* MxOmni::instance_ = NULL;

MxOmni::MxOmni()
{
  PERFECT;

  Init();
}

MxOmni::~MxOmni()
{
  STUB;
}

void MxOmni::Init()
{
  PERFECT;

  window_handle_ = NULL;
  object_factory_ = NULL;
  variable_table_ = NULL;
  tickle_manager_ = NULL;
  notification_manager_ = NULL;
  video_manager_ = NULL;
  sound_manager_ = NULL;
  midi_presenter_ = NULL;
  unknown38_ = NULL;
  timer_ = NULL;
  streamer_ = NULL;
  atom_table_ = NULL;
  unknown64_ = 0;
}

void MxOmni::vtableC()
{
  STUB;
}

void MxOmni::vtable10()
{
  STUB;
}

void MxOmni::Destroy()
{
  STUB;
}

MxResult MxOmni::Create(MxOmniCreateParam& param)
{
  IMPERFECT;

  MxResult result = FAILURE;

  if (!(atom_table_ = new MxAtomTable(0, 0))) {
    goto done;
  }

  unknown8_ = param.unknown1_;

  window_handle_ = param.window_handle_;

  if (param.flags_.flags1() & MxOmniCreateFlags::CreateObjectFactory) {
    if (!(object_factory_ = new MxObjectFactory())) {
      goto done;
    }
  }

  if (param.flags_.flags1() & MxOmniCreateFlags::CreateVariableTable) {
    if (!(variable_table_ = new MxVariableTable())) {
      goto done;
    }
  }

  if (param.flags_.flags2() & MxOmniCreateFlags::CreateTimer) {
    if (!(timer_ = new MxTimer())) {
      goto done;
    }
  }

  if (param.flags_.flags1() & MxOmniCreateFlags::CreateTickleManager) {
    if (!(tickle_manager_ = new MxTickleManager(FALSE))) {
      goto done;
    }
  }

  if (param.flags_.flags1() & MxOmniCreateFlags::CreateNotificationManager) {
    if (!(notification_manager_ = new MxNotificationManager())) {
      goto done;
    } else {
      if (notification_manager_->sub_100AC600(0x64, 0) != SUCCESS) {
        goto done;
      }
    }
  }

  if (param.flags_.flags2() & MxOmniCreateFlags::CreateStreamer) {
    if (!(streamer_ = new MxStreamer()) || !streamer_->sub_100B9190()) {
      goto done;
    }
  }

  if (param.flags_.flags1() & MxOmniCreateFlags::CreateVideoManager) {
    if ((video_manager_ = new MxVideoManager())) {
      if (video_manager_->Create(param.video_params_) != SUCCESS) {
        delete video_manager_;
        video_manager_ = NULL;
      }
    }
  }

  if (param.flags_.flags1() & MxOmniCreateFlags::CreateSoundManager) {
    if ((sound_manager_ = new MxSoundManager())) {
      if (sound_manager_->sub_100AE8B0(0xA, 0) != SUCCESS) {
        delete sound_manager_;
        sound_manager_ = NULL;
      }
    }
  }

  if (param.flags_.flags1() & MxOmniCreateFlags::CreateMxUnknownManager3) {
    if ((midi_presenter_ = new MxMIDIPresenter())) {
      if (midi_presenter_->sub_100C0840(0x32, 0x0) != SUCCESS) {
        delete midi_presenter_;
        midi_presenter_ = NULL;
      }
    }
  }

  if (param.flags_.flags1() & MxOmniCreateFlags::CreateMxUnknownManager4) {
    if ((unknown38_ = new MxUnknownManager4())) {
      if (unknown38_->sub_100C04A0(0x32, 0)) {
        delete unknown38_;
        unknown38_ = NULL;
      }
    }
  }

  result = SUCCESS;

done:
  if (result != SUCCESS) {
    sub_10058C30();
  }

  return result;
}

void MxOmni::sub_10058C30()
{
  // FIXME: This might actually be a member of LegoOmni overriding a member of MxOmni
  STUB;
}

MxOmni* MxOmni::GetInstance()
{
  PERFECT;
  return instance_;
}

void MxOmni::DestroyInstance()
{
  PERFECT;
  if (instance_ != 0) {
    delete instance_;
    instance_ = NULL;
  }
}

const char *MxOmni::GetHD()
{
  PERFECT;
  return hd_path_;
}

void MxOmni::SetHD(const char *hd)
{
  PERFECT;
  strcpy(hd_path_, hd);
}

const char *MxOmni::GetCD()
{
  PERFECT;
  return cd_path_;
}

void MxOmni::SetCD(const char *cd)
{
  PERFECT;
  strcpy(cd_path_, cd);
}

unsigned char MxOmni::IsSound3D()
{
  PERFECT;
  return sound_is_3d_;
}

void MxOmni::SetSound3D(unsigned char c)
{
  PERFECT;
  sound_is_3d_ = c;
}

void MxOmni::SetInstance(MxOmni* instance)
{
  PERFECT;
  instance_ = instance;
}

MxVariableTable *VariableTable()
{
  PERFECT;
  return MxOmni::GetInstance()->GetVariableTable();
}

MxTickleManager* TickleManager()
{
  PERFECT;
  return MxOmni::GetInstance()->GetTickleManager();
}

MxSoundManager *MSoundManager()
{
  PERFECT;
  return MxOmni::GetInstance()->GetSoundManager();
}

MxAtomTable *AtomTable()
{
  PERFECT;
  return MxOmni::GetInstance()->GetAtomTable();
}

MxNotificationManager *NotificationManager()
{
  PERFECT;
  return MxOmni::GetInstance()->GetNotificationManager();
}

MxTimer* Timer()
{
  PERFECT;
  return MxOmni::GetInstance()->GetTimer();
}

MxEventManager *EventManager()
{
  STUB;
  return NULL;
}

MxMusicManager *MusicManager()
{
  STUB;
  return NULL;
}

void SetOmniUserMessage(void (*)(const char *, int))
{
  STUB;
}
