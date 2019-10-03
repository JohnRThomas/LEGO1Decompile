#include "mxpresenter.h"

#include "custom/debug.h"

MxPresenter::MxPresenter()
{
    Init();
}

MxPresenter::~MxPresenter()
{
    ALERT("Stub")
}

long MxPresenter::StartAction(MxStreamController *, MxDSAction *)
{
    ALERT("Stub")

    return 0;
}

void MxPresenter::EndAction()
{
    ALERT("Stub")
}

long MxPresenter::Tickle()
{
    ALERT("Stub")

    return 0;
}

void MxPresenter::Enable(unsigned char)
{
    ALERT("Stub")
}

void MxPresenter::DoneTickle()
{
    ALERT("Stub")
}

void MxPresenter::ParseExtra()
{
    ALERT("Stub")
}

void MxPresenter::Init()
{
    unk8_ = 0;
    unk1C_ = 0;
    unk18_ = 0;
    unk3C_ = 0;
    unkC_ = 0;
    unk10_ = 0;
    unk14_ = 0;
}
