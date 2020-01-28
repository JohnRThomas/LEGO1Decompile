#include "legoomni.h"

#include "custom/debug.h"
#include "legoobjectfactory.h"
#include "legoscripts.h"

LegoOmni::LegoOmni()
{
  Init();
}

LegoOmni::~LegoOmni()
{
  ALERT("LegoOmni::~LegoOmni", "Stub");
}

void LegoOmni::CreateInstance()
{
  DestroyInstance();
  SetInstance(new LegoOmni());
}

LegoOmni* LegoOmni::GetInstance()
{
  return static_cast<LegoOmni*>(MxOmni::GetInstance());
}

void LegoOmni::RemoveWorld(const MxAtomId &, long)
{
  ALERT("LegoOmni::RemoveWorld", "Stub");
}

int LegoOmni::GetCurrPathInfo(LegoPathBoundary**, int&)
{
  ALERT("LegoOmni::GetCurrPathInfo", "Stub");

  return 0;
}

void LegoOmni::CreateBackgroundAudio()
{
  ALERT("LegoOmni::CreateBackgroundAudio", "Stub");
}

LegoInputManager *LegoOmni::GetInputManager()
{
  ALERT("LegoOmni::GetInputManager", "Stub");

  return input_manager_;
}

LegoVideoManager *LegoOmni::GetVideoManager()
{
  ALERT("LegoOmni::GetVideoManager", "Stub");

  return static_cast<LegoVideoManager*>(video_manager_);
}

LegoOmni* Lego()
{
  return LegoOmni::GetInstance();
}

void LegoOmni::Init() {
  MxOmni::Init();

  unknown68_ = 0;
  input_manager_ = NULL;
  unknown6C_ = NULL;
  unknown74_ = NULL;
  unknown78_ = NULL;
  unknown7C_ = 0;
  unknown80_ = 0;
  unknown88_ = 0;
  unknown8C_ = NULL;
  unknown90_ = NULL;
  game_state_ = NULL;
  unknown94_ = NULL;
  unknown98_ = NULL;
  background_audio_manager_ = NULL;
  transition_manager_ = NULL;
  unknown13C_ = 1;
}

void LegoOmni::Destroy()
{
  ALERT("LegoOmni::Destroy", "Stub");
}

int LegoOmni::Create(MxOmniCreateParam& param)
{
  ALERT("LegoOmni::Create", "Partial Stub");

  critical_section_.Lock();

  // Prevent MxOmni::Create() from creating objects that we create later
  param.flags() &= ~MxOmniCreateFlags::CreateObjectFactory;
  param.flags() &= ~MxOmniCreateFlags::CreateVideoManager;
  param.flags() &= ~MxOmniCreateFlags::CreateSoundManager;
  param.flags() &= ~MxOmniCreateFlags::CreateTickleManager;

  tickle_manager_ = new MxTickleManager(0xFF);

  // Likely MxTickleManager::Create()

  MxOmni::Create(param);

  object_factory_ = new LegoObjectFactory();

  sound_manager_ = new LegoSoundManager();

  // Likely LegoSoundManager::Create()

  video_manager_ = new LegoVideoManager();

  // Likely LegoVideoManager::Create()

  input_manager_ = new LegoInputManager();

  // Likely LegoInputManager::Create()

  unknown6C_ = new LegoUnknownManager2();

  unknown74_ = new LegoUnknownManager3();
  unknown74_->SetUnknown4(0);

  // FIXME: This function likely doesn't belong to LegoUnknownManager3
  LegoUnknownManager3::sub_10046C10();

  unknown8C_ = new LegoUnknownManager4();

  unknown90_ = new LegoUnknownManager5();

  unknown94_ = new LegoUnknownManager6();

  unknown98_ = new LegoUnknownManager7();

  game_state_ = new LegoGameState();

  unknown78_ = new LegoUnknownManager8();

  variable_table_->SetVariable(new MxVariable("VISIBILITY", ""));
  variable_table_->SetVariable(new MxVariable("CAMERA_LOCATION", ""));
  variable_table_->SetVariable(new MxVariable("CURSOR", ""));
  variable_table_->SetVariable(new MxVariable("WHO_AM_I", ""));

  LegoScripts::Load();

  // Call 1001A700
  // Call 1005A5F0

  background_audio_manager_ = new MxBackgroundAudioManager();

  transition_manager_ = new MxTransitionManager();

  // Run some kind of virtual function on LegoUnknownManager9

  // Run some function on `notification_manager_`

  // call 0x1003EF40

  // Run function on LegoGameState

  critical_section_.Unlock();

  return 0;
}

void LegoOmni::unk_func03()
{
  ALERT("LegoOmni::unk_func03", "Stub");
}

void LegoOmni::unk_func04()
{
  ALERT("LegoOmni::unk_func04", "Stub");
}

LegoInputManager* InputManager()
{
  ALERT("InputManager", "Stub");

  return LegoOmni::GetInstance()->GetInputManager();
}

LegoSoundManager *SoundManager()
{
  ALERT("SoundManager", "Stub");

  return static_cast<LegoSoundManager*>(LegoOmni::GetInstance()->GetSoundManager());
}

LegoVideoManager* VideoManager()
{
  ALERT("VideoManager", "Stub");

  return LegoOmni::GetInstance()->GetVideoManager();
}

LegoUnknownManager5::LegoUnknownManager5()
{
  ALERT("LegoUnknownManager5", "Stub\n\nSize: %x", sizeof(LegoUnknownManager5));
}

LegoUnknownManager6::LegoUnknownManager6()
{
  ALERT("LegoUnknownManager6", "Stub\n\nSize: %x", sizeof(LegoUnknownManager6));
}

LegoUnknownManager7::LegoUnknownManager7()
{
  ALERT("LegoUnknownManager7", "Stub\n\nSize: %x", sizeof(LegoUnknownManager7));
}
