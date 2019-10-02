#ifndef DEBUG_H
#define DEBUG_H

#include <stdio.h>
#include <windows.h>

#define REDIRECT_ALERTS_TO_CONSOLE

#ifdef REDIRECT_ALERTS_TO_CONSOLE
#define ALERT(x, ...)   { \
    char __msg[200]; \
    sprintf_s(__msg, (x), __VA_ARGS__); \
    printf("%s\n\n%s\n\n================\n ", __FUNCTION__, __msg); \
    fflush(stdout); \
}
#else
/**
 * Use exactly like printf(), shows a Windows messagebox to display critical errors
 */
#define ALERT(x, ...)   { \
    char __msg[200]; \
    sprintf_s(__msg, (x), __VA_ARGS__); \
    char __buffer[300]; \
    sprintf_s(__buffer, "%s\n\n%s", __FUNCTION__, __msg); \
    MessageBox(nullptr, __buffer, "Alert", 0); \
}
#endif

/**
 * Use exactly like printf(), displays console output for printing simple debug info
 */
#define DEBUG(x, ...)   printf("[%s] ", __FUNCTION__);printf((x), __VA_ARGS__);fflush(stdout);

#endif // DEBUG_H
