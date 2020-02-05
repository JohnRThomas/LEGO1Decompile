#include "legogamestate.h"

#include "custom/debug.h"

LegoGameState::LegoGameState()
{
  ALERT("LegoGameState::LegoGameState", "Stub\n\nSize: %x", sizeof(LegoGameState));
}

LegoGameState::~LegoGameState()
{
  ALERT("LegoGameState::~LegoGameState", "Stub");
}

long LegoGameState::Save(unsigned long)
{
  ALERT("LegoGameState::Save", "Stub");

  return 0;
}

long LegoGameState::Load(unsigned long)
{
  ALERT("LegoGameState::Load", "Stub");

  return 0;
}

void LegoGameState::SetSavePath(char*)
{
  ALERT("LegoGameState::SetSavePath", "Stub");
}

void LegoGameState::SerializePlayersInfo(short)
{
  ALERT("LegoGameState::SerializePlayersInfo", "Stub");
}

void LegoGameState::SerializeScoreHistory(short)
{
  ALERT("LegoGameState::SerializeScoreHistory", "Stub");
}

void LegoGameState::sub_1003CEA0(int punk1)
{
  ALERT("LegoGameState::sub_1003CEA0", "Stub");
}

LegoGameState* GameState()
{
  ALERT("GameState", "Stub");

  return NULL;
}
