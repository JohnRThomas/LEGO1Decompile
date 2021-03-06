#ifndef MXOMNICREATEPARAM_H
#define MXOMNICREATEPARAM_H

#include "mxbool.h"

#include <WINDOWS.H>

#include "mxomnicreateflags.h"
#include "mxstring.h"
#include "mxvideoparam.h"

class MxOmniCreateParamBase {
public:
  virtual ~MxOmniCreateParamBase();
};

/**
 * @brief The MxOmniCreateParam class
 *
 * Usually alloc at 0019FCAC
 */
class MxOmniCreateParam : public MxOmniCreateParamBase {
public:
  MxOmniCreateParam(const char *, struct HWND__* handle, MxVideoParam &, MxOmniCreateFlags);

  /// +4
  MxString unknown1_;

  /// +14
  struct HWND__ * window_handle_;

  /// +18
  MxVideoParam video_params_;

  /// +3C
  MxOmniCreateFlags flags_;

};

#endif // MXOMNICREATEPARAM_H
