#include "mxpresenter.h"

#include "custom/debug.h"

MxPresenter::MxPresenter()
{
  ALERT("MxPresenter::MxPresenter()", "Stub");
  Init();
}

MxPresenter::~MxPresenter()
{
  ALERT("MxPresenter::~MxPresenter()", "Stub");
}

long MxPresenter::StartAction(MxStreamController *, MxDSAction *)
{
  ALERT("MxPresenter::~MxPresenter()", "Stub");

  return 0;
}

void MxPresenter::EndAction()
{
  ALERT("void MxPresenter::EndAction()", "Stub");
}

long MxPresenter::Tickle()
{
  ALERT("long MxPresenter::Tickle()", "Stub");

  return 0;
}

void MxPresenter::Enable(unsigned char)
{
  ALERT("void MxPresenter::Enable(unsigned char)", "Stub");
}

void MxPresenter::DoneTickle()
{
  ALERT("void MxPresenter::DoneTickle()", "Stub");
}

void MxPresenter::ParseExtra()
{
  ALERT("void MxPresenter::ParseExtra()", "Stub");
}

void MxPresenter::Init()
{
  ALERT("void MxPresenter::Init()", "Stub");
  unk8_ = 0;
  unk1C_ = 0;
  unk18_ = 0;
  unk3C_ = 0;
  unkC_ = 0;
  unk10_ = 0;
  unk14_ = 0;
}
