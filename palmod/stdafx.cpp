// stdafx.cpp : source file that includes just the standard includes
// PalMod.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

void OutputDebugString_DebugOnly(LPCSTR pszString)
{
#ifdef DEBUG
    OutputDebugString(pszString);
#else
#endif
}
