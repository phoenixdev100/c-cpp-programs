#include <stdio.h>
#include <string.h>

// program for simple interest

// int main(int argc, char const *argv[])
// {
//     int a;
//     float b;
//     float c;
//     printf("Enter Principal Amount: ");
//     scanf("%d", &a);
//     printf("Enter Rate of Interest without percentage: ");
//     scanf("%f", &b);
//     printf("Enter time period (in yrs): ");
//     scanf("%f", &c);
//     float si = (a * b * c) / 100;
//     printf("Simple Interest is: %f", si);
//     return 0;
// }

// program for sum

// int main(int argc, char const *argv[])
// {
//     int a, b, c, sum;
//     printf("Enter First Number: ");
//     scanf("%d", &a);
//     printf("Enter Second Number: ");
//     scanf("%d", &b);
//     printf("Enter Third Number: ");
//     scanf("%d", &c);
//     sum = (a + b + c);
//     printf("Sum is : %d", sum);
//     return 0;
// }

// program for checking prime number

//  int main()
//  {

//     int n, i, flag = 0;
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     if (n == 0 || n == 1)
//         flag = 1;

//     for (i = 2; i <= n / 2; ++i)
//     {

//         if (n % i == 0)
//         {
//             flag = 1;
//             break;
//         }
//     }

//     if (flag == 0)
//         printf("%d is a prime number.", n);
//     else
//         printf("%d is not a prime number.", n);

//     return 0;
// }

// program to print tables

// int main(int argc, char const *argv[])
// {
//     int a, i, m;
//     printf("Enter the no: ");
//     scanf("%d", &i);
//     for (a = 1; a <= 10; a++)
//     {
//         m = i * a;
//         printf("%d\n", m);
//     }

//     return 0;
// }

// program of addition of numbers.

// int main(int argc, char const *argv[])
// {
//     int a, b, c;
//     printf("Enter Number 1: ");
//     scanf("%d", &a);
//     printf("Enter Number 2: ");
//     scanf("%d", &b);
//     c = a + b;
//     printf("Sum is: %d", c);
//     printf("Congratulations, You hacked NASA!");
//     return 0;
// }

// program for testing while loop

// int main(int argc, char const *argv[])
// {
//     int a = 0;
//     // printf("Enter Number: ");
//     // scanf("%d", &a);
//     while (a <= 100)
//     {
//         printf("Congratulations, You hacked NASA!\n");
//         a++;
//     }

//     return 0;
// }

// program for addition subtraction multiplication and division simultaneously

//  int main(int argc, char const *argv[])
//  {
//      int a, b, sum, sub, multi, div;
//      printf("Enter Number 1: ");
//      scanf("%d", &a);
//      printf("Enter Number 2: ");
//      scanf("%d", &b);
//      sum = a + b, sub = a - b, multi = a * b, div = a / b;
//      printf("Sum is: %d\nSubtraction is: %d\nMultiplication is is: %d\nDivision is: %d", sum, sub, multi, div);
//      return 0;
//  }

// program for going into main function again

// int retrn(int argc, char const *argv[])
// {
//     printf("Do u want to calculate again ? Press Y for Yes or N for no ?");
//     char decision;
//     if (decision == 'Y' || decision == 'y')
//     {
//         goto main();
//     }
//     else
//     {
//     }
//     return 0;
// }

// return main(argc - 1, argv)

// program for a calculator

