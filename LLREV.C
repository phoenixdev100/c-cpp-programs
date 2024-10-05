#include <stdio.h>
#include <stdlib.h>

void display();

struct Node
{
    int data;
    struct Node *next;
};

struct Node *reverse(struct Node *ROOT, int m, int n)
{
    if (ROOT == NULL || m == n)
    {
        return ROOT;
    }

    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->next = ROOT;
    struct Node *prev = temp;
    for (int i = 0; i < m - 1; i++)
    {
        prev = prev->next;
    }

    struct Node *current = prev->next;
    struct Node *next = NULL;
    for (int i = 0; i < n - m; i++)
    {
        next = current->next;
        current->next = next->next;
        next->next = prev->next;
        prev->next = next;
    }

    return temp->next;
}

void display(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *ROOT = NULL;
    struct Node *temp = NULL;
    int n, data;

    printf("Enter the number of elements in the linked list: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);

        struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
        new_node->data = data;
        new_node->next = NULL;

        if (ROOT == NULL)
        {
            ROOT = new_node;
            temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
    }

    printf("Original linked list: ");
    display(ROOT);

    int a, b;
    printf("Enter the start position (m) and end position (n) to reverse the linked list between them: ");
    scanf("%d %d", &a, &b);

    ROOT = reverse(ROOT, a, b);

    printf("Reversed linked list between positions %d and %d: ", a, b);
    display(ROOT);

    return 0;
}
