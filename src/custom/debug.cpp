#include "debug.h"

void ALERT(const char* str, ...) {
  char __msg[200];

  va_list argList;
  va_start(argList, str);
  vsprintf(__msg, str, argList);
  va_end(argList);

  char __buffer[300];
  sprintf(__buffer, "%s\n\n%s", __FILE__, __msg);
  MessageBox(NULL, __buffer, "Alert", 0);
}
