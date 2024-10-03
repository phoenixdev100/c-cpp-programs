#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// #include <alloc.h>

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
    if (ROOT == NULL)
    {
        ROOT = temp;
    }
    else
    {
        struct node *p = ROOT;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
}

void display()
{
    struct node *p = ROOT;
    while (p != NULL)
    {
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

int length()
{
    int count = 0;
    struct node *p = ROOT;
    while (p != NULL)
    {
        count++;
        p = p->next;
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
    }
    else
    {
        temp->next = ROOT;
        ROOT = temp;
    }
}

void addbefore()
{
    int loc, len;
    len = length();
    printf("Enter location of node to be inserted: ");
    scanf("%d", &loc);
    if (loc > len)
    {
        printf("Invalid position.\n");
    }
    else
    {
        int i = 1;
        struct node *temp;
        struct node *p = ROOT;
        while (i < loc - 1)
        {
            p = p->next;
            i++;
        }
        temp = (struct node *)malloc(sizeof(struct node));
        printf("Enter the value of data part: ");
        scanf("%d", &temp->data);
        temp->next = p->next;
        p->next = temp;
    }
}

void addafter()
{
    int loc, len;
    len = length();
    printf("Enter location of node to be inserted: ");
    scanf("%d", &loc);
    if (loc > len)
    {
        printf("Invalid position.\n");
    }
    else
    {
        int i = 1;
        struct node *temp;
        struct node *p = ROOT;
        while (i < loc)
        {
            p = p->next;
            i++;
        }
        temp = (struct node *)malloc(sizeof(struct node));
        printf("Enter the value of data part: ");
        scanf("%d", &temp->data);
        temp->next = p->next;
        p->next = temp;
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
        struct node *p = ROOT;
        ROOT = ROOT->next;
        p->next = NULL;
        free(p);
        printf("Node Deleted successfully.\n");
    }
}

void deletefromend()
{
    if (ROOT == NULL)
    {
        printf("Underflow.\n");
    }
    else
    {
        struct node *p, *q;
        p = ROOT;
        while (p->next != NULL)
        {
            q = p;
            p = p->next;
        }
        q->next = NULL;
        free(p);
        printf("Node Deleted Successfully.\n");
    }
}

void deletebefore()
{
    int loc, len;
    printf("Enter location of node to be deleted: ");
    scanf("%d", &loc);
    len = length();
    if (loc > len)
    {
        printf("Invalid Location.\n");
    }
    else if (loc == 1)
    {
        printf("No node before the first node.\n");
    }
    else if (loc == 2)
    {
        struct node *p = ROOT;
        ROOT = ROOT->next;
        p->next = NULL;
        free(p);
        printf("Node Deleted Successfully.\n");
    }
    else
    {
        int i = 1;
        struct node *p, *q;
        p = ROOT;
        while (i < loc - 1)
        {
            q = p;
            p = p->next;
            i++;
        }
        q->next = p->next;
        p->next = NULL;
        free(p);
        printf("Node Deleted Successfully.\n");
    }
}

void deleteafter()
{
    int loc, len;
    printf("Enter location of node to be deleted: ");
    scanf("%d", &loc);
    len = length();
    if (loc > len)
    {
        printf("Invalid Location.\n");
    }
    else
    {
        int i = 1;
        struct node *p, *q;
        p = ROOT;
        while (i < loc)
        {
            q = p;
            p = p->next;
            i++;
        }
        q->next = p->next;
        p->next = NULL;
        free(p);
        printf("Node Deleted Successfully.\n");
    }
}

void reverse()
{
    int i, j, len = length();
    i = 1, j = len;
    struct node *p, *q;
    p = q = ROOT;
    while (i < j)
    {
        int k = 1, temp;
        while (k < j)
        {
            q = q->next;
            k++;
        }
        temp = p->data;
        p->data = q->data;
        q->data = temp;
        i++;
        j--;
        p = p->next;
        q = ROOT;
    }
}

int main()
{
    // clrscr();
    int a;
    char decision;

    printf("\nChoose your desired function.");
    printf("\nPress 1 for creating Linked List (must use on first time).");
    printf("\nPress 2 for displaying Linked List.");
    printf("\nPress 3 for finding length of Linked List.");
    printf("\nPress 4 for inserting element at stating of Linked List.");
    printf("\nPress 5 for inserting element at ending of Linked List.");
    printf("\nPress 6 for inserting element before a node (specify location).");
    printf("\nPress 7 for inserting element after a node (specify location).");
    printf("\nPress 8 for deleting element at stating of Linked List.");
    printf("\nPress 9 for deleting element at ending of Linked List.");
    printf("\nPress 10 for deleting element before a node (specify location).");
    printf("\nPress 11 for deleting element after a ndode (specify location).");
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
    // getch();
}