// int main(int argc, char const *argv[])
// {
//     int a, b, input, sum, sub, multi, div, mod, gt, lcm, swap, area, peri;
//     char decision;
//     printf("Enter Number 1: ");
//     scanf("%d", &a);
//     printf("Enter Number 2: ");
//     scanf("%d", &b);
//     printf("\nChoose your desired method.");
//     printf("\nPress 1 for Addition.");
//     printf("\nPress 2 for Subtraction.");
//     printf("\nPress 3 for Multiplication.");
//     printf("\nPress 4 for Division.");
//     printf("\nPress 5 for Modulus.");
//     printf("\nPress 6 for finding Greater than and Less than.");
//     printf("\nPress 7 for finding LCM.");
//     printf("\nPress 8 for swapping dataues.");
//     printf("\nPress 9 for finding Area.");
//     printf("\nPress 10 for finding Perimeter.\n\n");
//     printf("Current input is: ");
//     scanf("%d", &input);
//     printf("\n");
//     switch (input)
//     {
//     case 1:
//         if (input == 1)
//         {
//             sum = a + b;
//             printf("Sum of %d and %d is: %d.", a, b, sum);
//             break;
//         }
//     case 2:
//         if (input == 2)
//         {
//             sub = a - b;
//             printf("Subtraction of %d and %f is: %d.", a, b, sub);
//             break;
//         }
//     case 3:
//         if (input == 3)
//         {
//             multi = a * b;
//             printf("Multiplication of %d and %d is: %d.", a, b, multi);
//             break;
//         }
//     case 4:
//         if (input == 4)
//         {
//             div = a / b;
//             printf("Division of %d and %d is: %d.", a, b, div);
//             break;
//         }
//     case 5:
//         if (input == 5)
//         {
//             mod = a % b;
//             printf("Modulus of %d and %d is: %d.", a, b, mod);
//             break;
//         }
//     case 6:
//         if (input == 6)
//         {
//             if (a > b)
//             {
//                 printf("%d is greater than %d.", a, b);
//             }
//             else if (a == b)
//             {
//                 printf("%d is equals to %d.", a, b);
//             }
//             else
//             {
//                 printf("%d is greater than %d.", b, a);
//             }
//             break;
//         }
//     case 7:
//         if (input == 7)
//         {
//             lcm = (a > b) ? a : b;
//             while (1)
//             {
//                 if ((lcm % a == 0) && (lcm % b == 0))
//                 {
//                     printf("The LCM of %d and %d is %d.", a, b, lcm);
//                     break;
//                 }
//                 ++lcm;
//             }
//             break;
//         }
//     case 8:
//         if (input == 8)
//         {
//             swap = a, a = b, b = swap;
//             printf("\nAfter swapping, First number is: %d\n.", a);
//             printf("After swapping, Second number is: %d.", b);
//             break;
//         }
//     case 9:
//         if (input == 9)
//         {
//             area = a * b;
//             printf("\nArea of %d and %d is: %d cm^2.", a, b, area);
//             break;
//         }
//     case 10:
//         if (input == 10)
//         {
//             peri = (a + b) * 2;
//             printf("Perimeter of %d and %d is: %d cm^2.", a, b, peri);
//             break;
//         }
//     default:
//         printf("\n");
//         printf("Wrong Entry!\n");
//         printf("Choose input from 1 to 10.");
//         break;
//     }
//     printf("\n");
//     printf("\nDo u want to calculate again ? \nPress 'Y' for Yes or 'N' for no ?\n");
//     printf("\n");
//     printf("Your Input is: ");
//     scanf("%s", &decision);
//     if (decision == 'Y' || decision == 'y')
//     {
//         printf("\nProgram restarted...\n");
//         return main(argc - 1, argv);
//     }
//     else if (decision == 'Yes' || decision == 'yes')
//     {
//         printf("\nProgram restarted...");
//         return main(argc - 1, argv);
//     }
//     else
//     {
//         printf("\nProgram nodeinated Successfully...");
//     }
// }

// program to print hello world

// int main(int argc, char const *argv[])
// {
//     printf("Hello World.");
//     return 0;
// }

// program to print your own name

// int main(int argc, char const *argv[])
// {
//     printf("My name is Deepak.");
//     return 0;
//}

// program to print number entered by user

// int main(int argc, char const *argv[])
// {
//     int a;
//     printf("Enter Number: ");
//     scanf("%d", &a);
//     printf("Number entered by user is: %d", a);
//     return 0;
// }

// program for addition of numbers

// int main(int argc, char const *argv[])
// {
//     int a, b, sum;
//     printf("Enter first number: ");
//     scanf("%d", &a);
//     printf("Enter second number: ");
//     scanf("%d", &b);
//     sum = a + b;
//     printf("Sum of %d and %d is: %d", a, b, sum);
//     return 0;
// }

// program for checking prime number

// int main(int argc, char const *argv[])
// {

//     int n, i, prime = 0;
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     if (n == 0 || n == 1)
//         prime = 1;

//     for (i = 2; i <= n / 2; ++i)
//     {

//         if (n % i == 0)
//         {
//             prime = 1;
//             break;
//         }
//     }

//     if (prime == 0)
//         printf("%d is a prime number.", n);
//     else
//         printf("%d is not a prime number.", n);

//     return 0;
// }

// program for multiplyibg float numbers

