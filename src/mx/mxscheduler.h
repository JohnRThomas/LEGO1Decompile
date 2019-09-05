#ifndef MXSCHEDULER_H
#define MXSCHEDULER_H

class MxScheduler {
public:
    MxScheduler();

    static MxScheduler* GetInstance();

    void StartMultiTasking(unsigned long);

}

#endif // MXSCHEDULER_H
