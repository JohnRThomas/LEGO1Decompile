#include "mxmidipresenter.h"

#include "custom/debug.h"

MxMIDIPresenter::MxMIDIPresenter()
{
  PERFECT;

  Init();
}

void MxMIDIPresenter::Init()
{
  // For some reason, this function is split by a JMP in the asm.
  // Otherwise perfect.
  NEARPERFECT;

  // sub_100C0690
  unk50_ = 0x64;

  // sub_100C06A0
  unk30_ = 0;
  unk34_ = 0;
  unk38_ = 0;
  unk3C_ = 0;
  unk40_ = 0;
  unk44_ = 0;
  unk48_ = 0;
  unk4C_ = 0;
}

MxResult MxMIDIPresenter::sub_100C0840(int punk1, int punk2)
{
  STUB;

  return SUCCESS;
}
