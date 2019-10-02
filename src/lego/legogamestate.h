#ifndef LEGOGAMESTATE_H
#define LEGOGAMESTATE_H

/**
 * @brief Class that presumably holds the game state
 *
 * This class is 0x430 bytes in size
 */
class LegoGameState {
public:
    __declspec(dllexport) LegoGameState();
    __declspec(dllexport) ~LegoGameState();

    __declspec(dllexport) long Save(unsigned long);
    __declspec(dllexport) long Load(unsigned long);

    __declspec(dllexport) void SetSavePath(char*);

    __declspec(dllexport) void SerializePlayersInfo(short);

    __declspec(dllexport) void SerializeScoreHistory(short);

private:
    char unk_[0x430];
};

__declspec(dllexport) LegoGameState* GameState();

#endif // LEGOGAMESTATE_H
