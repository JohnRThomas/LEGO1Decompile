#include "mxvideoparam.h"

#include <STRING.H>

#include "custom/debug.h"

MxVideoParam::MxVideoParam()
{
  PERFECT;

  x_ = 0;
  y_ = 0;
  width_ = 640;
  height_ = 480;
  palette_ = NULL;
  unknown1_ = 0;
  unknown2_ = 0;
  device_name_ = NULL;
}

MxVideoParam::MxVideoParam(MxRect32& rect, MxPalette* pal, unsigned long u1, MxVideoParamFlags& flags)
{
  PERFECT;

  x_ = rect.x;
  y_ = rect.y;
  width_ = rect.width;
  height_ = rect.height;
  palette_ = pal;
  unknown1_ = u1;
  flags_ = flags;
  unknown2_ = 0;
  device_name_ = NULL;
}

MxVideoParam::MxVideoParam(MxVideoParam& other)
{
  PARTIAL;

  // Copy all parameters
  x_ = other.x_;
  y_ = other.y_;
  width_ = other.width_;
  height_ = other.height_;
  palette_ = other.palette_;
  unknown1_ = other.unknown1_;
  flags_ = other.flags_;
  unknown2_ = other.unknown2_;

  // Set device name correctly
  SetDeviceName(other.device_name_);
}

MxVideoParam::~MxVideoParam()
{
  PERFECT;

  if (device_name_) {
    delete [] device_name_;
  }
}

MxVideoParam& MxVideoParam::operator=(const MxVideoParam& other)
{
  PERFECT;

  // Copy all parameters
  x_ = other.x_;
  y_ = other.y_;
  width_ = other.width_;
  height_ = other.height_;
  palette_ = other.palette_;
  unknown1_ = other.unknown1_;
  flags_ = other.flags_;
  unknown2_ = other.unknown2_;

  // Set device name correctly
  SetDeviceName(other.device_name_);

  return *this;
}

void MxVideoParam::SetDeviceName(char* device)
{
  PERFECT;

  if (device_name_) {
    // Delete device string if it already exists
    delete [] device_name_;
  }

  // If no device was specified, set to null
  if (device) {
    // Otherwise, copy the string here
    if ((device_name_ = new char[strlen(device) + 1])) {
      strcpy(device_name_, device);
    }
  } else {
    device_name_ = NULL;
  }
}
