#ifndef DEBUG_H
#define DEBUG_H

#include <STDIO.H>
#include <WINDOWS.H>

void ALERT(const char* source, const char* str, ...);

/**
 * Use exactly like printf(), displays console output for printing simple debug info
 */
#define DEBUG(args)   printf("[%s] ", __FUNCTION__);printf(args);fflush(stdout);

#endif // DEBUG_H