//  int main(int argc, char const *argv[])
//  {
//      float a, b, multiply;
//      printf("Enter Number 1: ");
//      scanf("%f", &a);
//      printf("Enter Number 2: ");
//      scanf("%f", &b);
//      multiply = a * b;
//      printf("Multiplication of %f and %f is: %f", a, b, multiply);
//      return 0;
//  }

// program to pint ascii dataue of a character

// int main(int argc, char const *argv[])
// {
//     char a;
//     printf("Enter Character: ");
//     scanf("%c", &a);
//     printf("The ASCII dataue of %c is %d.", a, a);
//     return 0;
// }

// Program to Calculate Fahrenheit to Celsius

// int main(int argc, char const *argv[])
// {
//     float a, f;
//     printf("Enter the temp in *F: ");
//     scanf("%f", &a);
//     f = (a - 32) * 5 / 9;
//     printf("Temperature in *C is: %f", f);
//     return 0;
// }

//  Program to Find the Size of int, float, double, and char

// int main(int argc, char const *argv[])
// {
//     int i;
//     char c;
//     float f;
//     double d;
//     printf("Size of int is: %ld\n", sizeof(i));
//     printf("Size of char is: %ld\n", sizeof(c));
//     printf("Size of float is: %ld\n", sizeof(f));
//     printf("Size of double is: %ld\n", sizeof(d));
//     return 0;
// }

// Program to Add Two Complex Numbers
//
// int main(int argc, char const *argv[])
// {
//     double principal = 10000;
//     double rate = 5;
//     double time = 2;
//     double Amount = principal * ((pow((1 + rate / 100), time)));
//     double CI = Amount - principal;
//     printf("Compound Interest is : %lf", CI);
//     return 0;
// }

// Program to add two complex numbers

// #include <stdio.h>

// // define a structure for complex number
// typedef struct complexNumber
// {
//     int real;
//     int img;
// } complex;

// // This function accepts two complex numbers
// // as parameter and return addition of
// // them.
// complex add(complex x, complex y);

// // Driver code
// int main()
// {
//     // Define three complex type numbers
//     complex a, b, sum;

//     // First complex number
//     a.real = 2;
//     a.img = 3;

//     // Second complex number
//     b.real = 4;
//     b.img = 5;

//     // Print first complex number
//     printf("\n a = %d + %di", a.real, a.img);

//     // print second complex number
//     printf("\n b = %d + %di", b.real, b.img);

//     // call add(a,b) function and
//     // pass complex numbers a & b
//     // as an parameter.
//     sum = add(a, b);

//     // Print result
//     printf("\n sum = %d + %di", sum.real, sum.img);

//     return 0;
// }

// // Complex add(complex x, complex y)
// // function definition
// complex add(complex x, complex y)
// {
//     // Define a new complex number.
//     complex add;

//     // Add real part of a&b
//     add.real = x.real + y.real;

//     // Add Imaginary part of a&b
//     add.img = x.img + y.img;

//     return (add);
// }

// Program to display prime numbers from 1 to n.

// C program to print Prime numbers till N

// #include <stdbool.h>

// // This function is to check
// // if a given number is prime
// bool isPrime(int n)
// {
//     // since 0 and 1 is not prime
//     // number return false.
//     if (n == 1 || n == 0)
//         return false;

//     // Run a loop from 2 to n/2
//     for (int i = 2; i <= n / 2; i++)
//     {

//         // if the number is divisible by i, then n is not a
//         // prime number, otherwise n is prime number.
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }

// // Driver code
// int main()
// {
//     int N = 50;

//     // check for the every number from 1 to N
//     for (int i = 1; i <= N; i++)
//     {

//         // check if i (current number) is prime
//         if (isPrime(i))
//         {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }

// Program to convert length from metres to centimetres

// int main(int argc, char const *argv[])
// {
//     int len, len2;
//     printf("Enter length (in metres): ");
//     scanf("%d", &len);
//     len2 = 100 * len;
//     printf("Length of %dm in cm is %dcm.", len, len2);
//     return 0;
// }

// Program to check greater than or less than

// int main(int argc, char const *argv[])
// {
//     int a, b;
//     printf("Enter First Number: ");
//     scanf("%d", &a);
//     printf("Enter Second Number: ");
//     scanf("%d", &b);
//     if (a > b)
//     {
//         printf("%d is greater than %d.", a, b);
//     }
//     else
//     {
//         printf("%d is greater than %d.", b, a);
//     }
//     return 0;
// }

