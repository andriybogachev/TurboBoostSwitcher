#include <windows.h>
#include "power_utils.h"
#include "ui_utils.h"

int WINAPI WinMain(HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow) {
	GUID* pPwrGUID;
	if (PowerGetActiveScheme(NULL, &pPwrGUID) != ERROR_SUCCESS) {
		showErrorMessage("Error in getting active power scheme");
		return 1;
	}

	GUID activeScheme = *pPwrGUID;
	LocalFree(pPwrGUID);

	DWORD maxState;
	if (PowerReadACValueIndex(NULL, &activeScheme, &GUID_PROCESSOR_SETTINGS_SUBGROUP, &GUID_PROCESSOR_THROTTLE_MAXIMUM, &maxState) != ERROR_SUCCESS) {
		showErrorMessage("Error reading maximum processor state");
		return 1;
	}

	// Enable Turbo Boost if maxState < 100, else disable it
	setProcessorPowerState(activeScheme, maxState < 100 ? 100 : 99, maxState);

	return 0;
}