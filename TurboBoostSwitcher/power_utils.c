#include "ui_utils.h"
#include <powrprof.h>

void setProcessorPowerState(GUID activeScheme, int newState, DWORD maxState) {
	if (maxState != newState) {
		if (PowerWriteACValueIndex(NULL, &activeScheme, &GUID_PROCESSOR_SETTINGS_SUBGROUP, &GUID_PROCESSOR_THROTTLE_MAXIMUM, newState) != ERROR_SUCCESS) {
			showErrorMessage(newState == 100 ? "Error setting processor throttle maximum state to 100" : "Error setting processor throttle maximum state to 99");
			return;
		}

		PowerSetActiveScheme(NULL, &activeScheme);
		showInfoMessage(newState == 100 ? L"Intel Turbo Boost ON." : L"Intel Turbo Boost OFF.");
	}
}