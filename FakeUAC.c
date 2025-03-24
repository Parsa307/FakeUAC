#include <windows.h>

__declspec(dllexport) void CALLBACK Start() {
    ShellExecute(NULL, L"open", L"cmd.exe", NULL, NULL, SW_SHOWMINNOACTIVE);
}
