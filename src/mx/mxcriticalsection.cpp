#include "mxcriticalsection.h"

#include "custom/debug.h"

void sub_1008EF30(int unk0) {
  // FIXME: Imperfect
}

void sub_1008FE70(const char* unk0, const char* unk1, int unk2, int unk3) {
  // FIXME: Imperfect
}

int sub_10090080() {
  // FIXME: Imperfect

  //sub_1008EE30();

  return 0;
}

int sub_1008BFB0(const char* unk0, const char* unk1, int unk2)
{
  // FIXME: Imperfect

  int esi = sub_10090080();

  if (!esi) {
    return NULL;
  }

  sub_1008FE70(unk0, unk1, unk2, esi);

  sub_1008EF30(esi);

  return esi;
}

int sub_1008BFF0(const char* unk0, const char* unk1)
{
  // FIXME: Imperfect
  return sub_1008BFB0(unk0, unk1, 0x40);
}

BOOL MxCriticalSection::do_mutex_ = FALSE;

MxCriticalSection::MxCriticalSection()
{
  if (do_mutex_) {
    mutex_ = CreateMutexA(NULL, 0, NULL);
  } else {
    InitializeCriticalSection(&critical_section_);

    mutex_ = NULL;
  }
}

MxCriticalSection::~MxCriticalSection()
{
  ALERT("MxCriticalSection::~MxCriticalSection()", "Stub");
  if (mutex_ != NULL) {
    CloseHandle(mutex_);
  } else {
    DeleteCriticalSection(&critical_section_);
  }
}

void MxCriticalSection::Lock()
{
  // FIXME: Imperfect

  if (mutex_ != NULL) {
    if (WaitForSingleObject(mutex_, 5000) == WAIT_FAILED) {
      if (sub_1008BFF0("C:\\DEADLOCK.TXT", "a")) {

      }
    }
  } else {
    EnterCriticalSection(&critical_section_);
  }
}

void MxCriticalSection::Unlock()
{
  ALERT("void MxCriticalSection::Unlock()", "Stub");
  if (mutex_ != NULL) {
    ReleaseMutex(mutex_);
  } else {
    LeaveCriticalSection(&critical_section_);
  }
}

void MxCriticalSection::SetDoMutex()
{
  ALERT("void MxCriticalSection::SetDoMutex()", "Stub");
  do_mutex_ = TRUE;
}

MxCriticalSectionAutoLock::MxCriticalSectionAutoLock(MxCriticalSection* critical_section) :
  critical_section_(critical_section)
{
  if (critical_section_) {
    critical_section_->Lock();
  }
}

MxCriticalSectionAutoLock::~MxCriticalSectionAutoLock()
{
  if (critical_section_) {
    critical_section_->Unlock();
  }
}
