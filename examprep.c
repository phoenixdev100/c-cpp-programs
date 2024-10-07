#include <stdio.h>

// Linear Search

// int main(int argc, char const *argv[])
// {
//     int a[5], value, flag = 0;
//     printf("Enter elements in array\n");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Enter value to search: ");
//     scanf("%d", &value);
//     for (int i = 0; i < 5; i++)
//     {
//         if (a[i] == value)
//         {
//             printf("Location of element is %d", i + 1);
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 0)
//     {
//         printf("Element not found");
//     }
// }

// Binary Search

int main(int argc, char const *argv[])
{
    int length = 0;
    char str[] = "Hello World!";
    while (str[length] != '\0')
    {
        length++;
    }
    printf("%d", length);
    return 0;
}