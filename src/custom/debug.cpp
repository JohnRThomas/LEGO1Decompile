#include "debug.h"

#include <stdio.h>
#include <windows.h>

void FIXMEINTERNAL(const char* caller, const char* str) {
    char message[200];

    sprintf_s(message, "%s\n\n%s", caller, str);

    MessageBox(0, message, "FIXME", 0);
}
