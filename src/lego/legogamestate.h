#ifndef LEGOGAMESTATE_H
#define LEGOGAMESTATE_H

/**
 * @brief Class that presumably holds the game state
 *
 * This class is 0x430 bytes in size
 */
class LegoGameState {
public:
  LegoGameState();
  ~LegoGameState();

  long Save(unsigned long);
  long Load(unsigned long);

  void SetSavePath(char*);

  void SerializePlayersInfo(short);

  void SerializeScoreHistory(short);

  void sub_1003CEA0(int punk1);

private:
  char unk_[0x430];
};

#endif // LEGOGAMESTATE_H
