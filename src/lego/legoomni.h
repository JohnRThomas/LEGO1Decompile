class LegoOmni {
public:
    LegoOmni();
    ~LegoOmni();

    static void CreateInstance();
    static LegoOmni* GetInstance();

    void RemoveWorld(MxAtomId const &, long);

    static int GetCurrPathInfo(LegoPathBoundary**, int&);

    void CreateBackgroundAudio();
};

LegoOmni* Lego();
