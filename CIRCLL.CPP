#include <stdio.h>
#include <stdlib.h>

void append();
void display();
int length();
void insertatbegin();
void addbefore();
void addafter();
void deletefrombegin();
void deletefromend();
void deletebefore();
void deleteafter();
void reverse();

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *ROOT = NULL;

void append()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value of data part: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    temp->prev = NULL;
    if (ROOT == NULL)
    {
        ROOT = temp;
        temp->next = temp;
        temp->prev = temp;
    }
    else
    {
        temp->next = ROOT;
        temp->prev = ROOT->prev;
        ROOT->prev->next = temp;
        ROOT->prev = temp;
    }
}

void display()
{
    struct node *p = ROOT;
    if (ROOT == NULL)
    {
        printf("List is empty\n");
        return;
    }
    do
    {
        printf("%d -> ", p->data);
        p = p->next;
    } while (p != ROOT);
    printf("(back to start)\n");
}

int length()
{
    int count = 0;
    struct node *p = ROOT;
    if (ROOT != NULL)
    {
        do
        {
            count++;
            p = p->next;
        } while (p != ROOT);
    }
    printf("Length of LL is %d\n", count);
    return count;
}

void insertatbegin()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value of data part: ");
    scanf("%d", &temp->data);
    if (ROOT == NULL)
    {
        ROOT = temp;
        temp->next = temp;
        temp->prev = temp;
    }
    else
    {
        temp->next = ROOT;
        temp->prev = ROOT->prev;
        ROOT->prev->next = temp;
        ROOT->prev = temp;
        ROOT = temp;
    }
}

void addbefore()
{
    int loc, i = 1;
    printf("Enter location to add before: ");
    scanf("%d", &loc);
    struct node *temp, *p = ROOT;
    if (loc == 1)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        printf("Enter node data: ");
        scanf("%d", &temp->data);
        temp->next = ROOT;
        temp->prev = ROOT->prev;
        ROOT->prev->next = temp;
        ROOT->prev = temp;
        ROOT = temp;
    }
    else
    {
        for (i = 2; i < loc && p != NULL; i++)
        {
            p = p->next;
        }
        if (p != NULL)
        {
            temp = (struct node *)malloc(sizeof(struct node));
            printf("Enter node data: ");
            scanf("%d", &temp->data);
            temp->next = p;
            temp->prev = p->prev;
            p->prev->next = temp;
            p->prev = temp;
        }
        else
        {
            printf("Invalid location.\n");
        }
    }
}

void addafter()
{
    int loc, i = 1;
    printf("Enter location to add after: ");
    scanf("%d", &loc);
    struct node *temp, *p = ROOT;
    for (i = 1; i < loc && p->next != ROOT; i++)
    {
        p = p->next;
    }
    if (p != NULL)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        printf("Enter node data: ");
        scanf("%d", &temp->data);
        temp->next = p->next;
        temp->prev = p;
        p->next->prev = temp;
        p->next = temp;
        if (p == ROOT->prev)
        {
            ROOT->prev = temp;
        }
    }
    else
    {
        printf("Invalid location.\n");
    }
}

void deletefrombegin()
{
    if (ROOT == NULL)
    {
        printf("Underflow.\n");
    }
    else
    {
        struct node *temp = ROOT;
        if (ROOT->next == ROOT)
        {
            ROOT = NULL;
        }
        else
        {
            ROOT = ROOT->next;
            ROOT->prev = temp->prev;
            temp->prev->next = ROOT;
        }
        free(temp);
        printf("Node Deleted successfully.\n");
    }
}

void deletefromend()
{
    if (ROOT == NULL)
    {
        printf("Underflow.\n");
    }
    else if (ROOT->next == ROOT)
    {
        free(ROOT);
        ROOT = NULL;
        printf("Node Deleted successfully.\n");
    }
    else
    {
        struct node *temp = ROOT->prev;
        temp->prev->next = ROOT;
        ROOT->prev = temp->prev;
        free(temp);
        printf("Node Deleted successfully.\n");
    }
}

