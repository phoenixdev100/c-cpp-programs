#include <stdio.h>
int main(int argc, char const *argv[])
{
    // Variable declaration

    float a, b, sum, sub, multi, div, mod, gt, swap, area, peri, hcf, i, expo, newbexpo;
    int input, lcm1, lcm2, lcm, mod1, mod2;
    char decision;

    // Menu driven program

    printf("\nChoose your desired method.");
    printf("\nPress 1 for Addition.");
    printf("\nPress 2 for Subtraction.");
    printf("\nPress 3 for Multiplication.");
    printf("\nPress 4 for Division.");
    printf("\nPress 5 for Modulus.");
    printf("\nPress 6 for finding Greater than and Less than.");
    printf("\nPress 7 for finding LCM.");
    printf("\nPress 8 for swapping Values.");
    printf("\nPress 9 for finding Area.");
    printf("\nPress 10 for finding Perimeter.");
    printf("\nPress 11 for finding exponent.\n\n");
    printf("Current input is: ");
    scanf("%d", &input);
    printf("\n");

    // Switch case statement

    switch (input)
    {
    case 1:
        if (input == 1)
        {

            // Program of Addition

            printf("Enter first number: ");
            scanf("%f", &a);
            printf("Enter second number: ");
            scanf("%f", &b);
            sum = a + b;
            printf("Sum of %.2f and %.2f is %.2f.", a, b, sum);
            break;
        }
    case 2:
        if (input == 2)
        {

            // Program of Subtraction

            printf("Enter first number: ");
            scanf("%f", &a);
            printf("Enter second number: ");
            scanf("%f", &b);
            sub = a - b;
            printf("Subtraction of %.2f and %.2f is %.2f.", a, b, sub);
            break;
        }
    case 3:
        if (input == 3)
        {

            // Program of Multiplication

            printf("Enter first number: ");
            scanf("%f", &a);
            printf("Enter second number: ");
            scanf("%f", &b);
            multi = a * b;
            printf("Multiplication of %.2f and %.2f is %.2f.", a, b, multi);
            break;
        }
    case 4:
        if (input == 4)
        {

            // Program of Division

            printf("Enter first number: ");
            scanf("%f", &a);
            printf("Enter second number: ");
            scanf("%f", &b);
            div = a / b;
            printf("Division of %.2f and %.2f is %.2f.", a, b, div);
            break;
        }
    case 5:
        if (input == 5)
        {

            // Program of Modulus

            printf("Enter first number: ");
            scanf("%f", &a);
            printf("Enter second number: ");
            scanf("%f", &b);
            mod = mod1 % mod2;
            printf("Modulus of %.2f and %.2f is %.2f.", a, b, mod);
            break;
        }
    case 6:
        if (input == 6)
        {

            // Program of less than and greater than

            printf("Enter first number: ");
            scanf("%f", &a);
            printf("Enter second number: ");
            scanf("%f", &b);
            if (a > b)
            {
                printf("%.2f is greater than %.2f.", a, b);
            }
            else
            {
                printf("%.2f is greater than %.2f.", b, a);
            }
            break;
        }
    case 7:
        if (input == 7)
        {

            // Program of finding LCM
            printf("Enter first number: ");
            scanf("%f", &a);
            printf("Enter second number: ");
            scanf("%f", &b);
            lcm = (a > b) ? a : b;
            while (1)
            {
                if ((lcm % lcm1 == 0) && (lcm % lcm2 == 0))
                {
                    printf("The LCM of %.2f and %.2f is %.2f.", a, b, lcm);
                    break;
                }
                ++lcm;
            }
            break;
        }
    case 8:
        if (input == 8)
        {

            // Program for swapping values

            printf("Enter first number: ");
            scanf("%f", &a);
            printf("Enter second number: ");
            scanf("%f", &b);
            swap = a, a = b, b = swap;
            printf("\nAfter swapping, First number is: %.2f.\n", a);
            printf("After swapping, Second number is: %.2f.", b);
            break;
        }
    case 9:
        if (input == 9)
        {

            // Program for finding area

            printf("Enter first number: ");
            scanf("%f", &a);
            printf("Enter second number: ");
            scanf("%f", &b);
            area = a * b;
            printf("\nArea of %.2f and %.2f is: %.2f cm^2.", a, b, area);
            break;
        }
    case 10:
        if (input == 10)
        {

            // Program to find perimeter

            printf("Enter first number: ");
            scanf("%f", &a);
            printf("Enter second number: ");
            scanf("%f", &b);
            peri = (a + b) * 2;
            printf("Perimeter of %.2f and %.2f is: %.2f cm^2.", a, b, peri);
            break;
        }
    case 12:
        if (input == 12)
        {

            // Program to find exponent value

            printf("Enter first number: ");
            scanf("%f", &a);
            printf("Enter second number: ");
            scanf("%f", &b);
            expo = 1;
            newbexpo = b;
            while (b != 0)
            {
                expo *= a;
                --b;
            }
            printf("\nExponent of %f to the power %f is: %.2f.", a, newbexpo, expo);
            break;
        }
    default:

        // Default Statement

        printf("\n");
        printf("Wrong Entry!\n");
        printf("Choose input from 1 to 11.");
        break;
    }

    // Termination or re-execution decision statement

    printf("\n");
    printf("\nDo u want to calculate again ? \nPress 'Y' or 'y' for Yes or 'N' or 'n' for no ?\n");
    printf("\n");
    printf("Your Input is: ");
    scanf("%s", &decision);
    if ((decision == 'Y' || decision == 'y'))
    {
        printf("\nProgram restarted...\n");
        return main(argc - 1, argv);
    }
    else
    {
        printf("\nProgram Terminated Successfully...");
    }
    printf("\n");
    return 0;
}
