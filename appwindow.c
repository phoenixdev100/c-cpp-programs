// #include <stdio.h>
// #include <stdlib.h>
// #include <windows.h> // Include Windows-specific header

// // Function to be executed by the thread to open Notepad
// DWORD WINAPI open_notepad(LPVOID lpParam)
// {
//     printf("Thread: Opening Notepad...\n");
//     system("notepad");
//     printf("Thread: Notepad closed.\n");
//     return 0;
// }

// // Function to be executed by the thread to open Calculator
// DWORD WINAPI open_calculator(LPVOID lpParam)
// {
//     printf("Thread: Opening Calculator...\n");
//     system("calc");
//     printf("Thread: Calculator closed.\n");
//     return 0;
// }

// // Function to be executed by the thread to open Paint
// DWORD WINAPI open_paint(LPVOID lpParam)
// {
//     printf("Thread: Opening Paint...\n");
//     system("mspaint");
//     printf("Thread: Paint closed.\n");
//     return 0;
// }

// // Function to be executed by the thread to open Settings
// DWORD WINAPI open_settings(LPVOID lpParam)
// {
//     printf("Thread: Opening Settings...\n");
//     system("start ms-settings:");
//     printf("Thread: Settings closed.\n");
//     return 0;
// }

// // Function to create a thread for the specified application
// void create_thread(LPTHREAD_START_ROUTINE function)
// {
//     HANDLE threadHandle;
//     DWORD threadId;

//     threadHandle = CreateThread(
//         NULL,     // Default security attributes
//         0,        // Default stack size
//         function, // Function to run in the thread
//         NULL,     // Parameter to pass to the function
//         0,        // Default creation flags
//         &threadId // Returns the thread identifier
//     );

//     if (threadHandle == NULL)
//     {
//         fprintf(stderr, "Error creating thread\n");
//     }
//     else
//     {
//         // Wait for the thread to complete before continuing
//         WaitForSingleObject(threadHandle, INFINITE);
//         CloseHandle(threadHandle);
//     }
// }

// // Function to display the menu in a new console window
// DWORD WINAPI display_menu(LPVOID lpParam)
// {
//     // Allocate a new console window
//     AllocConsole();
//     freopen("CONOUT$", "w", stdout); // Redirect stdout to the new console
//     freopen("CONIN$", "r", stdin);   // Redirect stdin to the new console

//     int choice;

//     while (1)
//     {
//         // Display the menu
//         printf("\nMenu:\n");
//         printf("1. Open Notepad\n");
//         printf("2. Open Calculator\n");
//         printf("3. Open Paint\n");
//         printf("4. Open Settings\n");
//         printf("5. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             create_thread(open_notepad);
//             break;
//         case 2:
//             create_thread(open_calculator);
//             break;
//         case 3:
//             create_thread(open_paint);
//             break;
//         case 4:
//             create_thread(open_settings);
//             break;
//         case 5:
//             printf("Exiting the application...\n");
//             FreeConsole(); // Free the console before exiting
//             return 0;
//         default:
//             printf("Invalid choice! Please enter a valid option.\n");
//             break;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     HANDLE menuThread;
//     DWORD menuThreadId;

//     // Create a new thread to display the menu in a separate console window
//     menuThread = CreateThread(
//         NULL,         // Default security attributes
//         0,            // Default stack size
//         display_menu, // Function to run in the thread
//         NULL,         // Parameter to pass to the function
//         0,            // Default creation flags
//         &menuThreadId // Returns the thread identifier
//     );

//     if (menuThread == NULL)
//     {
//         fprintf(stderr, "Error creating menu thread\n");
//         return 1;
//     }

//     // Wait for the menu thread to complete before exiting the main program
//     WaitForSingleObject(menuThread, INFINITE);

//     // Close the menu thread handle
//     CloseHandle(menuThread);

//     printf("Main program exiting.\n");
//     return 0;
// }

