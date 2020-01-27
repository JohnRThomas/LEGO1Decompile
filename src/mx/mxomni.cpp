#include "mxomni.h"

#include <STRING.H>

#include "custom/debug.h"

// Arbitrary maximum path length
const int kMaximumPathLength = 255;

char MxOmni::cd_path_[kMaximumPathLength];
char MxOmni::hd_path_[kMaximumPathLength];
unsigned char MxOmni::sound_is_3d_ = 0;

MxOmni* MxOmni::instance_ = NULL;

MxOmni::MxOmni()
{
  Init();
}

MxOmni::~MxOmni()
{
  ALERT("MxOmni::~MxOmni()", "Stub");
}

void MxOmni::Init()
{
  ALERT("void MxOmni::Init()", "Stub");
  window_handle_ = NULL;
  object_factory_ = NULL;
  variable_table_ = NULL;
  tickle_manager_ = NULL;
  notification_manager_ = NULL;
  video_manager_ = NULL;
  sound_manager_ = NULL;
  unknown34_ = NULL;
  unknown38_ = NULL;
  timer_ = NULL;
  streamer_ = NULL;
  atom_manager_ = NULL;
  unknown64_ = 0;
}

unsigned int MxOmni::Create(MxOmniCreateParam& param)
{
  ALERT("unsigned int MxOmni::Create(MxOmniCreateParam& param)", "Partial Stub");

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
  if (instance_ != 0) {
    delete instance_;
    instance_ = NULL;
  }
}

const char *MxOmni::GetHD()
{
  ALERT("const char *MxOmni::GetHD()", "Stub");
  return hd_path_;
}

void MxOmni::SetHD(const char *hd)
{
  ALERT("void MxOmni::SetHD(const char *hd)", "Stub");
  strcpy(hd_path_, hd);
}

const char *MxOmni::GetCD()
{
  ALERT("const char *MxOmni::GetCD()", "Stub");
  return cd_path_;
}

void MxOmni::SetCD(const char *cd)
{
  ALERT("void MxOmni::SetCD(const char *cd)", "Stub");
  strcpy(cd_path_, cd);
}

unsigned char MxOmni::IsSound3D()
{
  ALERT("unsigned char MxOmni::IsSound3D()", "Stub");
  return sound_is_3d_;
}

void MxOmni::SetSound3D(unsigned char c)
{
  ALERT("void MxOmni::SetSound3D(unsigned char c)", "Stub");
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
  ALERT("MxVariableTable *VariableTable()", "Stub");
  return MxOmni::GetInstance()->GetVariableTable();
}

MxTickleManager* TickleManager()
{
  ALERT("MxTickleManager* TickleManager()", "Stub");
  return MxOmni::GetInstance()->GetTickleManager();
}

MxSoundManager *MSoundManager()
{
  ALERT("MxSoundManager *MSoundManager()", "Stub");
  return MxOmni::GetInstance()->GetSoundManager();
}

MxAtomManager *AtomManager()
{
  ALERT("MxAtomManager *AtomManager()", "Stub");
  return MxOmni::GetInstance()->GetAtomManager();
}

MxNotificationManager *NotificationManager()
{
  ALERT("MxNotificationManager *NotificationManager()", "Stub");
  return MxOmni::GetInstance()->GetNotificationManager();
}

MxTimer* Timer()
{
  ALERT("MxTimer* Timer()", "Stub");
  return MxOmni::GetInstance()->GetTimer();
}

MxEventManager *EventManager()
{
  ALERT("MxEventManager *EventManager()", "Stub");
  return NULL;
}

MxMusicManager *MusicManager()
{
  ALERT("MxMusicManaer *MusicManager()", "Stub");
  return NULL;
}

void SetOmniUserMessage(void (*)(const char *, int))
{
  ALERT("void SetOmniUserMessage(void (*)(const char *, int))", "Stub");
}
