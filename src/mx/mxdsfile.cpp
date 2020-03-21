#include "mxdsfile.h"

#include "custom/debug.h"

MxDSFile::MxDSFile(const char *, unsigned long)
{
  STUB;
}

MxDSFile::~MxDSFile()
{
  STUB;
}

long MxDSFile::Open(unsigned long)
{
  STUB;
  return 0;
}

long MxDSFile::Close()
{
  STUB;
  return 0;
}

long MxDSFile::Read(unsigned char *, unsigned long)
{
  STUB;
  return 0;
}

long MxDSFile::Seek(long, int)
{
  STUB;
  return 0;
}

unsigned long MxDSFile::GetBufferSize()
{
  STUB;
  return 0;
}

unsigned long MxDSFile::GetStreamBuffersNum()
{
  STUB;
  return 0;
}
