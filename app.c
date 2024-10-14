#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

// Function to be executed by the thread
void *open_notepad(void *arg)
{
    printf("Thread: Opening Notepad...\n");
    system("notepad"); // Command to open Notepad on Windows
    printf("Thread: Notepad closed.\n");
    return NULL;
}

int main()
{
    pthread_t thread_id;
    char user_input;

    printf("Main: Starting the program...\n");

    // Create a new thread to run the open_notepad function
    if (pthread_create(&thread_id, NULL, open_notepad, NULL) != 0)
    {
        fprintf(stderr, "Error creating thread\n");
        return 1;
    }

    // Main thread waits for user input to exit
    printf("Main: Press 'q' to exit the application.\n");
    while (1)
    {
        user_input = getchar();
        if (user_input == 'q' || user_input == 'Q')
        {
            printf("Main: Exiting the application...\n");
            break;
        }
    }

    // Wait for the thread to complete before exiting
    pthread_join(thread_id, NULL);

    printf("Main: Program terminated.\n");
    return 0;
}