// Fibonacci Series

// int main()
// {
//     int n, a = 0, b = 1, c, i;

//     printf("Enter the number of nodes: ");
//     scanf("%d", &n);

//     printf("The first %d nodes of the Fibonacci series are: \n", n);

//     for (i = 0; i < n; i++)
//     {
//         if (i <= 1)
//             c = i;
//         else
//         {
//             c = a + b;
//             a = b;
//             b = c;
//         }
//         printf("%d\n", c);
//     }
//     return 0;
// }

// Program to reverse a number
// num%10

// #include <stdio.h>

// int main()
// {

//     int n, reverse = 0, remainder;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     while (n != 0)
//     {
//         remainder = n % 10;
//         reverse = reverse * 10 + remainder;
//         n /= 10;
//     }
//     printf("Reversed number = %d", reverse);
//     return 0;
// }

// Program to find greatest or smallest element in an array

// int main()
// {
//     int arr[10], i, n, min, max;

//     printf("Enter size of the array : ");
//     scanf("%d", &n);

//     printf("Enter elements in array : ");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     min = max = arr[0];
//     for (i = 1; i < n; i++)
//     {
//         if (min > arr[i])
//         {
//             min = arr[i];
//         }
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     printf("minimum of array is : %d", min);
//     printf("\nmaximum of array is : %d", max);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int m, n, p, q, m1[100][100], m2[100][100], m3[100][100];
//     printf("Enter the number of rows and columns for the first Matrix: ");
//     scanf("%d %d", &m, &n);
//     printf("Enter the number of rows and columns for the second Matrix: ");
//     scanf("%d %d", &p, &q);
//     if (n != p)
//     {
//         printf("Matrix multiplication is not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
//         return 1;
//     }
//     printf("Enter elements of the first matrix:\n");
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &m1[i][j]);
//         }
//     }
//     printf("Enter elements of the second matrix:\n");
//     for (int i = 0; i < p; i++)
//     {
//         for (int j = 0; j < q; j++)
//         {
//             scanf("%d", &m2[i][j]);
//         }
//     }
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < q; j++)
//         {
//             m3[i][j] = 0;
//         }
//     }
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < q; j++)
//         {
//             for (int k = 0; k < n; k++)
//             {
//                 m3[i][j] += m1[i][k] * m2[k][j];
//             }
//         }
//     }
//     printf("Resultant matrix after multiplication:\n");
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < q; j++)
//         {
//             printf("%d ", m3[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
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
//     printf("Sum of the two matrix:\n");
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

