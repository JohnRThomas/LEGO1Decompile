#ifndef NOCD_H
#define NOCD_H

/**
 * @brief Returns path to NOCD script file
 *
 * @return Always returns "\lego\scripts
ocd"
 */
__declspec(dllexport) char const* GetNoCD_SourceName(void);

#endif // NOCD_H
