#include "mxcriticalsection.h"

#include "custom/debug.h"

BOOL MxCriticalSection::do_mutex_ = FALSE;

MxCriticalSection::MxCriticalSection()
{
  if (do_mutex_)
  {
    mutex_ = CreateMutexA(NULL, 0, NULL);
  } else {
    InitializeCriticalSection(&critical_section_);

    mutex_ = NULL;
  }
}

MxCriticalSection::~MxCriticalSection()
{
  if (mutex_ != NULL) {
    CloseHandle(mutex_);
  } else {
    DeleteCriticalSection(&critical_section_);
  }
}

void MxCriticalSection::Lock()
{
  if (mutex_ != NULL) {
    // 1388 is accurate to the ASM code
    if (WaitForSingleObject(mutex_, 1388) == WAIT_FAILED) {

      // FIXME: This code will never be run because no code ever runs SetDoMutex() to enable mutexes - the game
      //        always uses CRITICALSECTIONs. It may be decompiled for completeness sake but for now is an
      //        extremely low priority and the end result is the same: abort().
      ALERT("Mutex failure is a stub");
      abort();

    }
  } else {
    EnterCriticalSection(&critical_section_);
  }
}

void MxCriticalSection::Unlock()
{
  if (mutex_ != NULL) {
    ReleaseMutex(mutex_);
  } else {
    LeaveCriticalSection(&critical_section_);
  }
}

void MxCriticalSection::SetDoMutex()
{
  do_mutex_ = TRUE;
}
