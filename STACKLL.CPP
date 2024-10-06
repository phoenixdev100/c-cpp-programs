#include <stdio.h>
#include <stdlib.h>

void push();
void pop();
void display();
int isempty();

struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;

void push()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Stack Overflow.");
        return;
    }
    printf("Enter the value of data part: ");
    scanf("%d", &temp->data);
    temp->next = top;
    top = temp;
}

void pop()
{
    if (isempty())
    {
        printf("Stack Underflow.\n");
        return;
    }
    struct node *temp;
    temp = top;
    int val = temp->data;
    top = top->next;
    free(temp);
    printf("Popped Element is: %d\n", val);
}

void display()
{
    struct node *temp;
    temp = top;
    if (isempty())
    {
        printf("\nStack Underflow");
        return;
    }
    printf("The elements in stack are :\n");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int isempty()
{
    return (top == NULL);
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
        printf("5. Exit\n\n");
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
            printf("\nProgram Terminated Successfully...\n");
            break;
        default:
            printf("Invalid input! Please enter choice from 1 to 5.");
            break;
        }
        printf("\n");
        printf("\nDo you want to continue? (Y/N): ");
        scanf(" %c", &decision);
    } while (decision == 'Y' || decision == 'y');
    printf("\n");
    return 0;
}