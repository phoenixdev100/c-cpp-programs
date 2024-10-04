#include <stdio.h>
#include <stdlib.h>

void append();
void display();

struct polynode
{
    float coeff;
    int expo;
    struct polynode *next;
};
struct polynode *ROOT = NULL;

void append()
{
    struct polynode *temp;
    temp = (struct polynode *)malloc(sizeof(struct polynode));
    printf("Enter coefficient and exponent: ");
    scanf("%f %d", &temp->coeff, &temp->expo);
    temp->next = NULL;
    if (ROOT == NULL)
    {
        ROOT = temp;
    }
    else
    {
        struct polynode *p = ROOT;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
}

void display()
{
    struct polynode *p = ROOT;
    while (p != NULL)
    {
        printf("%.1fx^%d ", p->coeff, p->expo);
        if (p->next != NULL)
            printf("+ ");
        p = p->next;
    }
    printf("\n");
}

int main()
{
    int i, input;
    printf("Enter no of nodes of 1st polynomial to be create: ");
    scanf("%d", &input);
    for (i = 0; i < input; i++)
    {
        append();
    }
    display();
    printf("Enter no of nodes of 2nd polynomial to be create: ");
    scanf("%d", &input);
    for (i = 0; i < input; i++)
    {
        append();
    }
    display();
    return 0;
}