// #include <windows.h>
// #include <stdio.h>

// // Function prototypes for thread functions
// DWORD WINAPI open_notepad(LPVOID lpParam);
// DWORD WINAPI open_calculator(LPVOID lpParam);
// DWORD WINAPI open_paint(LPVOID lpParam);
// DWORD WINAPI open_settings(LPVOID lpParam);

// // Window procedure function
// LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
// {
//     switch (uMsg)
//     {
//     case WM_COMMAND:
//         switch (LOWORD(wParam))
//         {
//         case 1: // Notepad
//             CreateThread(NULL, 0, open_notepad, NULL, 0, NULL);
//             break;
//         case 2: // Calculator
//             CreateThread(NULL, 0, open_calculator, NULL, 0, NULL);
//             break;
//         case 3: // Paint
//             CreateThread(NULL, 0, open_paint, NULL, 0, NULL);
//             break;
//         case 4: // Settings
//             CreateThread(NULL, 0, open_settings, NULL, 0, NULL);
//             break;
//         case 5: // Exit
//             PostQuitMessage(0);
//             break;
//         }
//         break;
//     case WM_DESTROY:
//         PostQuitMessage(0);
//         break;
//     default:
//         return DefWindowProc(hwnd, uMsg, wParam, lParam);
//     }
//     return 0;
// }

// // Function to create the main window and message loop
// void create_main_window()
// {
//     const char CLASS_NAME[] = "Sample Window Class";

//     WNDCLASS wc = {0};
//     wc.lpfnWndProc = WindowProc;
//     wc.hInstance = GetModuleHandle(NULL);
//     wc.lpszClassName = CLASS_NAME;

//     RegisterClass(&wc);

//     HWND hwnd = CreateWindowEx(
//         0,
//         CLASS_NAME,
//         "Menu Application",
//         WS_OVERLAPPEDWINDOW,
//         CW_USEDEFAULT, CW_USEDEFAULT, 300, 200,
//         NULL,
//         NULL,
//         wc.hInstance,
//         NULL);

//     if (hwnd == NULL)
//     {
//         fprintf(stderr, "Error creating window\n");
//         return;
//     }

//     ShowWindow(hwnd, SW_SHOW);

//     // Create buttons
//     CreateWindow("BUTTON", "Open Notepad", WS_VISIBLE | WS_CHILD, 50, 20, 200, 30, hwnd, (HMENU)1, NULL, NULL);
//     CreateWindow("BUTTON", "Open Calculator", WS_VISIBLE | WS_CHILD, 50, 60, 200, 30, hwnd, (HMENU)2, NULL, NULL);
//     CreateWindow("BUTTON", "Open Paint", WS_VISIBLE | WS_CHILD, 50, 100, 200, 30, hwnd, (HMENU)3, NULL, NULL);
//     CreateWindow("BUTTON", "Open Settings", WS_VISIBLE | WS_CHILD, 50, 140, 200, 30, hwnd, (HMENU)4, NULL, NULL);
//     CreateWindow("BUTTON", "Exit", WS_VISIBLE | WS_CHILD, 50, 180, 200, 30, hwnd, (HMENU)5, NULL, NULL);

//     MSG msg = {0};
//     while (GetMessage(&msg, NULL, 0, 0))
//     {
//         TranslateMessage(&msg);
//         DispatchMessage(&msg);
//     }
// }

// // Function to be executed by the thread to open Notepad
// DWORD WINAPI open_notepad(LPVOID lpParam)
// {
//     system("notepad");
//     return 0;
// }

// // Function to be executed by the thread to open Calculator
// DWORD WINAPI open_calculator(LPVOID lpParam)
// {
//     system("calc");
//     return 0;
// }

// // Function to be executed by the thread to open Paint
// DWORD WINAPI open_paint(LPVOID lpParam)
// {
//     system("mspaint");
//     return 0;
// }

