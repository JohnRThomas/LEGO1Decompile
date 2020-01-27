#include "legogamestate.h"

#include "custom/debug.h"

LegoGameState::LegoGameState()
{
  ALERT("Stub\n\nSize: %x", sizeof(LegoGameState));
}

LegoGameState::~LegoGameState()
{
  ALERT("Stub");
}

long LegoGameState::Save(unsigned long)
{
  return 0;
}

long LegoGameState::Load(unsigned long)
{
  return 0;
}

void LegoGameState::SetSavePath(char*)
{
  ALERT("Stub");
}

void LegoGameState::SerializePlayersInfo(short)
{
  ALERT("Stub");
}

void LegoGameState::SerializeScoreHistory(short)
{
  ALERT("Stub");
}

LegoGameState* GameState()
{
  ALERT("Stub");

  return NULL;
}
