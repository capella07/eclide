// stdafx.cpp : source file that includes just the standard includes
// comms.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file

#if _COMMS_VER == 68200
#  include "68200/WebService.cpp"
#elif _COMMS_VER == 68201
#  include "68201/WebService.cpp"
#endif

