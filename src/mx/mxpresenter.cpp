#include "mxpresenter.h"

#include "custom/debug.h"

MxPresenter::MxPresenter()
{
  PARTIAL;
  Init();
}

MxPresenter::~MxPresenter()
{
  STUB;
}

long MxPresenter::StartAction(MxStreamController *, MxDSAction *)
{
  STUB;

  return 0;
}

void MxPresenter::EndAction()
{
  STUB;
}

long MxPresenter::Tickle()
{
  STUB;

  return 0;
}

void MxPresenter::Enable(unsigned char)
{
  STUB;
}

void MxPresenter::DoneTickle()
{
  STUB;
}

void MxPresenter::ParseExtra()
{
  STUB;
}

void MxPresenter::Init()
{
  PARTIAL;
  unk8_ = 0;
  unk1C_ = 0;
  unk18_ = 0;
  unk3C_ = 0;
  unkC_ = 0;
  unk10_ = 0;
  unk14_ = 0;
}
