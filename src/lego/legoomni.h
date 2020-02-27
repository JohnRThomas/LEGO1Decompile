#ifndef LEGOOMNI_H
#define LEGOOMNI_H

#include "mx/mxatomid.h"

#include "legogamestate.h"
#include "legoinputmanager.h"
#include "legopathboundary.h"
#include "legosoundmanager.h"
#include "legovideomanager.h"
#include "mx/mxbackgroundaudiomanager.h"
#include "mx/mxdsaction.h"
#include "mx/mxresult.h"
#include "mx/mxomni.h"
#include "mx/mxomnicreateparam.h"
#include "mx/mxtransitionmanager.h"
#include "unknown/legounknownmanager2.h"
#include "unknown/legounknownmanager3.h"
#include "unknown/legounknownmanager4.h"
#include "unknown/legounknownmanager8.h"

/**
 * @brief The LegoUnknownManager5 class
 *
 * Some other unknown manager.
 *
 * 0x2C bytes in size.
 * Accessible at LegoOmni+90
 * Alloc'd at ****3500
 */
class LegoUnknownManager5 {
public:
  LegoUnknownManager5();

private:
  char unk_[0x2C];
};

/**
 * @brief The LegoUnknownManager6 class
 *
 * Some other unknown manager.
 *
 * 0x500 bytes in size.
 * Accessible at LegoOmni+94
 * Alloc'd at 009F1060
 */
class LegoUnknownManager6 {
public:
  LegoUnknownManager6();

private:
  char unk_[0x500];
};

/**
 * @brief The LegoUnknownManager7 class
 *
 * Some other unknown manager.
 *
 * 0x30 bytes in size.
 * Accessible at LegoOmni+98
 * Alloc'd at ****33E0
 */
class LegoUnknownManager7 {
public:
  LegoUnknownManager7();

private:
  char unk_[0x30];
};

/**
 * @brief The LegoOmni class
 *
 * The central game controller. Its members are largely "subcontrollers" handling different aspects of the game.
 *
 * It is 0x140 bytes in size. Allocated at ****3EB0.
 */
class LegoOmni : public MxOmni {
protected:
  int unknown68_; // [esi+68]
  LegoUnknownManager2* unknown6C_; // [esi+6C]
  LegoInputManager* input_manager_; // [esi+70]
  LegoUnknownManager3* unknown74_; // [esi+74]
  LegoUnknownManager8* unknown78_; // [esi+78]
  int unknown7C_; // [esi+7C]
  unsigned char unknown80_; // [esi+80]
  int unknown84_; // [esi+84]
  int unknown88_; // [esi+88]
  LegoUnknownManager4* unknown8C_; // [esi+8C]
  LegoUnknownManager5* unknown90_; // [esi+90]
  LegoUnknownManager6* unknown94_; // [esi+94]
  LegoUnknownManager7* unknown98_; // [esi+98]
  LegoGameState* game_state_; // [esi+9C]

  MxDSAction action_; // [esi+A0]

  MxBackgroundAudioManager* background_audio_manager_; // [esi+134]
  MxTransitionManager* transition_manager_; // [esi+138]
  unsigned char unknown13C_; // [esi+13C]

  LegoOmni();
  virtual ~LegoOmni();
  virtual void Init();

public:
  virtual void Destroy();
  virtual MxResult Create(MxOmniCreateParam &param);

  static void CreateInstance();
  static LegoOmni* GetInstance();

  void RemoveWorld(const MxAtomId&, long);

  static int GetCurrPathInfo(LegoPathBoundary**, int&);

  void CreateBackgroundAudio();

  LegoInputManager* GetInputManager();

  LegoVideoManager* GetVideoManager();

private:
  MxResult sub_1005A5F0();

};

LegoOmni* Lego();

LegoInputManager* InputManager();

LegoSoundManager* SoundManager();

LegoVideoManager* VideoManager();

MxBackgroundAudioManager* BackgroundAudioManager();

MxTransitionManager* TransitionManager();

#endif // LEGOOMNI_H
