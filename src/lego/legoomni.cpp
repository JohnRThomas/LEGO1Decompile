#include "legoomni.h"

#include "custom/debug.h"
#include "legoobjectfactory.h"
#include "legoscripts.h"

void sub_1001A700()
{
  STUB;
}

void sub_1003EF40(int punk1)
{
  STUB;
}

LegoOmni::LegoOmni()
{
  PERFECT;

  Init();
}

LegoOmni::~LegoOmni()
{
  STUB;
}

void LegoOmni::CreateInstance()
{
  PERFECT;

  DestroyInstance();
  SetInstance(new LegoOmni());
}

LegoOmni* LegoOmni::GetInstance()
{
  PERFECT;

  return static_cast<LegoOmni*>(MxOmni::GetInstance());
}

void LegoOmni::RemoveWorld(const MxAtomId &, long)
{
  STUB;
}

int LegoOmni::GetCurrPathInfo(LegoPathBoundary**, int&)
{
  STUB;

  return 0;
}

void LegoOmni::CreateBackgroundAudio()
{
  STUB;
}

MxResult LegoOmni::sub_1005A5F0()
{
  STUB;

  return SUCCESS;
}

LegoOmni* Lego()
{
  PERFECT;

  return LegoOmni::GetInstance();
}

void LegoOmni::Init()
{
  PERFECT;

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
  STUB;
}

MxResult LegoOmni::Create(MxOmniCreateParam& param)
{
  IMPERFECT;

  MxResult result = FAILURE;

  AUTOLOCK(&critical_section_);

  // Prevent MxOmni::Create() from creating objects that we create later
  param.flags_.flags1() &= ~MxOmniCreateFlags::CreateObjectFactory;
  param.flags_.flags1() &= ~MxOmniCreateFlags::CreateVideoManager;
  param.flags_.flags1() &= ~MxOmniCreateFlags::CreateSoundManager;
  param.flags_.flags1() &= ~MxOmniCreateFlags::CreateTickleManager;

  if (!(tickle_manager_ = new MxTickleManager(TRUE))) {
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

LegoInputManager* InputManager()
{
  PERFECT;

  return LegoOmni::GetInstance()->GetInputManager();
}

LegoSoundManager *SoundManager()
{
  PERFECT;

  return static_cast<LegoSoundManager*>(LegoOmni::GetInstance()->GetSoundManager());
}

LegoVideoManager* VideoManager()
{
  PERFECT;

  return (LegoVideoManager*) LegoOmni::GetInstance()->GetVideoManager();
}

MxBackgroundAudioManager* BackgroundAudioManager() {
  STUB;

  return NULL;
}

MxTransitionManager* TransitionManager()
{
  STUB;

  return NULL;
}

LegoUnknownManager5::LegoUnknownManager5()
{
  STUB;
}

LegoUnknownManager6::LegoUnknownManager6()
{
  STUB;
}

LegoUnknownManager7::LegoUnknownManager7()
{
  STUB;
}

LegoGameState *GameState()
{
  PERFECT;

  return LegoOmni::GetInstance()->GetGameState();
}
