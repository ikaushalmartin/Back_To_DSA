#include <Windows.h>

// Global variables
HINSTANCE hInstance;        // Instance handle
HWND hMainWnd, hHelloText, hCloseButton; // Window and control handles

// Window procedure for the main window
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
    case WM_CREATE:
        // Create the "Hello" text control
        hHelloText = CreateWindow("STATIC", "Hello, World!", WS_CHILD | WS_VISIBLE | SS_CENTER, 50, 50, 200, 50, hWnd, NULL, hInstance, NULL);

        // Create the "Close" button
        hCloseButton = CreateWindow("BUTTON", "Close", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 100, 120, 80, 30, hWnd, NULL, hInstance, NULL);
        break;

    case WM_COMMAND:
        if (HIWORD(wParam) == BN_CLICKED && (HWND)lParam == hCloseButton)
        {
            // Close the main window and exit the application
            DestroyWindow(hWnd);
            PostQuitMessage(0);
        }
        break;

    case WM_DESTROY:
        // Release the window and control handles
        PostQuitMessage(0);
        break;

    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

// Entry point for the application
int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR lpCmdLine, int nCmdShow)
{
    // Save the instance handle
    hInstance = hInst;

    // Define the main window class
    WNDCLASS wc = { 0 };
    wc.lpfnWndProc = WndProc;
    wc.hInstance = hInst;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wc.lpszClassName = "HelloWindowClass";
    RegisterClass(&wc);

    // Create the main window
    hMainWnd = CreateWindow(wc.lpszClassName, "Hello World", WS_OVERLAPPEDWINDOW, 100, 100, 300, 200, NULL, NULL, hInst, NULL);
    ShowWindow(hMainWnd, nCmdShow);

    // Enter the main message loop
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return (int)msg.wParam;
}