void deletebefore()
{
    int loc, i = 1;
    printf("Enter location of node before which the node has to be deleted: ");
    scanf("%d", &loc);
    if (loc <= 1)
    {
        printf("Invalid location. Cannot delete before the first node.\n");
        return;
    }
    struct node *temp = ROOT, *p = NULL;
    if (loc == 2)
    {
        p = ROOT;
        ROOT = ROOT->next;
        ROOT->prev = p->prev;
        p->prev->next = ROOT;
        free(p);
    }
    else
    {
        for (i = 2; i < loc && temp->next != ROOT; i++)
        {
            temp = temp->next;
        }
        if (temp != ROOT)
        {
            p = temp->prev;
            temp->prev = p->prev;
            p->prev->next = temp;
            free(p);
        }
    }
    printf("Node Deleted Successfully.\n");
}

void deleteafter()
{
    int loc, i = 1;
    printf("Enter location of node after which the node has to be deleted: ");
    scanf("%d", &loc);
    struct node *temp = ROOT, *p = NULL;
    for (i = 1; i < loc && temp != NULL && temp->next != ROOT; i++)
    {
        temp = temp->next;
    }
    if (temp != NULL && temp->next != ROOT)
    {
        p = temp->next;
        temp->next = p->next;
        p->next->prev = temp;
        free(p);
        printf("Node Deleted Successfully.\n");
    }
    else if (temp->next == ROOT)
    {
        p = temp->next;
        temp->next = p->next;
        ROOT = p->next;
        ROOT->prev = temp;
        free(p);
        printf("Node Deleted Successfully.\n");
    }
    else
    {
        printf("Invalid location or attempt to delete ROOT directly.\n");
    }
}

void reverse()
{
    struct node *p = ROOT, *temp = NULL;
    if (ROOT == NULL)
        return;
    do
    {
        temp = p->prev;
        p->prev = p->next;
        p->next = temp;
        p = p->prev;
    } while (p != ROOT);
    ROOT = ROOT->prev; // Update ROOT to point to the last node
}

int main()
{
    int a;
    char decision;

    printf("\nChoose your desired function.");
    printf("\nPress 1 for creating Linked List (must use on first time).");
    printf("\nPress 2 for displaying Linked List.");
    printf("\nPress 3 for finding length of Linked List.");
    printf("\nPress 4 for inserting element at starting of Linked List.");
    printf("\nPress 5 for inserting element at ending of Linked List.");
    printf("\nPress 6 for inserting element before a node (specify location).");
    printf("\nPress 7 for inserting element after a node (specify location).");
    printf("\nPress 8 for deleting element at starting of Linked List.");
    printf("\nPress 9 for deleting element at ending of Linked List.");
    printf("\nPress 10 for deleting element before a node (specify location).");
    printf("\nPress 11 for deleting element after a node (specify location).");
    printf("\nPress 12 for reversing Linked list.");
    printf("\nYour input is: ");
    scanf("%d", &a);
    printf("\n");
    switch (a)
    {
    case 1:
        int i, input;
        printf("Enter no of nodes to be create: ");
        scanf("%d", &input);
        for (i = 0; i < input; i++)
        {
            append();
        }
        display();
        break;

    case 2:
        display();
        break;

    case 3:
        length();
        break;

    case 4:
        insertatbegin();
        display();
        break;

    case 5:
        append();
        display();
        break;

    case 6:
        addbefore();
        display();
        break;

    case 7:
        addafter();
        display();
        break;

    case 8:
        deletefrombegin();
        display();
        break;

    case 9:
        deletefromend();
        display();
        break;

    case 10:
        deletebefore();
        display();
        break;

    case 11:
        deleteafter();
        display();
        break;

    case 12:
        reverse();
        display();
        break;

    default:
        printf("Wrong input");
        printf("Choose input from 1 to 12.\n");
        break;
    }

    printf("\n");
    printf("\nDo u want to run again ? \nPress 'Y' or 'y' for Yes or 'N' or 'n' for no ?\n");
    printf("\n");
    printf("Your Input is: ");
    scanf(" %c", &decision);

    if ((decision == 'Y' || decision == 'y'))
    {
        printf("\nProgram restarted...\n");
        return main();
    }
    else if ((decision == 'N' || decision == 'n'))
    {
        printf("\nProgram Terminated Successfully...\n");
    }
    else
    {
        printf("\nWrong Input...\n");
    }
    printf("\n");

    return 0;
}