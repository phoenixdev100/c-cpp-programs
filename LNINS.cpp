#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void append();
void display();
int length();
void insertatbegin();
void addbefore();
void addafter();

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
    struct node *ROOT = NULL;
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
    struct node *ROOT;
    struct node *p = ROOT;
    while (p != NULL)
    {
        printf("Data entered in LL is: %d ->\n", p->data);
        p = p->next;
    }
}

int length()
{
    struct node *ROOT;
    int count = 0;
    struct node *t = ROOT;
    while (t != NULL)
    {
        count++;
        t = t->next;
    }
    // printf("\nLength of LL is %d", count);
    return count;
}

void insertatbegin()
{
    struct node *temp;
    append();
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
    struct node *temp;
    len = length();
    printf("Enter location of node to be inserted: ");
    scanf("%d", &loc);
    if (loc > len)
    {
        printf("Invalid position.");
    }
    else
    {
        int i = 1;
        struct node *p = ROOT;
        while (i < loc - 1)
        {
            p = p->next;
            i++;
        }
        append();
        temp->next = p->next;
        p->next = temp;
    }
}

void addafter()
{
    int loc, len;
    struct node *temp;
    len = length();
    printf("Enter location of node to be inserted: ");
    scanf("%d", &loc);
    if (loc > len)
    {
        printf("Invalid position.");
    }
    else
    {
        int i = 1;
        struct node *p = ROOT;
        while (i < loc)
        {
            p = p->next;
            i++;
        }
        append();
        temp->next = p->next;
        p->next = temp;
    }
}

int main()
{
    // clrscr();
    int i, node;
    printf("Enter no of nodes to be create: ");
    // scanf("%d",&node);
    for (i = 0; i < 4; i++)
    {
        append();
    }
    display();
    insertatbegin();
    display();
    addbefore();
    display();
    addafter();
    display();
    // getch();
}