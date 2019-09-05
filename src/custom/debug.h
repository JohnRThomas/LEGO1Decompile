#ifndef DEBUG_H
#define DEBUG_H

#define FIXME(x)        FIXMEINTERNAL(__FUNCTION__, x)

void FIXMEINTERNAL(const char* caller, const char* str);

void PRINTSIZE(const char* name, size_t sz);

#endif // DEBUG_H
