#include "mxmidipresenter.h"

#include "custom/debug.h"

MxMIDIPresenter::MxMIDIPresenter() :
  unk50_(64)
{
  ALERT("MxMIDIPresenter::MxMIDIPresenter()", "Stub");
  Init();
}

void MxMIDIPresenter::Init()
{
  ALERT("void MxMIDIPresenter::Init()", "Stub");
  unk30_ = 0;
  unk34_ = 0;
  unk38_ = 0;
  unk3C_ = 0;
  unk40_ = 0;
  unk44_ = 0;
  unk48_ = 0;
  unk4C_ = 0;
}
