class MxPresenter {
public:
    MxPresenter();
    virtual ~MxPresenter();

    virtual long StartAction(MxStreamController*, MxDSAction*);
    virtual void EndAction();

    virtual long Tickle();
    virtual void Enable(unsigned char);

protected:
    virtual void DoneTickle();
    virtual void ParseExtra();

    void Init();
};