// // Function to be executed by the thread to open Settings
// DWORD WINAPI open_settings(LPVOID lpParam)
// {
//     system("start ms-settings:");
//     return 0;
// }

// int main()
// {
//     create_main_window();
//     return 0;
// }

// #include <windows.h>
// #include <stdio.h>

// // Function prototypes for thread functions
// DWORD WINAPI open_notepad(LPVOID lpParam);
// DWORD WINAPI open_calculator(LPVOID lpParam);
// DWORD WINAPI open_paint(LPVOID lpParam);
// DWORD WINAPI open_settings(LPVOID lpParam);

// // Window procedure function
// LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
// {
//     switch (uMsg)
//     {
//     case WM_COMMAND:
//         switch (LOWORD(wParam))
//         {
//         case 1: // Notepad
//             CreateThread(NULL, 0, open_notepad, NULL, 0, NULL);
//             break;
//         case 2: // Calculator
//             CreateThread(NULL, 0, open_calculator, NULL, 0, NULL);
//             break;
//         case 3: // Paint
//             CreateThread(NULL, 0, open_paint, NULL, 0, NULL);
//             break;
//         case 4: // Settings
//             CreateThread(NULL, 0, open_settings, NULL, 0, NULL);
//             break;
//         case 5: // Exit
//             PostQuitMessage(0);
//             break;
//         }
//         break;
//     case WM_DESTROY:
//         PostQuitMessage(0);
//         break;
//     default:
//         return DefWindowProc(hwnd, uMsg, wParam, lParam);
//     }
//     return 0;
// }

// // Function to create the main window and message loop
// void create_main_window()
// {
//     const char CLASS_NAME[] = "Sample Window Class";

//     WNDCLASS wc = {0};
//     wc.lpfnWndProc = WindowProc;
//     wc.hInstance = GetModuleHandle(NULL);
//     wc.lpszClassName = CLASS_NAME;
//     wc.hCursor = LoadCursor(NULL, IDC_ARROW); // Set a standard cursor

//     RegisterClass(&wc);

//     HWND hwnd = CreateWindowEx(
//         0,
//         CLASS_NAME,
//         "Application Menu",
//         WS_OVERLAPPEDWINDOW | WS_VISIBLE,       // Ensure window is visible and not fullscreen
//         CW_USEDEFAULT, CW_USEDEFAULT, 300, 250, // Set window size
//         NULL,
//         NULL,
//         wc.hInstance,
//         NULL);

//     if (hwnd == NULL)
//     {
//         fprintf(stderr, "Error creating window\n");
//         return;
//     }

//     // Create buttons with updated layout
//     CreateWindow("BUTTON", "Notepad", WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON, 20, 20, 120, 40, hwnd, (HMENU)1, NULL, NULL);
//     CreateWindow("BUTTON", "Calculator", WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON, 150, 20, 120, 40, hwnd, (HMENU)2, NULL, NULL);
//     CreateWindow("BUTTON", "Paint", WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON, 20, 70, 120, 40, hwnd, (HMENU)3, NULL, NULL);
//     CreateWindow("BUTTON", "Settings", WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON, 150, 70, 120, 40, hwnd, (HMENU)4, NULL, NULL);
//     CreateWindow("BUTTON", "Exit", WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON, 85, 120, 120, 40, hwnd, (HMENU)5, NULL, NULL);

//     ShowWindow(hwnd, SW_SHOWNORMAL); // Ensure the window is shown normally

//     MSG msg = {0};
//     while (GetMessage(&msg, NULL, 0, 0))
//     {
//         TranslateMessage(&msg);
//         DispatchMessage(&msg);
//     }
// }

// // Function to be executed by the thread to open Notepad
// DWORD WINAPI open_notepad(LPVOID lpParam)
// {
//     system("notepad");
//     return 0;
// }

