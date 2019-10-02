#ifndef DEBUG_H
#define DEBUG_H

#include <stdio.h>

#define FIXME(x)        FIXMEINTERNAL(__FUNCTION__, x)

void FIXMEINTERNAL(const char* caller, const char* str);

void PRINTNUMBER(const char* name, size_t sz);

#endif // DEBUG_H
