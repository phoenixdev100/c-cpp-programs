#include <stdio.h>
#include <stdlib.h>

void append();
void display();
void freeList();

struct polynode
{
    float coeff;
    int expo;
    struct polynode *next;
};
struct polynode *ROOT = NULL;

void append()
{
    float coeff;
    int expo;
    struct polynode *temp;
    temp = (struct polynode *)malloc(sizeof(struct polynode));
    if (temp == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }
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
        if (p->next != NULL && p->next->coeff >= 0)
            printf("+ ");
        p = p->next;
    }
    printf("\n");
}

void freeList()
{
    struct polynode *temp;
    while (ROOT != NULL)
    {
        temp = ROOT;
        ROOT = ROOT->next;
        free(temp);
    }
}

int main(int argc, char const *argv[])
{
    int i, input;
    printf("Enter the number of terms to be created: ");
    scanf("%d", &input);
    for (i = 0; i < input; i++)
    {
        append();
    }
    display();

    // Free memory allocated for the linked list
    freeList();

    return 0;
}