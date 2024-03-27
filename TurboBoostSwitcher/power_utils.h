#pragma once

#include <powrprof.h>
#pragma comment(lib, "PowrProf.lib")

void setProcessorPowerState(GUID activeScheme, int newState, DWORD maxState);