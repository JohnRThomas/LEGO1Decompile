class MxScheduler {
public:
    MxScheduler();

    static MxScheduler* GetInstance();

    void StartMultiTasking(unsigned long);

}
