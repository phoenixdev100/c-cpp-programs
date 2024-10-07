#include <stdio.h>
// program of advance calculator system
int main(int argc, char const *argv[])
{
    int a, b, input, sum, sub, multi, div, mod, gt, lcm, swap, area, peri, hcf, i, expo, newbexpo;
    char decision;
    printf("Enter Number 1: ");
    scanf("%d", &a);
    printf("Enter Number 2: ");
    scanf("%d", &b);
    printf("\nChoose your desired method.");
    printf("\nPress 1 for Addition.");
    printf("\nPress 2 for Subtraction.");
    printf("\nPress 3 for Multiplication.");
    printf("\nPress 4 for Division.");
    printf("\nPress 5 for Modulus.");
    printf("\nPress 6 for finding Greater than and Less than.");
    printf("\nPress 7 for finding LCM.");
    printf("\nPress 8 for finding HCF. (To be fixed)");
    printf("\nPress 9 for swapping Values.");
    printf("\nPress 10 for finding Area.");
    printf("\nPress 11 for finding Perimeter.");
    printf("\nPress 12 for finding exponent.\n\n");
    printf("Current input is: ");
    scanf("%d", &input);
    printf("\n");
    switch (input)
    {
    case 1:
        if (input == 1)
        {
            sum = a + b;
            printf("Sum of %d and %d is: %d.", a, b, sum);
            break;
        }
    case 2:
        if (input == 2)
        {
            sub = a - b;
            printf("Subtraction of %d and %d is: %d.", a, b, sub);
            break;
        }
    case 3:
        if (input == 3)
        {
            multi = a * b;
            printf("Multiplication of %d and %d is: %d.", a, b, multi);
            break;
        }
    case 4:
        if (input == 4)
        {
            div = a / b;
            printf("Division of %d and %d is: %d.", a, b, div);
            break;
        }
    case 5:
        if (input == 5)
        {
            mod = a % b;
            printf("Modulus of %d and %d is: %d.", a, b, mod);
            break;
        }
    case 6:
        if (input == 6)
        {
            if (a > b)
            {
                printf("%d is greater than %d.", a, b);
            }
            else if (a == b)
            {
                printf("%d is equals to %d.", a, b);
            }
            else
            {
                printf("%d is greater than %d.", b, a);
            }
            break;
        }
    case 7:
        if (input == 7)
        {
            lcm = (a > b) ? a : b;
            while (1)
            {
                if ((lcm % a == 0) && (lcm % b == 0))
                {
                    printf("The LCM of %d and %d is %d.", a, b, lcm);
                    break;
                }
                ++lcm;
            }
            break;
        }
        // not working to be fixed
    case 8:
        if (input == 8)
        {
            for (i = 1; i <= a && i <= b; ++i)
            {
                if (a % i == 0 && b % i == 0)
                {
                    lcm = i;
                }
                printf("HCF OF %d and %d is: %d", a, b, hcf);
                break;
            }
            break;
        }
    case 9:
        if (input == 9)
        {
            swap = a, a = b, b = swap;
            printf("\nAfter swapping, First number is: %d\n.", a);
            printf("After swapping, Second number is: %d.", b);
            break;
        }
    case 10:
        if (input == 10)
        {
            area = a * b;
            printf("\nArea of %d and %d is: %d cm^2.", a, b, area);
            break;
        }
    case 11:
        if (input == 11)
        {
            peri = (a + b) * 2;
            printf("Perimeter of %d and %d is: %d cm^2.", a, b, peri);
            break;
        }
    case 12:
        if (input == 12)
        {
            expo = 1;
            newbexpo = b;
            while (b != 0)
            {
                expo *= a;
                --b;
            }
            printf("\nExponent of %d to the power %d is: %d.", a, newbexpo, expo);
            break;
        }
    default:
        printf("\n");
        printf("Wrong Entry!\n");
        printf("Choose input from 1 to 12.");
        break;
    }
    printf("\n");
    printf("\nDo u want to calculate again ? \nPress 'Y' or 'y' for Yes or 'N' or 'n' for no ?\n");
    printf("\n");
    printf("Your Input is: ");
    scanf("%s", &decision);

    //(decision == 'Y' || decision == 'y') && (decision == 'Yes' || decision == 'yes')

    if ((decision == 'Y' || decision == 'y'))
    {
        printf("\nProgram restarted...\n");
        return main(argc - 1, argv);
    }
    // else if (decision == 'Yes' || decision == 'yes')
    //{
    //   printf("\nProgram restarted...");
    //   return main(argc - 1, argv);
    // }
    else
    {
        printf("\nProgram Terminated Successfully...");
    }
    printf("\n");
}