#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// #include <alloc.h>

void display();
int length();
void deletefrombegin();
void deletefromend();
void deletebefore();
void deleteafter();

struct node
{
    int data;
    struct node *next;
};
struct node *ROOT = NULL;

void deletefrombegin()
{
    if (ROOT == NULL)
    {
        printf("Underflow.");
    }
    else
    {
        struct node *p = ROOT;
        ROOT = ROOT->next;
        p->next = NULL;
        free(p);
        printf("Node Deleted successfully.");
    }
}

void deletefromend()
{
    if (ROOT == NULL)
    {
        printf("Underflow.");
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
        printf("Node Deleted Successfully.");
    }
}

void deletebefore()
{
    int loc, len;
    printf("Enter location of node to be deleted: ");
    scanf("%d", &loc);
    if (loc > len)
    {
        printf("Invalid Location.");
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
    }
}

void deleteafter()
{
    int loc, len;
    printf("Enter location of node to be deleted: ");
    scanf("%d", &loc);
    if (loc > len)
    {
        printf("Invalid Location.");
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
    }
}