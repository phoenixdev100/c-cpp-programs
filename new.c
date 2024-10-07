// #include <stdio.h>
// int getElementValue(int arr[], int index)
// {
//     return arr[index];
// }
// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int index = 2;
//     printf("Array elements: ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     int value = getElementValue(arr, index);
//     printf("Value at index %d: %d\n", index, value);
//     return 0;
// }

// #include <stdio.h>
// int array(int *arr, int size, int index)
// {
//     if (index < size)
//     {
//         return *(arr + index);
//     }
//     else
//     {
//         printf("Error!\n");
//         return -1;
//     }
// }
// int main()
// {
//     int arr[10], i, index;
//     printf("Enter elements in array: ");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int size = sizeof(arr) / sizeof(arr[0]);
//     printf("Enter index on which u want value: ");
//     scanf("%d", &index);
//     printf("Array elements: ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     int value = array(arr, size, index);
//     if (value != -1)
//     {
//         printf("Value at index %d: %d\n", index, value);
//     }
//     return 0;
// }

int main()
{
    // clrscr();
    int a, b, c;
    char decision;
    int i, input;
    printf("Enter no of nodes to be create: ");
    scanf("%d", &input);
    for (i = 0; i < input; i++)
    {
        append();
    }
    display();

    printf("\nChoose your desired method.");
    printf("\nPress 1 for displaying Linked List.");
    printf("\nPress 2 for finding length of Linked List.");
    printf("\nPress 3 for inserting element at stating of Linked List.");
    printf("\nPress 4 for inserting element at ending of Linked List.");
    printf("\nPress 5 for inserting element before a node (specify location).");
    printf("\nPress 6 for inserting element after a node (specify location).");
    printf("\nPress 7 for deleting element at stating of Linked List.");
    printf("\nPress 8 for deleting element at ending of Linked List.");
    printf("\nPress 9 for deleting element before a node (specify location).");
    printf("\nPress 10 for deleting element after a node (specify location).");
    printf("\nPress 11 for reversing Linked list.");
    printf("\nCurrent input is: ");
    scanf("%d", &a);
    printf("\n");
    switch (a)
    {
    case 1:
        display();
        break;

    case 2:
        length();
        break;

    case 3:
        insertatbegin();
        break;

    case 4:
        append();
        break;

    case 5:
        addbefore();
        break;

    case 6:
        addafter();
        break;

    case 7:
        deletefrombegin();
        break;

    case 8:
        deletefromend();
        break;

    case 9:
        deletebefore();
        break;

    case 10:
        deleteafter();
        break;

    default:
        printf("Wrong input");
        printf("Choose input from 1 to 4.");
        break;
    }

    printf("\n");
    printf("\nDo u want to calculate again ? \nPress 'Y' or 'y' for Yes or 'N' or 'n' for no ?\n");
    printf("\n");
    printf("Your Input is: ");
    scanf("%s", &decision);

    if ((decision == 'Y' || decision == 'y'))
    {
        printf("\nProgram restarted...\n");
        return main();
    }
    else
    {
        printf("\nProgram Terminated Successfully...");
    }
    printf("\n");
}