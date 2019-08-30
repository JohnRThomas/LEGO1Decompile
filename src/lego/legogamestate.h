class LegoGameState {
public:
    __declspec(dllexport) LegoGameState();
    __declspec(dllexport) ~LegoGameState();

    __declspec(dllexport) long Save(unsigned long);
    __declspec(dllexport) long Load(unsigned long);

    __declspec(dllexport) void SetSavePath(char*);

    __declspec(dllexport) void SerializePlayersInfo(short);

    __declspec(dllexport) void SerializeScoreHistory(short);
};

__declspec(dllexport) LegoGameState* GameState();
