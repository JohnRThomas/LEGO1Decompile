#include "debug.h"

void ALERT(const char* str, ...) {
  char __msg[200];

  va_list argList;
  va_start(argList, str);
  vsprintf(__msg, str, argList);
  va_end(argList);

  MessageBox(NULL, __msg, "Alert", 0);
}
