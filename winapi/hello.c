#include <windows.h>

int main(void)
{

    MessageBoxW(
        NULL,
        L"Message",
        L"Message box top",
        MB_OKCANCEL | MB_ICONASTERISK

    );
    return EXIT_SUCCESS;
}
