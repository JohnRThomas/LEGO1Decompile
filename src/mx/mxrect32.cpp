#include "mxrect32.h"

#include "custom/debug.h"

MxRect32::MxRect32()
{
  ALERT("MxRect32::MxRect32()", "Stub");
}

const int& MxRect32::x()
{
  return x_;
}
const int& MxRect32::y()
{
  return y_;
}
const int& MxRect32::width()
{
  return width_;
}
const int& MxRect32::height()
{
  return height_;
}
