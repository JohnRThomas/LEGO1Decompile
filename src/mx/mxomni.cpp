#include "mxomni.h"

#include <string.h>

#include "custom/debug.h"

// Arbitrary maximum path length
const int kMaximumPathLength = 255;

char MxOmni::cd_path_[kMaximumPathLength];
char MxOmni::hd_path_[kMaximumPathLength];
unsigned char MxOmni::sound_is_3d_ = 0;

MxOmni* MxOmni::instance_ = nullptr;

MxOmni::MxOmni()
{
    // FIXME: Accurate but undocumented behavior
    unknown2_[1] = 0;
    unknown2_[2] = 0;
    unknown2_[3] = 0;
    unknown2_[4] = 0;
    unknown2_[5] = 0;
    unknown2_[6] = 0;
    unknown2_[7] = 0;
    unknown2_[8] = 0;
    unknown2_[9] = 0;
    unknown2_[10] = 0;
    unknown2_[11] = 0;
    unknown2_[12] = 0;

    unknown3_ = 0;
}

MxOmni* MxOmni::GetInstance()
{
    return instance_;
}

void MxOmni::DestroyInstance()
{
    delete instance_;
    instance_ = nullptr;
}

const char *MxOmni::GetHD()
{
    return hd_path_;
}

void MxOmni::SetHD(const char *hd)
{
    strcpy_s(hd_path_, kMaximumPathLength, hd);
}

const char *MxOmni::GetCD()
{
    return cd_path_;
}

void MxOmni::SetCD(const char *cd)
{
    strcpy_s(cd_path_, kMaximumPathLength, cd);
}

unsigned char MxOmni::IsSound3D()
{
    return sound_is_3d_;
}

void MxOmni::SetSound3D(unsigned char c)
{
    sound_is_3d_ = c;
}

void MxOmni::SetInstance(MxOmni* instance)
{
    instance_ = instance;
}

MxOmniUnknownStruct1::MxOmniUnknownStruct1()
{
    string_ = "";
}

MxOmniUnknownStruct1::~MxOmniUnknownStruct1()
{
}
