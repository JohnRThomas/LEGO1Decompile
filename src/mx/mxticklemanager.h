#ifndef MXTICKLEMANAGER_H
#define MXTICKLEMANAGER_H

class MxTickleManager {
public:
    __declspec(dllexport) MxTickleManager();
};

__declspec(dllexport) MxTickleManager* TickleManager();

#endif // MXTICKLEMANAGER_H
