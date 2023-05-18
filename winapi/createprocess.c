#include <windows.h>
#include <stdio.h>

int main(void)
{
    STARTUPINFOW si = {0};
    PROCESS_INFORMATION pi = {0};

    if (!CreateProcessW(
            L"C:\\Windows\\System32\\mspaint.exe",
            NULL,
            NULL,
            NULL,
            FALSE,
            BELOW_NORMAL_PRIORITY_CLASS,
            NULL,
            NULL,
            &si,
            &pi))
    {
        printf("(-) Process was not created because of the following error: %ld\n", GetLastError());
        return 1;
    }

    printf("(+) Process PID: %ld\n", pi.dwProcessId);

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);

    return 0;
}