#ifndef MXPRESENTER_H
#define MXPRESENTER_H

#include "mxcriticalsection.h"
#include "mxdsaction.h"
#include "mxstreamcontroller.h"

/**
 * @brief The MxPresenter class
 *
 * 0x40 bytes in size
 */
class MxPresenter : public MxCore {
public:
  MxPresenter();
  virtual ~MxPresenter();

  virtual long StartAction(MxStreamController*, MxDSAction*);
  virtual void EndAction();

  virtual long Tickle();
  virtual void Enable(unsigned char);

protected:
  virtual void DoneTickle();
  virtual void ParseExtra();

  void Init();

private:
  int unk8_;
  int unkC_;
  int unk10_;
  int unk14_;
  int unk18_;
  int unk1C_;

  // +20
  MxCriticalSection critical_section_;

  int unk3C_;


};

#endif // MXPRESENTER_H
