#include <Windows.h>

int CALLBACK WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nCmdShow
)
{
    MessageBox(0, "This is Handmade Hero", "Handmade Hero",
            NB_OK|NB_ICONINFORMATION);

    return(0);
}
