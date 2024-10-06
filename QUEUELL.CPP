#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *rear = NULL;
struct Node *front = NULL;

void enqueue(struct Node **rear, int data);
void dequeue();
void display();
int isempty();

void enqueue(struct Node **rear, int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    if (temp == NULL)
    {
        printf("\nMemory allocation failed. Cannot enqueue.\n");
        return;
    }
    temp->data = data;
    temp->next = NULL;
    if (*rear == NULL)
    {
        *rear = temp;
        front = temp;
    }
    else
    {
        (*rear)->next = temp;
        *rear = temp;
    }
    printf("Enqueued element %d \n", data);
}

void dequeue()
{
    if (isempty())
    {
        printf("Queue is empty. Cannot dequeue.\n");
        return;
    }
    struct Node *temp = front;
    front = front->next;
    if (front == NULL)
    {
        rear = NULL;
    }
    printf("Dequeued element %d \n", temp->data);
    free(temp);
}

void display()
{
    if (isempty())
    {
        printf("Queue is empty.\n");
        return;
    }
    struct Node *temp = front;
    printf("Elements in Queue : \n");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int isempty()
{
    return (front == NULL && rear == NULL);
}

int main()
{
    int choice, data;
    char decision;
    do
    {
        printf("Choose the function.\n");
        printf("\n1. Enqueue an element to the queue.\n");
        printf("2. Dequeue an element from the queue.\n");
        printf("3. Display all elements of the queue.\n");
        printf("4. Check whether the queue is empty or not.\n");
        printf("5. Exit\n\n");
        printf("Your Choice is: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter Data: ");
            scanf("%d", &data);
            enqueue(&rear, data);
            display();
            break;
        case 2:
            dequeue();
            display();
            break;
        case 3:
            display();
            break;
        case 4:
            if (isempty())
            {
                printf("\nQueue is empty.");
            }
            else
            {
                printf("\nQueue is not empty.");
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