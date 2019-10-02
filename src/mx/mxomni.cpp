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
    unknown2_ = 0;
    unknown3_ = 0;
    unknown4_ = 0;
    variable_table_ = nullptr;
    tickle_manager_ = nullptr;
    notification_manager_ = nullptr;
    video_manager_ = 0;
    sound_manager_ = 0;
    unknown10_ = 0;
    unknown11_ = 0;
    unknown12_ = 0;
    unknown13_ = nullptr;

    unknown15_ = 0;
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

MxVariableTable *MxOmni::GetVariableTable()
{
    return variable_table_;
}

MxTickleManager *MxOmni::GetTickleManager()
{
    return tickle_manager_;
}

void MxOmni::SetInstance(MxOmni* instance)
{
    instance_ = instance;
}

MxVariableTable *VariableTable()
{
    return MxOmni::GetInstance()->GetVariableTable();
}

MxTickleManager* TickleManager()
{
    return MxOmni::GetInstance()->GetTickleManager();
}
