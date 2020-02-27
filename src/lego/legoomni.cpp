#include "legoomni.h"

#include "custom/debug.h"
#include "legoobjectfactory.h"
#include "legoscripts.h"

void sub_1001A700()
{
  ALERT("void sub_1001A700()", "Stub");
}

void sub_1003EF40(int punk1)
{
  ALERT("void sub_1003EF40()", "Stub");
}

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

MxResult LegoOmni::sub_1005A5F0()
{
  ALERT("LegoOmni::sub_1005A5F0()", "Stub");

  return SUCCESS;
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

MxResult LegoOmni::Create(MxOmniCreateParam& param)
{
  // FIXME: Imperfect

  MxResult result = FAILURE;

  AUTOLOCK(&critical_section_);

  // Prevent MxOmni::Create() from creating objects that we create later
  param.flags_.flags1() &= ~MxOmniCreateFlags::CreateObjectFactory;
  param.flags_.flags1() &= ~MxOmniCreateFlags::CreateVideoManager;
  param.flags_.flags1() &= ~MxOmniCreateFlags::CreateSoundManager;
  param.flags_.flags1() &= ~MxOmniCreateFlags::CreateTickleManager;

  if (!(tickle_manager_ = new MxTickleManager(0xFF))) {
    delete tickle_manager_;
    goto done;
  }

  if (MxOmni::Create(param) != SUCCESS) {
    goto done;
  }

  if (!(object_factory_ = new LegoObjectFactory())) {
    goto done;
  }

  if (!(sound_manager_ = new LegoSoundManager())
      || ((LegoSoundManager*) sound_manager_)->sub_100AE8B0(10, 0) != SUCCESS) {
    delete sound_manager_;
    sound_manager_ = NULL;
    return FAILURE;
  }

  if (!(video_manager_ = new LegoVideoManager())
      || video_manager_->Create(param.video_params_) != SUCCESS) {
    delete video_manager_;
    video_manager_ = NULL;
  }

  if (!(input_manager_ = new LegoInputManager())
      || input_manager_->Create(param.window_handle_) != SUCCESS) {
    delete input_manager_;
    input_manager_ = NULL;
    return FAILURE;
  }

  unknown6C_ = new LegoUnknownManager2();

  unknown74_ = new LegoUnknownManager3();
  unknown74_->sub_10046C10();

  unknown8C_ = new LegoUnknownManager4();

  unknown90_ = new LegoUnknownManager5();

  unknown94_ = new LegoUnknownManager6();

  unknown98_ = new LegoUnknownManager7();

  game_state_ = new LegoGameState();

  unknown78_ = new LegoUnknownManager8();

  if (unknown6C_ == NULL) {
    return FAILURE;
  }

  if (unknown74_ == NULL) {
    return FAILURE;
  }

  if (unknown8C_ == NULL) {
    return FAILURE;
  }

  if (unknown90_ == NULL) {
    return FAILURE;
  }

  if (unknown94_ == NULL) {
    return FAILURE;
  }

  if (unknown98_ == NULL) {
    return FAILURE;
  }

  variable_table_->SetVariable(new MxVariable("VISIBILITY"));
  variable_table_->SetVariable(new MxVariable("CAMERA_LOCATION"));
  variable_table_->SetVariable(new MxVariable("CURSOR"));
  variable_table_->SetVariable(new MxVariable("WHO_AM_I"));

  LegoScripts::sub_100528E0();

  sub_1001A700();

  if (sub_1005A5F0() != SUCCESS) {
    return FAILURE;
  }

  if ((background_audio_manager_ = new MxBackgroundAudioManager())) {
    return FAILURE;
  }

  if ((transition_manager_ = new MxTransitionManager())) {
    return FAILURE;
  }

  if (transition_manager_->vtable14() != SUCCESS) {
    return FAILURE;
  }

  notification_manager_->sub_100ACD20(this);

  sub_1003EF40(1);

  game_state_->sub_1003CEA0(0);

  result = SUCCESS;

done:
  return result;
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

MxBackgroundAudioManager* BackgroundAudioManager() {
  ALERT("MxBackgroundAudioManager* BackgroundAudioManager()", "Stub");

  return NULL;
}

MxTransitionManager* TransitionManager()
{
  ALERT("MxTransitionManager* TransitionManager()", "Stub");

  return NULL;
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
