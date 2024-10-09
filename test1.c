// #include <stdio.h>
// // int main()
// // {
// //     char lowerChar, upperChar;
// //     int ascii;
// //     printf("Enter a lowercase Character: ");
// //     scanf("%c", &lowerChar);
// //     ascii = lowerChar;
// //     upperChar = ascii - 32;
// //     printf("\nIts Uppercase = %c", upperChar);
// //     return 0;
// // }

// // int main()
// // {
// //     char lowerChar, upperChar;
// //     int ascii;
// //     printf("Enter a uppercase Character: ");
// //     scanf("%c", &upperChar);
// //     ascii = upperChar;
// //     lowerChar = ascii + 32;
// //     printf("\nIts lowercase = %c", lowerChar);
// //     return 0;
// // }
// // int main(int argc, char const *argv[])
// // {
// //     int a, b, c, d, e, average, division;
// //     printf("Enter Marks of English: ");
// //     scanf("%d", &a);
// //     printf("Enter Marks of Hindi: ");
// //     scanf("%d", &b);
// //     printf("Enter Marks of Maths: ");
// //     scanf("%d", &c);
// //     printf("Enter Marks of Science: ");
// //     scanf("%d", &d);
// //     printf("Enter Marks of CS: ");
// //     scanf("%d", &e);
// //     average = (a + b + c + d + e) / 5;
// //     printf("Average of all marks is %d.\n", average);
// //     if (average >= 80)
// //     {
// //         printf("You have secured 1st Division.");
// //     }
// //     else if (average >= 65)
// //     {
// //         printf("You have secured 2nd Division.");
// //     }
// //     else if (average >= 50)
// //     {
// //         printf("You have secured 3rd Division.");
// //     }
// //     else
// //     {
// //         printf("OOPS! You got failed in your exams.");
// //     }
// //     return 0;
// // }

// // int main(int argc, char const *argv[])
// // {
// //     char a;
// //     char l1[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
// //     printf("Enter any character: ");
// //     scanf("%c", &a);
// //     if (a == l1)
// //     {
// //         printf("Hello.");
// //     }
// //     else
// //     {
// //         printf("Exit");
// //     }
// //     return 0;
// // }

// #include <string.h>
// int main(int argc, char const *argv[])
// {
//     char alpha[20];
//     int i;
//     printf("Enter the character: ");
//     scanf("%s", alpha);
//     printf("\nEntered Character is %s.", alpha);
//     for (i = 0; i <= strlen(alpha); i++)
//     {
//         if (alpha[i] >= 97 && alpha[i] <= 122)
//         {
//             alpha[i] = alpha[i] - 32;
//             printf("\n\nUppercase Character of entered character is %s.", alpha);
//             break;
//         }
//         else if (alpha[i] >= 65 && alpha[i] <= 90)
//         {
//             alpha[i] = alpha[i] + 32;
//             printf("\n\nLowercase Character of entered character is %s.", alpha);
//             break;
//         }
//         else
//         {
//             printf("\n\nError! You have not entered any character.");
//             break;
//         }
//         break;
//     }
//     return 0;
// }
// #include <stdio.h>
// #include <stdio.h>
// // program of advance calculator system
// int main(int argc, char const *argv[])
// {
//     int a, b, input, sum, sub, multi, div;
//     char decision;
//     printf("\nChoose your desired method.");
//     printf("\nPress 1 for Addition.");
//     printf("\nPress 2 for Subtraction.");
//     printf("\nPress 3 for Multiplication.");
//     printf("\nPress 4 for Division.\n\n");
//     printf("Current input is: ");
//     scanf("%d", &input);
//     printf("\n");
//     switch (input)
//     {
//     case 1:
//         printf("Enter Number 1: ");
//         scanf("%d", &a);
//         printf("Enter Number 2: ");
//         scanf("%d", &b);
//         sum = a + b;
//         printf("Sum of %d and %d is: %d.", a, b, sum);
//         break;
//     case 2:
//         printf("Enter Number 1: ");
//         scanf("%d", &a);
//         printf("Enter Number 2: ");
//         scanf("%d", &b);
//         sub = a - b;
//         printf("Subtraction of %d and %d is: %d.", a, b, sub);
//         break;
//     case 3:
//         printf("Enter Number 1: ");
//         scanf("%d", &a);
//         printf("Enter Number 2: ");
//         scanf("%d", &b);
//         multi = a * b;
//         printf("Multiplication of %d and %d is: %d.", a, b, multi);
//         break;
//     case 4:
//         printf("Enter Number 1: ");
//         scanf("%d", &a);
//         printf("Enter Number 2: ");
//         scanf("%d", &b);
//         div = a / b;
//         printf("Division of %d and %d is: %d.", a, b, div);
//         break;
//     default:
//         printf("\nYou have entered a wrong choice.");
//     }
// }
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a, b, c;
//     printf("Enter length of first side: ");
//     scanf("%d", &a);
//     printf("Enter length of second side: ");
//     scanf("%d", &b);
//     printf("Enter length of third side: ");
//     scanf("%d", &c);
//     if (a == b && a == c && b == c)
//     {
//         printf("Equilateral");
//     }
//     else if (a == b || a == c || b == c)
//     {
//         printf("Isosceles");
//     }
//     else
//     {
//         printf("Scalene");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     double num, sum = 0;

//     printf("Enter numbers (enter 0 to calculate the sum):\n");

//     while (1)
//     {
//         printf("Enter a number: ");
//         scanf("%lf", &num);

//         if (num == 0)
//         {
//             break; // Exit the loop when the user enters 0
//         }

//         sum += num; // Add the entered number to the running sum
//     }

//     printf("Sum of the entered numbers: %lf\n", sum);

//     return 0;
// }

// int main()
// {
//     for (int i = 1; i < 5; i++)
//     {
//         for (int j = 1; j < 5 - i; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main()
// {
//     int num, originalNum, remainder, result = 0;
//     printf("Enter a three-digit integer: ");
//     scanf("%d", &num);
//     originalNum = num;
//     while (originalNum != 0)
//     {
//         remainder = originalNum % 10;
//         result += remainder * remainder * remainder;
//         originalNum /= 10;
//     }
//     if (result == num)
//         printf("%d is an Armstrong number.", num);
//     else
//         printf("%d is not an Armstrong number.", num);
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int m, n, i, j, m1[100][100], m2[100][100], m3[100][100];
//     printf("Enter the number of rows and columns: ");
//     scanf("%d %d", &m, &n);
//     printf("Enter elements of the first matrix:\n");
//     for (i = 0; i < m; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             scanf("%d", &m1[i][j]);
//         }
//     }
//     printf("Enter elements of the second matrix:\n");
//     for (i = 0; i < m; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             scanf("%d", &m2[i][j]);
//         }
//     }
//     for (i = 0; i < m; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             m3[i][j] = m1[i][j] + m2[i][j];
//         }
//     }
//     printf("Sum of the two matrices:\n");
//     for (i = 0; i < m; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             printf("%d ", m3[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }