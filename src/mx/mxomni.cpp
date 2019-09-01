#include "mxomni.h"

#include <string.h>

#include "custom/debug.h"

// Arbitrary maximum path length
const int kMaximumPathLength = 255;

char MxOmni::cd_path_[kMaximumPathLength];
char MxOmni::hd_path_[kMaximumPathLength];
unsigned char MxOmni::sound_is_3d_ = 0;

MxOmni::MxOmni()
{
    FIXME("Stub");
}

MxOmni* MxOmni::GetInstance()
{
    FIXME("Stub");

    return nullptr;
}

void MxOmni::DestroyInstance()
{
    FIXME("Stub");
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
