#include "mxcriticalsection.h"

#include "custom/debug.h"

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
  if (mutex_ != NULL) {
    if (WaitForSingleObject(mutex_, 5000) == WAIT_FAILED) {
      FILE* f = _wfopen(L"C:\\DEADLOCK.TXT", L"a");

      if (f) {
        fprintf(f, "mutex timeout occurred!\n");
        fclose(f);
      }

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
