#ifndef MXBACKGROUNDAUDIOMANAGER_H
#define MXBACKGROUNDAUDIOMANAGER_H

class MxBackgroundAudioManager {
public:
    __declspec(dllexport) MxBackgroundAudioManager();

    __declspec(dllexport) void Enable(unsigned char);
};

__declspec(dllexport) MxBackgroundAudioManager* BackgroundAudioManager();

#endif // MXBACKGROUNDAUDIOMANAGER_H
