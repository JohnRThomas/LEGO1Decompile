#ifndef MXOMNI_H
#define MXOMNI_H

#include "mxatomtable.h"
#include "mxcore.h"
#include "mxeventmanager.h"
#include "mxomnicreateparam.h"
#include "mxcriticalsection.h"
#include "mxmidipresenter.h"
#include "mxmusicmanager.h"
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
  MxMIDIPresenter* midi_presenter_;

  // +38
  MxUnknownManager4* unknown38_;

  // +3C
  MxTimer* timer_;

  // +40
  MxStreamer* streamer_;

  // +44
  MxAtomTable* atom_manager_;

  // +48
  MxCriticalSection critical_section_;

  // +64
  unsigned char unknown64_;

  MxOmni();
  virtual ~MxOmni();

  virtual void Init();

  virtual void vtableC();

  virtual void vtable10();

  // vtable14
  virtual void Destroy();

  // vtable18
  virtual MxResult Create(MxOmniCreateParam& param);

  // vtable 1C
  virtual void sub_10058C30();

public:
  static MxOmni* GetInstance();
  static void DestroyInstance();

  static const char *GetHD();
  static void SetHD(const char *);

  static const char *GetCD();
  static void SetCD(const char *);

  static unsigned char IsSound3D();
  static void SetSound3D(unsigned char);

  MxVariableTable* GetVariableTable();
  MxTickleManager* GetTickleManager();
  MxSoundManager* GetSoundManager();
  MxAtomTable* GetAtomManager();
  MxNotificationManager* GetNotificationManager();
  MxTimer* GetTimer();

};

void SetOmniUserMessage(void (__cdecl*)(const char*, int));

MxVariableTable* VariableTable();

MxTickleManager* TickleManager();

MxSoundManager* MSoundManager();

MxTimer* Timer();

MxNotificationManager* NotificationManager();

MxAtomTable* AtomManager();

MxEventManager* EventManager();

MxMusicManager* MusicManager();

#endif // MXOMNI_H
