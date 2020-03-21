#ifndef DEBUG_H
#define DEBUG_H

#include "mx/mxbool.h"

#include <STDIO.H>
#include <WINDOWS.H>

/// While this project is still heavily under development, functions use the following rating scheme to determine how
/// accurate/complete each one is:

/// STUB - Not even started, don't expect this function to work at all.
#define STUB ALERT("Stub: %s:%i\n\nThis function has not been decompiled yet and does nothing. This may result in unexpected behavior.", __FILE__, __LINE__)
//#define STUB

/// PARTIAL - Started, but is missing major functionality. May produce unexpected/undefined results.
#define PARTIAL ALERT("Partial Stub: %s:%i\n\nThis function has only been partially decompiled. This may result in unexpected behavior.", __FILE__, __LINE__)
//#define PARTIAL

/// IMPERFECT - Function *should* produce results as expected, but has significant differences to the binary code.
#define IMPERFECT

/// NEARPERFECT - Function compiles to extremely similar binary code with only very negligible differences.
#define NEARPERFECT

/// PERFECT - Function compiles to identical binary code.
#define PERFECT

/// Ideally, all functions will be rated "Perfect" one day, however the project should be fully playable by the time
/// all functions are at the "Imperfect" stage or better.

/// Show simple alert messagebox. Follows printf formatting.
void ALERT(const char* str, ...);

/// Use exactly like printf(), displays console output for printing simple debug info
#define DEBUG(args)   printf("[%s] ", __FUNCTION__);printf(args);fflush(stdout);

#endif // DEBUG_H
