#ifndef MXCRITICALSECTION_H
#define MXCRITICALSECTION_H

#include <windows.h>

/**
 * @brief Functions as a thread synchronization module
 *
 * A wrapper for either a Windows CRITICALSECTION and mutex. Presumably the two were used in development, but in release
 * only CRITICALSECTION is ever used, never mutex. Mutex functionality is enabled by calling SetDoMutex(), but again
 * that function is never called throughout the game. Manually enabling mutexes causes no noticeable difference in-game,
 * however CRITICALSECTIONs are theoretically faster/lighter so this was presumably why they were used instead.
 *
 * This class is 0x1C bytes in size.
 */
class MxCriticalSection {
public:
  MxCriticalSection();
  ~MxCriticalSection();

  void Lock();

  void Unlock();

  static void SetDoMutex();

private:
  static BOOL do_mutex_;

  CRITICAL_SECTION critical_section_;

  HANDLE mutex_;
};

#endif // MXCRITICALSECTION_H
