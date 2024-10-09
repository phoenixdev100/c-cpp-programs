#include <stdio.h>

// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *

// int main(int argc, char const *argv[])
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1 1 1 1 1
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4
// 5 5 5 5 5

// int main(int argc, char const *argv[])
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             printf("%d ", i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

// int main(int argc, char const *argv[])
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// *
// * *
// * * *
// * * * *
// * * * * *

// int main(int argc, char const *argv[])
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// int main(int argc, char const *argv[])
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

// int main(int argc, char const *argv[])
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// * * * *
// * * *
// * *
// *

// int main(int argc, char const *argv[])
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5 - i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1 2 3 4
// 1 2 3
// 1 2
// 1

// int main(int argc, char const *argv[])
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5 - i; j++)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1 1 1 1
// 2 2 2
// 3 3
// 4

// int main(int argc, char const *argv[])
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5 - i; j++)
//         {
//             printf("%d ", i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1
// 1 3
// 1 3 5
// 1 3 5 7
// 1 3 5 7 9

// int main(int argc, char const *argv[])
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", 2 * j - 1);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// A B C D E
// A B C D E
// A B C D E
// A B C D E
// A B C D E

// int main(int argc, char const *argv[])
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         int a = 1;
//         for (int j = 1; j <= 5; j++)
//         {
//             printf("%c ", a + 64);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// A
// A B
// A B C
// A B C D
// A B C D E

// int main(int argc, char const *argv[])
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         int a = 1;
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%c ", a + 64);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

//     *
//     *
// * * * * *
//     *
//     *

// int main(int argc, char const *argv[])
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if (j == 3 || i == 3)
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// * * * * *
// *       *
// *       *
// * * * * *

// int main(int argc, char const *argv[])
// {
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if (j == 1 || i == 1 || j == 5 || i == 4)
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// *       *
//   *   *
//     *
//   *   *
// *       *

// int main(int argc, char const *argv[])
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if (i == j || i + j == 6)
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

// int main(int argc, char const *argv[])
// {
//     int a = 1;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", a);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 5; i++)
    {
        int a = 1;
        for (int j = 1; j <= 5; j++)
        {
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}