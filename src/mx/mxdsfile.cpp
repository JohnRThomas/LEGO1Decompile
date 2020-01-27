#include "mxdsfile.h"

#include "custom/debug.h"

MxDSFile::MxDSFile(const char *, unsigned long)
{
  ALERT("MxDSFile::MxDSFile(const char *, unsigned long)", "Stub");
}

MxDSFile::~MxDSFile()
{
  ALERT("MxDSFile::~MxDSFile()", "Stub");
}

long MxDSFile::Open(unsigned long)
{
  ALERT("long MxDSFile::Open(unsigned long)", "Stub");
  return 0;
}

long MxDSFile::Close()
{
  ALERT("long MxDSFile::Close()", "Stub");
  return 0;
}

long MxDSFile::Read(unsigned char *, unsigned long)
{
  ALERT("long MxDSFile::Read(unsigned char *, unsigned long)", "Stub");
  return 0;
}

long MxDSFile::Seek(long, int)
{
  ALERT("long MxDSFile::Seek(long, int)", "Stub");
  return 0;
}

unsigned long MxDSFile::GetBufferSize()
{
  ALERT("unsigned long MxDSFile::GetBufferSize()", "Stub");
  return 0;
}

unsigned long MxDSFile::GetStreamBuffersNum()
{
  ALERT("unsigned long MxDSFile::GetStreamBuffersNum()", "Stub");
  return 0;
}
