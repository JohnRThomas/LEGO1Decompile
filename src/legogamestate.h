class LegoGameState {
public:
    LegoGameState();
    ~LegoGameState();

    long Save(unsigned long);
    long Load(unsigned long);

    void SetSavePath(char*);

    void SerializePlayersInfo(short);

    void SerializeScoreHistory(short);
};

LegoGameState* GameState();
