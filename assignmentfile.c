// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a, b, sum;
//     printf("Enter first numbers ");
//     scanf("%d", &a);
//     printf("Enter Second Number: ");
//     scanf("%d", &b);
//     sum = a + b;
//     printf("Sum of %d and %d is %d.", a, b, sum);
//     return 0;
// }

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a, b, sum, sub, multi, div;
//     printf("Enter Number 1: ");
//     scanf("%d", &a);
//     printf("Enter Number 2: ");
//     scanf("%d", &b);
//     sum = a + b, sub = a - b, multi = a * b, div = a / b;
//     printf("Sum is: %d\nSubtraction is: %d\nMultiplication is is: %d\nDivision is: %d", sum, sub, multi, div);
//     return 0;
// }

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     float a, f;
//     printf("Enter the temp in *c: ");
//     scanf("%f", &a);
//     f = (a * 9 / 5) + 32;
//     printf("Temperature in *f is: %.2f", f);
//     return 0;
// }

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a, b, swap;
//     printf("Enter Number 1: ");
//     scanf("%d", &a);
//     printf("Enter Number 2: ");
//     scanf("%d", &b);
//     swap = a, a = b, b = swap;
//     printf("\nAfter swapping, First number is: %d\n.", a);
//     printf("After swapping, Second number is: %d.", b);
//     return 0;
// }

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a, b;
//     printf("Enter Number 1: ");
//     scanf("%d", &a);
//     printf("Enter Number 2: ");
//     scanf("%d", &b);
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("\nAfter swapping, First number is: %d\n.", a);
//     printf("After swapping, Second number is: %d.", b);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     printf("Enter three different numbers: ");
//     scanf("%d %d %d", &a, &b, &c);
//     if (a >= b && a >= c)
//         printf("%d is the largest number.", a);
//     if (b >= a && b >= c)
//         printf("%d is the largest number.", b);
//     if (c >= a && c >= b)
//         printf("%d is the largest number.", c);
//     return 0;
// }

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     char a;
//     printf("Enter any character: ");
//     scanf("%c", &a);
//     if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
//     {
//         printf("%c is a vowel.", a);
//     }
//     else
//     {
//         printf("%c is not a vowel.\n", a);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);
//     if (year % 400 == 0)
//     {
//         printf("%d is a leap year.", year);
//     }
//     else if (year % 100 == 0)
//     {
//         printf("%d is not a leap year.", year);
//     }
//     else if (year % 4 == 0)
//     {
//         printf("%d is a leap year.", year);
//     }
//     else
//     {
//         printf("%d is not a leap year.", year);
//     }
//     return 0;
// }

// #include <stdio.h>
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
// #include <math.h>
// int main()
// {
//     float a, b, c, discriminant, root1, root2, realPart, imagPart;
//     printf("Enter coefficients a (x^2), b (x) and c: ");
//     scanf("%f %f %f", &a, &b, &c);

//     discriminant = (b * b) - (4 * a * c);

//     // condition for real and different roots
//     if (discriminant > 0)
//     {
//         root1 = (-b + sqrt(discriminant)) / (2 * a);
//         root2 = (-b - sqrt(discriminant)) / (2 * a);
//         printf("root1 = %f and root2 = %f", root1, root2);
//     }

//     // condition for real and equal roots
//     else if (discriminant == 0)
//     {
//         root1 = root2 = -b / (2 * a);
//         printf("root1 = root2 = %f.", root1);
//     }

