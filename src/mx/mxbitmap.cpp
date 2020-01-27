#include "mxbitmap.h"

#include "custom/debug.h"

MxBitmap::MxBitmap()
{
  ALERT("MxBitmap::MxBitmap()", "Stub");
}

MxBitmap::~MxBitmap()
{
  ALERT("MxBitmap::~MxBitmap()", "Stub");
}

long MxBitmap::Read(const char *)
{
  ALERT("long MxBitmap::Read(const char *)", "Stub");
  return 0;
}

MxPalette *MxBitmap::CreatePalette()
{
  ALERT("MxPalette *MxBitmap::CreatePalette()", "Stub");
  return NULL;
}
