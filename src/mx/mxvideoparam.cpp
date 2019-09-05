#include "mxvideoparam.h"

#include <string>

#include "custom/debug.h"

MxVideoParam::MxVideoParam() :
    x_(0),
    y_(0),
    width_(640),    // Width defaults to 640
    height_(480),   // Height defaults to 480
    palette_(nullptr),
    unknown1_(0),
    //flags_(0), // FIXME: How to set default value for this?
    unknown2_(0),
    device_name_(nullptr)
{
}

MxVideoParam::MxVideoParam(MxRect32& rect, MxPalette* pal, unsigned long u1, MxVideoParamFlags& flags) :
    x_(rect.x()),
    y_(rect.y()),
    width_(rect.width()),
    height_(rect.height()),
    palette_(pal),
    unknown1_(u1),
    flags_(flags),
    unknown2_(0),
    device_name_(nullptr)
{
}

MxVideoParam::MxVideoParam(MxVideoParam& other)
{
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
    delete [] device_name_;
}

MxVideoParam& MxVideoParam::operator=(const MxVideoParam& other)
{
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
    // Delete device string if it already exists
    delete [] device_name_;

    // If no device was specified, set to null
    if (!device) {
        device_name_ = nullptr;
        return;
    }

    // Otherwise, copy the string here
    size_t device_name_len = strlen(device) + 1;
    device_name_ = new char[device_name_len];
    strcpy_s(device_name_, device_name_len, device);
}