//     // if roots are not real
//     else
//     {
//         // realPart = -b / (2 * a);
//         // imagPart = sqrt(-discriminant) / (2 * a);
//         printf("Roots are imaginary.");
//         // printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a, b, c, d, e, average;
//     printf("Enter Marks of English: ");
//     scanf("%d", &a);
//     printf("Enter Marks of Hindi: ");
//     scanf("%d", &b);
//     printf("Enter Marks of Maths: ");
//     scanf("%d", &c);
//     printf("Enter Marks of Science: ");
//     scanf("%d", &d);
//     printf("Enter Marks of CS: ");
//     scanf("%d", &e);
//     average = (a + b + c + d + e) / 5;
//     printf("Average of all marks is %d.\n", average);
//     if (average >= 80)
//     {
//         printf("You have secured 1st Division.");
//     }
//     else if (average >= 65)
//     {
//         printf("You have secured 2nd Division.");
//     }
//     else if (average >= 50)
//     {
//         printf("You have secured 3rd Division.");
//     }
//     else
//     {
//         printf("OOPS! You got failed in your exams.");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int choice, num, num1;
//     printf("Press 1 to calculate area of circle\n");
//     printf("Press 2 to calculate area of square\n");
//     printf("Press 3 to calculate area of triangle\n");
//     printf("Enter your choice:\n");
//     scanf("%d", choice);
//     switch (choice)
//     {
//     case 1:
//     {
//         printf("Enter radius:\n");
//         scanf("%d", &num);
//         printf("Area of Circle = %d", 3.14 * num * num);
//         break;
//     }
//     case 2:
//     {
//         printf("Enter side of square:\n");
//         scanf("%d", &num);
//         printf("Area of Square = %d", num * num);
//         break;
//     }
//     case 3:
//     {
//         printf("Enter value of base:\n");
//         scanf("%d", &num);
//         printf("Enter value of height: ");
//         scanf("%d", &num1);
//         printf("Area of triangle= %d", num * num1 / 2);
//         break;
//     }
//     default:
//         printf("wrong Input\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a, i, c = 0;
//     printf("Enter a positive integer: ");
//     scanf("%d", &a);

//     if (a == 0 || a == 1)
//     {
//         c = 1;
//     }
//     for (i = 2; i <= a / 2; ++i)
//     {
//         if (a % i == 0)
//         {
//             c = 1;
//             break;
//         }
//     }
//     if (c == 0)
//     {
//         printf("%d is a prime number.", a);
//     }
//     else
//     {
//         printf("%d is not a prime number.", a);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num, sum = 0;
//     printf("Enter any number to find sum of its digit: ");
//     scanf("%d", &num);
//     while (num != 0)
//     {
//         sum += num % 10;
//         num = num / 10;
//     }
//     printf("Sum of digits = %d", sum);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {

//     int n, reverse = 0, remainder;
//     printf("Enter the number: ");
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

// #include <stdio.h>
// int main()
// {
//     int n, i, sum = 0, arr[100];

//     printf("Enter the amount of numbers you want to add: ");
//     scanf("%d", &n);
//     printf("Enter the elements: ");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for (i = 0; i < n; i++)
//     {
//         sum += arr[i];
//         // second method of this statement
//         //  sum = sum + arr[i];
//     }

//     printf("Sum = %d", sum);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n1 = 0, n2 = 1, n3, i, num;
//     printf("Enter the number of elements:");
//     scanf("%d", &num);
//     printf("\nFibonacci Series: %d %d", n1, n2);
//     for (i = 2; i < num; ++i)
//     {
//         n3 = n1 + n2;
//         printf(" %d", n3);
//         n1 = n2;
//         n2 = n3;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, fact = 1, n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     printf("Factorial of %d is: %d", n, fact);
//     return 0;
// }

// // *
// // * *
// // * * *
// // * * * *
// // * * * * *

// #include <stdio.h>
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

// //         *
// //       * *
// //     * * *
// //   * * * *
// // * * * * *

// #include <stdio.h>
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

// #include <stdio.h>
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

// #include <stdio.h>
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
//     printf("Smallest element of array is : %d", min);
//     printf("\nLargest element of array is : %d", max);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int r, c, a[100][100], b[100][100], sum[100][100], i, j;
//     printf("Enter the number of rows (between 1 and 100): ");
//     scanf("%d", &r);
//     printf("Enter the number of columns (between 1 and 100): ");
//     scanf("%d", &c);
//     printf("\nEnter elements of 1st matrix:\n");
//     for (i = 0; i < r; ++i)
//         for (j = 0; j < c; ++j)
//         {
//             printf("Enter element a%d%d: ", i + 1, j + 1);
//             scanf("%d", &a[i][j]);
//         }
//     printf("Enter elements of 2nd matrix:\n");
//     for (i = 0; i < r; ++i)
//         for (j = 0; j < c; ++j)
//         {
//             printf("Enter element b%d%d: ", i + 1, j + 1);
//             scanf("%d", &b[i][j]);
//         }
//     for (i = 0; i < r; ++i)
//         for (j = 0; j < c; ++j)
//         {
//             sum[i][j] = a[i][j] + b[i][j];
//         }
//     printf("\nSum of two matrices: \n");
//     for (i = 0; i < r; ++i)
//         for (j = 0; j < c; ++j)
//         {
//             printf("%d   ", sum[i][j]);
//             if (j == c - 1)
//             {
//                 printf("\n\n");
//             }
//         }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a[10][10], transpose[10][10], r, c;
//     printf("Enter rows and columns: ");
//     scanf("%d %d", &r, &c);

