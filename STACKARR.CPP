#include <stdio.h>
#define MAX 5

int stack_arr[MAX];
int top = -1;

void push()
{
    int data;
    if (top == MAX - 1)
    {
        printf("\nStack Overflow\n");
        return;
    }
    printf("Enter Data: ");
    scanf("%d", &data);
    top++;
    stack_arr[top] = data;
    printf("Added element %d \n", data);
}

void pop()
{
    int value;
    if (top == -1)
    {
        printf("Stack Underflow\nReturning to main function. Please try again.\n");
        return;
    }
    value = stack_arr[top];
    top--;
    printf("Popped element %d \n", value);
}

void display()
{
    int i;
    if (top == -1)
    {
        printf("Stack Empty\n");
        return;
    }
    printf("Elements in Stack : \n");
    for (i = top; i >= 0; i--)
    {
        printf("%d ", stack_arr[i]);
    }
}

int isempty()
{
    return (top == -1);
}

int isfull()
{
    return (top == MAX - 1);
}

int main()
{
    int choice;
    char decision;
    do
    {
        printf("Choose the function.\n");
        printf("\n1. Push an element to the stack.\n");
        printf("2. Pop an element from the stack.\n");
        printf("3. Display all elements of the stack.\n");
        printf("4. Check whether the stack is empty or not.\n");
        printf("5. Check whether the stack is full or not.\n");
        printf("6. Exit\n\n");
        printf("Your Choice is: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            display();
            break;
        case 2:
            pop();
            display();
            break;
        case 3:
            display();
            break;
        case 4:
            if (isempty())
            {
                printf("\nStack is empty.");
            }
            else
            {
                printf("\nStack is not empty.");
            }
            break;
        case 5:
            if (isfull())
            {
                printf("\nStack is full.");
            }
            else
            {
                printf("\nStack is not full.");
            }
            break;
        case 6:
            printf("\nProgram Terminated Successfully...\n");
            break;
        default:
            printf("Invalid input! Please enter choice from 1 to 6.");
            break;
        }
        printf("\n");
        printf("\nDo you want to continue? (Y/N): ");
        scanf(" %c", &decision);
    } while (decision == 'Y' || decision == 'y');
    printf("\n");
    return 0;
}
