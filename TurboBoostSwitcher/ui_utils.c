#include <windows.h>

void showErrorMessage(const char* message) {
	HWND hwnd = GetForegroundWindow();
	MessageBoxA(hwnd, message, "Error", MB_OK | MB_ICONERROR | MB_TOPMOST);
	SetForegroundWindow(hwnd);
}

void showInfoMessage(const wchar_t* message) {
	HWND hwnd = GetForegroundWindow();
	MessageBoxW(hwnd, message, L"Power Scheme Info", MB_ICONINFORMATION | MB_TOPMOST);
	SetForegroundWindow(hwnd);
}