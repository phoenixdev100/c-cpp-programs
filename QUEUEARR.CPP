#include <stdio.h>
#define MAX 5

int queue1[MAX];
int queue2[MAX];
int rear = -1;
int front = -1;

void enqueue(int data);
void dequeue();
void display();
int isempty();
int isfull();

void enqueue(int data)
{
    if (isfull())
    {
        printf("\nQueue is full. Cannot enqueue.\n");
        return;
    }
    rear++;
    queue1[rear] = data;
    printf("Enqueued element %d \n", data);
}

void dequeue()
{
    int value;
    if (isempty())
    {
        printf("Queue is empty. Cannot dequeue.\n");
        return;
    }
    if (front == -1)
    {
        while (rear != -1)
        {
            front++;
            queue2[front] = queue1[rear];
            rear--;
        }
    }
    value = queue2[front];
    front--;
    printf("Dequeued element %d \n", value);
}

void display()
{
    int i;
    if (isempty())
    {
        printf("Queue is empty.\n");
        return;
    }
    printf("Elements in Queue : \n");
    for (i = front + 1; i <= rear; i++)
    {
        printf("%d ", queue1[i]);
    }
    for (i = front; i >= 0; i--)
    {
        printf("%d ", queue2[i]);
    }
}

int isempty()
{
    if (rear == -1 && front == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull()
{
    if (rear == MAX - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
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
        printf("5. Check whether the queue is full or not.\n");
        printf("6. Exit\n\n");
        printf("Your Choice is: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter Data: ");
            scanf("%d", &data);
            enqueue(data);
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
            if (isfull())
            {
                printf("\nQueue is full.");
            }
            else
            {
                printf("\nQueue is not full.");
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