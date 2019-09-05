#include <windows.h>

class MxCriticalSection {
public:
    MxCriticalSection();
    ~MxCriticalSection();

    static void SetDoMutex();

private:
    CRITICAL_SECTION critical_section_;

    HANDLE mutex_;
};
