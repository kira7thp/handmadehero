#include <Windows.h>

LRESULT CALLBACK 
MainWindowCallback(HWND Window,
                UINT Message,
                WPARAM WParam,
                LPARAM LParam)
{
    LRESULT Result = 0;

    switch(Message)
    {
        case WM_SIZE:
        {
            OutputDebugStringA("WM_SIZE\n");
        } break;
        case WM_DESTROY:
        {
            OutputDebugStringA("WM_DESTROY\n");
        } break;
        case WM_CLOSE:
        {
            OutputDebugStringA("WM_CLOSE\n");
        } break;
        case WM_ACTIVATEAPP:
        {
            OutputDebugStringA("WM_ACTIVATEAPP\n");
        } break;
        
        default:
        {
            Result = DefWindowProc(Window, Message, WParam, LParam) ;
        } break;
    }
    return(Result);
}

int CALLBACK WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nCmdShow
)
{
    // MessageBox(0, "This is Handmade Hero", "Handmade Hero",
    //         MB_OK|MB_ICONINFORMATION);
    WINDCLASS WindowClass = {};
    WindowClass.style = CS_OWNDC|CS_HREDRAW|CS_VREDRAW;
    WindowClass.lpfnWndProc;
    WindowClass.hInstance = hInstance;
    // WindowClass.hIcon;
    WindowClass.lpszClassName = "HandmadeHeroWindowClass";

    if(RegisterClass(&WindowClass))
    {
        // WindowHandle ???
    if(WindowHandle)
    {
        for(;;)
        {
            MSG Message;
            BOOL MessageResult = GetMessage(&Message, 0, 0, 0);
            if(MessageResult > 0)
            {
                TranslateMessage(&Message);
                DispatchMessage(&Message);
            }
            else
            {
                break;
            }
        }
    }
    }else
    {
    
    }
    return(0);
}
