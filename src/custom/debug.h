#ifndef DEBUG_H
#define DEBUG_H

#include <stdio.h>
#include <windows.h>

/**
 * Use exactly like printf(), shows a Windows messagebox to display critical errors
 */
#define ALERT(x, ...)   { char __msg[200]; \
    sprintf_s(__msg, (x), __VA_ARGS__); \
    char __buffer[300]; \
    sprintf_s(__buffer, "%s\n\n%s", __FUNCTION__, __msg); \
    MessageBox(nullptr, __buffer, "Alert", 0); }

/**
 * Use exactly like printf(), displays console output for printing simple debug info
 */
#define DEBUG(x, ...)   printf("[%s] ", __FUNCTION__);printf((x), __VA_ARGS__);fflush(stdout);

#endif // DEBUG_H