//     // asssigning elements to the matrix
//     printf("\nEnter matrix elements:\n");
//     for (int i = 0; i < r; ++i)
//         for (int j = 0; j < c; ++j)
//         {
//             printf("Enter element a%d%d: ", i + 1, j + 1);
//             scanf("%d", &a[i][j]);
//         }

//     // printing the matrix a[][]
//     printf("\nEntered matrix: \n");
//     for (int i = 0; i < r; ++i)
//         for (int j = 0; j < c; ++j)
//         {
//             printf("%d  ", a[i][j]);
//             if (j == c - 1)
//                 printf("\n");
//         }

//     // computing the transpose
//     for (int i = 0; i < r; ++i)
//         for (int j = 0; j < c; ++j)
//         {
//             transpose[j][i] = a[i][j];
//         }

//     // printing the transpose
//     printf("\nTranspose of the matrix:\n");
//     for (int i = 0; i < c; ++i)
//         for (int j = 0; j < r; ++j)
//         {
//             printf("%d  ", transpose[i][j]);
//             if (j == r - 1)
//                 printf("\n");
//         }
//     return 0;
// }

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a[3][3], b[3][3];
//     printf("Enter Element of matrix A :");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", a[i][j]);
//         }
//     }
//     printf("Enter Element of matrix B :");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", b[i][j]);
//         }
//     }
//     printf("After Matrix Multiplication\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d", a[i][j]);
//         }
//     }
//     printf("After Matrix Multiplication\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d", b[i][j]);
//         }
//     }
//     return 0;
// }

// // A user wants to input some numbers write a program to find sum of all these numbers.User is not sure how many numbers he / she will input.

// // int main(int argc, char const *argv[])
// // {
// //     int n, i, arr[100], total;
// //     printf("Enter the limit of numbers.");
// //     scanf("%d", &n);
// //     printf("Enter the numbers: ");
// //     for (int i = 0; i < n; i++)
// //     {
// //         scanf("%d", &arr[i]);
// //     }
// //     for (i = 0; i < n; i++)
// //     {
// //         total = total + arr[i];
// //     }
// //     printf("Sum = %d", total);
// //     return 0;
// // }

#include <stdio.h>

int searchInsert(int *nums, int numsSize, int target)
{
    int low = 0, high = numsSize - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return low;
}

int main()
{
    int nums[] = {1, 3, 5, 6};
    int target = 5;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int result = searchInsert(nums, numsSize, target);

    printf("Output: %d\n", result);
    return 0;
}

#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char *s)
{
    int length = 0;
    int i = strlen(s) - 1;

    // Skip trailing spaces
    while (i >= 0 && s[i] == ' ')
    {
        i--;
    }

    // Count the length of the last word
    while (i >= 0 && s[i] != ' ')
    {
        length++;
        i--;
    }

    return length;
}

int main()
{
    char s[] = "   fly me   to   the moon ";
    int result = lengthOfLastWord(s);
    printf("Output: %d\n", result);
    return 0;
}

#include <stdio.h>

int main()
{
    int size, i, min, max, minIndex, maxIndex;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input the elements of the array
    for (i = 0; i < size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Find the index of the minimum and maximum elements
    min = max = arr[0];
    minIndex = maxIndex = 0;

    for (i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minIndex = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }

    // Swap the minimum and maximum elements
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    // Output the new array
    printf("The new array is:\n");
    for (i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int n, i;
    int largest, secondLargest;

    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and secondLargest with minimum integer values
    largest = secondLargest = -2147483648;

    // Find the largest element in the array
    for (i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    // Output the results
    printf("The numbers you entered are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nThe largest of these numbers is: %d\n", largest);
    printf("The second largest of these numbers is: %d\n", secondLargest);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, length;
    int isPalindrome = 1;

    // Input a string
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    length = strlen(str);

    // Reverse the string
    for (i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    // Check if the string is a palindrome
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            isPalindrome = 0;
            break;
        }
    }

    // Output the reversed string and palindrome check result
    printf("Reversed string: %s\n", str);
    if (isPalindrome)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}