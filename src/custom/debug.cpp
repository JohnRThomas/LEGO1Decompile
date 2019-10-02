#include "debug.h"

void FIXMEINTERNAL(const char* caller, const char* str) {
    char message[200];

    sprintf_s(message, "%s\n\n%s", caller, str);

    MessageBox(nullptr, message, "FIXME", 0);
}
