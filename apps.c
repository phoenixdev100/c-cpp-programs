#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // Include Windows-specific header

// Function to be executed by the thread to open Notepad
DWORD WINAPI open_notepad(LPVOID lpParam)
{
    printf("Thread: Opening Notepad...\n");
    system("notepad");
    printf("Thread: Notepad closed.\n");
    return 0;
}

// Function to be executed by the thread to open Calculator
DWORD WINAPI open_calculator(LPVOID lpParam)
{
    printf("Thread: Opening Calculator...\n");
    system("calc");
    printf("Thread: Calculator closed.\n");
    return 0;
}

// Function to be executed by the thread to open Paint
DWORD WINAPI open_paint(LPVOID lpParam)
{
    printf("Thread: Opening Paint...\n");
    system("mspaint");
    printf("Thread: Paint closed.\n");
    return 0;
}

// Function to be executed by the thread to open Settings
DWORD WINAPI open_settings(LPVOID lpParam)
{
    printf("Thread: Opening Settings...\n");
    system("start ms-settings:");
    printf("Thread: Settings closed.\n");
    return 0;
}

// Function to create a thread for the specified application
void create_thread(LPTHREAD_START_ROUTINE function)
{
    HANDLE threadHandle;
    DWORD threadId;

    threadHandle = CreateThread(
        NULL,     // Default security attributes
        0,        // Default stack size
        function, // Function to run in the thread
        NULL,     // Parameter to pass to the function
        0,        // Default creation flags
        &threadId // Returns the thread identifier
    );

    if (threadHandle == NULL)
    {
        fprintf(stderr, "Error creating thread\n");
    }
    else
    {
        // Wait for the thread to complete before continuing
        WaitForSingleObject(threadHandle, INFINITE);
        CloseHandle(threadHandle);
    }
}

int main()
{
    int choice;

    while (1)
    {
        // Display the menu
        printf("\nMenu:\n");
        printf("1. Open Notepad\n");
        printf("2. Open Calculator\n");
        printf("3. Open Paint\n");
        printf("4. Open Settings\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            create_thread(open_notepad);
            break;
        case 2:
            create_thread(open_calculator);
            break;
        case 3:
            create_thread(open_paint);
            break;
        case 4:
            create_thread(open_settings);
            break;
        case 5:
            printf("Exiting the application...\n");
            return 0;
        default:
            printf("Invalid choice! Please enter a valid option.\n");
            break;
        }
    }
}