// // Function to be executed by the thread to open Calculator
// DWORD WINAPI open_calculator(LPVOID lpParam)
// {
//     system("calc");
//     return 0;
// }

// // Function to be executed by the thread to open Paint
// DWORD WINAPI open_paint(LPVOID lpParam)
// {
//     system("mspaint");
//     return 0;
// }

// // Function to be executed by the thread to open Settings
// DWORD WINAPI open_settings(LPVOID lpParam)
// {
//     system("start ms-settings:");
//     return 0;
// }

// int main()
// {
//     create_main_window();
//     return 0;
// }

#include <windows.h>
#include <stdio.h>

// Function prototypes for thread functions
DWORD WINAPI open_notepad(LPVOID lpParam);
DWORD WINAPI open_calculator(LPVOID lpParam);
DWORD WINAPI open_paint(LPVOID lpParam);
DWORD WINAPI open_settings(LPVOID lpParam);

// Window procedure function
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg)
    {
    case WM_COMMAND:
        switch (LOWORD(wParam))
        {
        case 1: // Notepad
            CreateThread(NULL, 0, open_notepad, NULL, 0, NULL);
            break;
        case 2: // Calculator
            CreateThread(NULL, 0, open_calculator, NULL, 0, NULL);
            break;
        case 3: // Paint
            CreateThread(NULL, 0, open_paint, NULL, 0, NULL);
            break;
        case 4: // Settings
            CreateThread(NULL, 0, open_settings, NULL, 0, NULL);
            break;
        case 5: // Exit
            PostQuitMessage(0);
            break;
        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
    return 0;
}

// Function to create the main window and message loop
void create_main_window()
{
    const char CLASS_NAME[] = "Sample Window Class";

    WNDCLASS wc = {0};
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = GetModuleHandle(NULL);
    wc.lpszClassName = CLASS_NAME;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW); // Set a standard cursor

    RegisterClass(&wc);

    HWND hwnd = CreateWindowEx(
        0,
        CLASS_NAME,
        "Application Menu Selector",             // Set the window title
        WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU, // Remove maximize option
        CW_USEDEFAULT, CW_USEDEFAULT, 400, 300,  // Set larger window size
        NULL,
        NULL,
        wc.hInstance,
        NULL);

    if (hwnd == NULL)
    {
        MessageBox(NULL, "Error creating window", "Error", MB_OK | MB_ICONERROR);
        return;
    }

    // Create buttons with updated layout
    CreateWindow("BUTTON", "Notepad", WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON, 30, 30, 150, 50, hwnd, (HMENU)1, NULL, NULL);
    CreateWindow("BUTTON", "Calculator", WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON, 220, 30, 150, 50, hwnd, (HMENU)2, NULL, NULL);
    CreateWindow("BUTTON", "Paint", WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON, 30, 100, 150, 50, hwnd, (HMENU)3, NULL, NULL);
    CreateWindow("BUTTON", "Settings", WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON, 220, 100, 150, 50, hwnd, (HMENU)4, NULL, NULL);
    CreateWindow("BUTTON", "Exit", WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON, 125, 170, 150, 50, hwnd, (HMENU)5, NULL, NULL);

    ShowWindow(hwnd, SW_SHOWNORMAL); // Ensure the window is shown normally

    MSG msg = {0};
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
}

// Function to be executed by the thread to open Notepad
DWORD WINAPI open_notepad(LPVOID lpParam)
{
    system("notepad");
    return 0;
}

// Function to be executed by the thread to open Calculator
DWORD WINAPI open_calculator(LPVOID lpParam)
{
    system("calc");
    return 0;
}

// Function to be executed by the thread to open Paint
DWORD WINAPI open_paint(LPVOID lpParam)
{
    system("mspaint");
    return 0;
}

// Function to be executed by the thread to open Settings
DWORD WINAPI open_settings(LPVOID lpParam)
{
    system("start ms-settings:");
    return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    create_main_window();
    return 0;
}