// #include <stdio.h>
// int main()
// {
//     int m, n, m1[100][100], tm[100][100];
//     printf("Enter the number of rows and columns: ");
//     scanf("%d %d", &m, &n);
//     printf("Enter elements of the m1:\n");
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &m1[i][j]);
//         }
//     }
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             tm[j][i] = m1[i][j];
//         }
//     }
//     printf("Original Matrix:\n");
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%d ", m1[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Transpose of Matrix:\n");
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             printf("%d ", tm[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main()
// {
//     printf("Hello, World!");
// }

// void main()
// {
//     int students[10];
//     int sum = 0, i;
//     printf("Enter marks of 10 students\n: ");
//     for (i = 0; i < 10; i++)
//     {
//         printf("Enter marks of student: %d", i + 1);
//         scanf("%d", &students[i]);
//         sum += students[i];
//     }

//     int average = sum / 10;
//     printf("Average Marks: %d", average);
// }

#include <stdio.h>

// // Function to accept matrix from the user
// void acceptMatrix(int rows, int cols, int matrix[rows][cols])
// {
//     printf("Enter the matrix elements:\n");
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             printf("Enter element at position (%d, %d): ", i + 1, j + 1);
//             scanf("%d", &matrix[i][j]);
//         }
//     }
// }

// // Function to display a matrix
// void displayMatrix(int rows, int cols, int matrix[rows][cols])
// {
//     printf("Matrix:\n");
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             printf("%d\t", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// // Function to perform matrix multiplication
// void multiplyMatrices(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols2])
// {
//     if (cols1 != rows2)
//     {
//         printf("Matrices are not compatible for multiplication.\n");
//         return;
//     }

//     for (int i = 0; i < rows1; i++)
//     {
//         for (int j = 0; j < cols2; j++)
//         {
//             result[i][j] = 0;
//             for (int k = 0; k < cols1; k++)
//             {
//                 result[i][j] += matrix1[i][k] * matrix2[k][j];
//             }
//         }
//     }
// }

// // Function to find min and max elements in the matrix
// void findMinMax(int rows, int cols, int matrix[rows][cols], int *min, int *max)
// {
//     *min = matrix[0][0];
//     *max = matrix[0][0];

//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             if (matrix[i][j] < *min)
//             {
//                 *min = matrix[i][j];
//             }
//             if (matrix[i][j] > *max)
//             {
//                 *max = matrix[i][j];
//             }
//         }
//     }
// }

// // Function to find sum of boundary elements in the matrix
// int sumBoundaryElements(int rows, int cols, int matrix[rows][cols])
// {
//     int sum = 0;

//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             if (i == 0 || j == 0 || i == rows - 1 || j == cols - 1)
//             {
//                 sum += matrix[i][j];
//             }
//         }
//     }

//     return sum;
// }

// int main()
// {
//     int rows1, cols1, rows2, cols2;

//     printf("Enter the number of rows and columns for matrix 1: ");
//     scanf("%d %d", &rows1, &cols1);

//     printf("Enter the number of rows and columns for matrix 2: ");
//     scanf("%d %d", &rows2, &cols2);

//     int matrix1[rows1][cols1], matrix2[rows2][cols2], result[rows1][cols2];

//     acceptMatrix(rows1, cols1, matrix1);
//     acceptMatrix(rows2, cols2, matrix2);

//     printf("Matrix 1:\n");
//     displayMatrix(rows1, cols1, matrix1);

//     printf("Matrix 2:\n");
//     displayMatrix(rows2, cols2, matrix2);

//     multiplyMatrices(rows1, cols1, matrix1, rows2, cols2, matrix2, result);

//     printf("Product of matrices:\n");
//     displayMatrix(rows1, cols2, result);

//     int min, max;
//     findMinMax(rows1, cols2, result, &min, &max);

//     printf("Minimum element in the product matrix: %d\n", min);
//     printf("Maximum element in the product matrix: %d\n", max);

//     int sum = sumBoundaryElements(rows1, cols2, result);
//     printf("Sum of boundary elements in the product matrix: %d\n", sum);

//     return 0;
// }

// #include <stdio.h>

// int searchInsert(int *nums, int numsSize, int target)
// {
//     int left = 0, right = numsSize - 1, mid;

//     while (left <= right)
//     {
//         mid = left + (right - left) / 2; // Avoid potential overflow
//         if (nums[mid] == target)
//         {
//             return mid;
//         }
//         else if (nums[mid] < target)
//         {
//             left = mid + 1;
//         }
//         else
//         {
//             right = mid - 1;
//         }
//     }
//     return left; // The correct position to insert if not found
// }

// int main()
// {
//     int nums1[] = {1, 3, 5, 6};
//     int target1 = 5;
//     int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
//     printf("Example 1: %d\n", searchInsert(nums1, numsSize1, target1));

//     // int nums2[] = {1, 3, 5, 6};
//     // int target2 = 2;
//     // int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
//     // printf("Example 2: %d\n", searchInsert(nums2, numsSize2, target2));

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char s[] = "   fly me   to   the moon  ";
//     int length = strlen(s); // Get the length of the string
//     int count = 0;          // To count the length of the last word

//     // Start from the end of the string and move backwards to skip trailing spaces
//     int i;
//     for (i = length - 1; i >= 0 && s[i] == ' '; i--)
//         ;

//     // Continue moving backwards and count the length of the last word
//     for (; i >= 0 && s[i] != ' '; i--, count++)
//         ;

//     printf("Output: %d\n", count); // Print the length of the last word

//     return 0;
// }

// #include <stdio.h>
// #include <limits.h> // For INT_MIN

// int main()
// {
//     int n, i;
//     int firstLargest = INT_MIN, secondLargest = INT_MIN;

//     // Input number of elements
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);

//     int arr[n]; // Create an array with the specified number of elements

//     // Input elements
//     printf("Enter the elements: ");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     // Display the entered numbers
//     printf("The numbers you entered are: ");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     // Find the first and second largest numbers
//     for (i = 0; i < n; i++)
//     {
//         if (arr[i] > firstLargest)
//         {
//             secondLargest = firstLargest;
//             firstLargest = arr[i];
//         }
//         else if (arr[i] > secondLargest && arr[i] < firstLargest)
//         {
//             secondLargest = arr[i];
//         }
//     }

//     // Assuming the array contains at least two different numbers
//     if (secondLargest == INT_MIN)
//     {
//         printf("All numbers are the same or there's only one number.\n");
//     }
//     else
//     {
//         printf("The largest of these numbers is: %d\n", firstLargest);
//         printf("The second largest of these numbers is: %d\n", secondLargest);
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[100];
//     int i, len, flag = 1;

//     printf("Enter a string: ");
//     scanf("%[^\n]s", str);

//     len = strlen(str);

//     // Reverse the string
//     for (i = 0; i < len / 2; i++)
//     {
//         char temp = str[i];
//         str[i] = str[len - i - 1];
//         str[len - i - 1] = temp;
//     }

//     printf("Reversed string: %s\n", str);

//     // Check if the reversed string is equal to the original string
//     for (i = 0; i < len / 2; i++)
//     {
//         if (str[i] != str[len - i - 1])
//         {
//             flag = 0;
//             break;
//         }
//     }

//     if (flag)
//     {
//         printf("The string is a palindrome.\n");
//     }
//     else
//     {
//         printf("The string is not a palindrome.\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// // Define a node in the linked list
// struct Node
// {
//     int data;
//     struct Node *next;
// };

// // Function to insert a new node at the beginning of a linked list
// void push(struct Node **head_ref, int new_data)
// {
//     // Allocate memory for new node
//     struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

//     // Assign data to the new node
//     new_node->data = new_data;

//     // Set the next of new node as current head
//     new_node->next = *head_ref;

//     // Move the head to point to the new node
//     *head_ref = new_node;
// }

// // Function to check if the linked list is sorted in ascending order
// int isSorted(struct Node *head)
// {
//     // If the list is empty or has only one element, it is considered sorted
//     if (head == NULL || head->next == NULL)
//     {
//         return 1;
//     }

//     struct Node *current = head;

//     // Traverse the linked list
//     while (current->next != NULL)
//     {
//         // If the current node's data is greater than the next node's data, the list is not sorted
//         if (current->data > current->next->data)
//         {
//             return 0;
//         }
//         current = current->next;
//     }

//     return 1;
// }

// // Main function
// int main()
// {
//     // Create a sorted linked list 1->2->3->4->5
//     struct Node *sorted_head = NULL;
//     push(&sorted_head, 5);
//     push(&sorted_head, 4);
//     push(&sorted_head, 3);
//     push(&sorted_head, 2);
//     push(&sorted_head, 1);

//     // Check if the sorted linked list is sorted
//     if (isSorted(sorted_head))
//     {
//         printf("The linked list is sorted.\n");
//     }
//     else
//     {
//         printf("The linked list is not sorted.\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>

// // Define a node in the linked list
// struct node
// {
//     int data;
//     struct node *next;
// };

// // Function to insert a new node at the beginning of a linked list
// void push(struct node **head_ref, int new_data)
// {
//     // Allocate memory for new node
//     struct node *new_node = (struct node *)malloc(sizeof(struct node));

//     // Assign data to the new node
//     new_node->data = new_data;

//     // Set the next of new node as current head
//     new_node->next = *head_ref;

//     // Move the head to point to the new node
//     *head_ref = new_node;
// }

// // Function to reverse a linked list
// struct node *reverseList(struct node *head)
// {
//     struct node *prev = NULL;
//     struct node *current = head;

//     while (current != NULL)
//     {
//         struct node *next_node = current->next;
//         current->next = prev;
//         prev = current;
//         current = next_node;
//     }

//     return prev;
// }

// // Function to find the middle of a linked list
// struct node *findMiddle(struct node *head)
// {
//     struct node *slow = head;
//     struct node *fast = head;

//     while (fast != NULL && fast->next != NULL)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     return slow;
// }

// // Function to check if a linked list is a palindrome
// bool isPalindrome(struct node *head)
// {
//     if (head == NULL || head->next == NULL)
//     {
//         return true;
//     }

//     // Find the middle of the linked list
//     struct node *middle = findMiddle(head);

//     // Reverse the second half of the linked list
//     struct node *reversed = reverseList(middle);

//     // Compare the first half with the reversed second half
//     struct node *current = head;
//     while (reversed != NULL)
//     {
//         if (current->data != reversed->data)
//         {
//             return false;
//         }
//         current = current->next;
//         reversed = reversed->next;
//     }

//     return true;
// }

// // Function to print the linked list
// void printList(struct node *node)
// {
//     while (node != NULL)
//     {
//         printf("%d ", node->data);
//         node = node->next;
//     }
//     printf("\n");
// }

// // Main function
// int main()
// {
//     // Create a palindrome linked list [1,2,2,1]
//     struct node *head1 = NULL;
//     push(&head1, 1);
//     push(&head1, 2);
//     push(&head1, 2);
//     push(&head1, 1);

//     printf("Palindrome linked list: ");
//     printList(head1);

//     if (isPalindrome(head1))
//     {
//         printf("The linked list is a palindrome.\n");
//     }
//     else
//     {
//         printf("The linked list is not a palindrome.\n");
//     }

//     // Create a non-palindrome linked list [1,2]
//     struct node *head2 = NULL;
//     push(&head2, 2);
//     push(&head2, 1);

//     printf("\nNon-palindrome linked list: ");
//     printList(head2);

//     if (isPalindrome(head2))
//     {
//         printf("The linked list is a palindrome.\n");
//     }
//     else
//     {
//         printf("The linked list is not a palindrome.\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// // Define a node in the linked list
// struct node
// {
//     int data;
//     struct node *next;
// };

// // Function to insert a new node at the beginning of a linked list
// void push(struct node **head_ref, int new_data)
// {
//     // Allocate memory for new node
//     struct node *new_node = (struct node *)malloc(sizeof(struct node));

//     // Assign data to the new node
//     new_node->data = new_data;

//     // Set the next of new node as current head
//     new_node->next = *head_ref;

//     // Move the head to point to the new node
//     *head_ref = new_node;
// }

// // Function to swap the dataues of the kth node from the beginning and the kth node from the end
// struct node *swapNodes(struct node *head, int k)
// {
//     // Find the length of the linked list
//     int length = 0;
//     struct node *current = head;
//     while (current != NULL)
//     {
//         length++;
//         current = current->next;
//     }

//     // Find the kth node from the beginning
//     struct node *kth_from_beginning = head;
//     for (int i = 1; i < k; i++)
//     {
//         kth_from_beginning = kth_from_beginning->next;
//     }

//     // Find the kth node from the end
//     struct node *kth_from_end = head;
//     for (int i = 0; i < length - k; i++)
//     {
//         kth_from_end = kth_from_end->next;
//     }

//     // Swap the dataues of the kth nodes
//     int temp = kth_from_beginning->data;
//     kth_from_beginning->data = kth_from_end->data;
//     kth_from_end->data = temp;

//     return head;
// }

// // Function to print the linked list
// void printList(struct node *node)
// {
//     while (node != NULL)
//     {
//         printf("%d ", node->data);
//         node = node->next;
//     }
//     printf("\n");
// }

// Main function
// int main()
// {
//     // Create a linked list [1,2,3,4,5]
//     struct node *head1 = NULL;
//     push(&head1, 5);
//     push(&head1, 4);
//     push(&head1, 3);
//     push(&head1, 2);
//     push(&head1, 1);

//     printf("Original linked list: ");
//     printList(head1);

//     // Swap the dataues of the kth nodes (k=2)
//     head1 = swapNodes(head1, 2);

//     printf("Linked list after swapping (k=2): ");
//     printList(head1);

// Create a linked list [7,9,6,6,7,8,3,0,9,5]
// struct node *head2 = NULL;
// push(&head2, 5);
// push(&head2, 9);
// push(&head2, 0);
// push(&head2, 3);
// push(&head2, 8);
// push(&head2, 7);
// push(&head2, 6);
// push(&head2, 6);
// push(&head2, 9);
// push(&head2, 7);

// printf("\nOriginal linked list: ");
// printList(head2);

// // Swap the dataues of the kth nodes (k=5)
// head2 = swapNodes(head2, 5);

// printf("Linked list after swapping (k=5): ");
// printList(head2);

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// // Structure to represent a node in a polynomial
// typedef struct node
// {
//     int coeff;         // Coefficient of the node
//     int exp;           // Exponent of the node
//     struct node *next; // Pointer to the next node in the polynomial
// } node;

// // Function to evaluate a polynomial at a given value of x
// int evaluatePolynomial(node *poly, int x)
// {
//     int result = 0;
//     node *currentnode = poly;

//     while (currentnode != NULL)
//     {
//         result += currentnode->coeff * pow(x, currentnode->exp);
//         currentnode = currentnode->next;
//     }

//     return result;
// }

// // Function to multiply two polynomials
// node *multiplyPolynomials(node *poly1, node *poly2)
// {
//     node *result = NULL;
//     node *temp, *currentnode1, *currentnode2;

//     currentnode1 = poly1;
//     while (currentnode1 != NULL)
//     {
//         currentnode2 = poly2;
//         while (currentnode2 != NULL)
//         {
//             int coeff = currentnode1->coeff * currentnode2->coeff;
//             int exp = currentnode1->exp + currentnode2->exp;

//             // Insert the node into the result polynomial
//             temp = (node *)malloc(sizeof(node));
//             temp->coeff = coeff;
//             temp->exp = exp;
//             temp->next = NULL;

//             // Add the node to the result polynomial
//             if (result == NULL)
//             {
//                 result = temp;
//             }
//             else
//             {
//                 node *last = result;
//                 while (last->next != NULL)
//                 {
//                     last = last->next;
//                 }
//                 last->next = temp;
//             }

//             currentnode2 = currentnode2->next;
//         }
//         currentnode1 = currentnode1->next;
//     }

//     return result;
// }

// // Function to create a new node in a polynomial
// node *createnode(int coeff, int exp)
// {
//     node *newnode = (node *)malloc(sizeof(node));
//     newnode->coeff = coeff;
//     newnode->exp = exp;
//     newnode->next = NULL;
//     return newnode;
// }

// // Function to display a polynomial
// void displayPolynomial(node *poly)
// {
//     node *currentnode = poly;
//     while (currentnode != NULL)
//     {
//         printf("%dx^%d ", currentnode->coeff, currentnode->exp);
//         currentnode = currentnode->next;
//         if (currentnode != NULL)
//         {
//             printf("+ ");
//         }
//     }
//     printf("\n");
// }

// int main()
// {
//     // Create polynomials
//     node *poly1 = createnode(3, 2);
//     poly1->next = createnode(4, 1);
//     poly1->next->next = createnode(5, 0);

//     node *poly2 = createnode(2, 1);
//     poly2->next = createnode(3, 0);

//     // Display polynomials
//     printf("Polynomial 1: ");
//     displayPolynomial(poly1);

//     printf("Polynomial 2: ");
//     displayPolynomial(poly2);

//     // Evaluate polynomial 1 at x=2
//     int x = 2;
//     int result = evaluatePolynomial(poly1, x);
//     printf("Value of polynomial 1 at x=%d: %d\n", x, result);

//     // Multiply polynomials
//     node *product = multiplyPolynomials(poly1, poly2);
//     printf("Product of polynomials: ");
//     displayPolynomial(product);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node in the doubly linked list
typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
} Node;

// Function to create a new node with given data
Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

// Function to append a node to the end of the doubly linked list
void append(Node **head, int data)
{
    Node *newNode = createNode(data);
    Node *last = *head;

    // If the linked list is empty, then make the new node as head
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    // Otherwise, traverse till the last node
    while (last->next != NULL)
    {
        last = last->next;
    }

    // Change the next of last node
    last->next = newNode;

    // Make last node as previous of new node
    newNode->prev = last;
}

// Function to display the doubly linked list
void displayList(Node *node)
{
    Node *last;
    printf("\nTraversal in forward direction \n");
    while (node != NULL)
    {
        printf(" %d ", node->data);
        last = node;
        node = node->next;
    }
}

// Function to concatenate two doubly linked lists
void concatenate(Node **first, Node **second)
{
    Node *temp = *first;

    // If the first list is empty
    if (*first == NULL)
    {
        *first = *second;
        return;
    }

    // Traverse the first list and find the last node
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // Connect the last node of first list to the first node of second list
    temp->next = *second;

    // If second list is not empty, then set its previous link
    if (*second != NULL)
    {
        (*second)->prev = temp;
    }
}

int main()
{
    Node *first = NULL;
    Node *second = NULL;

    // Append nodes to the first list
    append(&first, 1);
    append(&first, 2);
    append(&first, 3);

    // Append nodes to the second list
    append(&second, 4);
    append(&second, 5);

    printf("First Doubly Linked List:");
    displayList(first);

    printf("\nSecond Doubly Linked List:");
    displayList(second);

    // Concatenate the two lists
    concatenate(&first, &second);

    printf("\nConcatenated Doubly Linked List:");
    displayList(first);

    return 0;
}
