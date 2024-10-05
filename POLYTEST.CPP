#include <stdio.h>
#include <stdlib.h>

struct polynode
{
    float coeff;
    int expo;
    struct polynode *next;
};
struct polynode *ROOT = NULL;

void append();
void display();

struct polynode *createNode(float coeff, int expo);

void append()
{
    float coeff;
    int expo;
    printf("Enter coefficient and exponent: ");
    scanf("%f %d", &coeff, &expo);
    struct polynode *temp = createNode(coeff, expo);
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

struct polynode *createNode(float coeff, int expo)
{
    struct polynode *newNode = (struct polynode *)malloc(sizeof(struct polynode));
    if (newNode == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->coeff = coeff;
    newNode->expo = expo;
    newNode->next = NULL;
    return newNode;
}

int main()
{
    int input;
    printf("Enter no of terms to be added: ");
    scanf("%d", &input);
    for (int i = 0; i < input; i++)
    {
        append();
    }
    printf("Polynomial Expression: ");
    display();
    return 0;
}