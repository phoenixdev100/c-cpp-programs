#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *reverse(struct Node *head)
{
    struct Node *prev = NULL;
    struct Node *p = head;
    struct Node *next = NULL;
    while (p != NULL)
    {
        next = p->next;
        p->next = prev;
        prev = p;
        p = next;
    }
    return prev;
}

bool palindrome(struct Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return true;
    }

    struct Node *slow = head;
    struct Node *fast = head;
    struct Node *prev_slow = head;
    struct Node *mid_node = NULL;
    bool result = true;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        prev_slow = slow;
        slow = slow->next;
    }

    if (fast != NULL)
    {
        mid_node = slow;
        slow = slow->next;
    }

    struct Node *second_half = reverse(slow);
    struct Node *first_half = head;

    while (second_half != NULL)
    {
        if (first_half->data != second_half->data)
        {
            result = false;
            break;
        }
        first_half = first_half->next;
        second_half = second_half->next;
    }

    reverse(second_half);

    if (mid_node != NULL)
    {
        prev_slow->next = mid_node;
        mid_node->next = second_half;
    }
    else
    {
        prev_slow->next = second_half;
    }

    return result;
}

void push(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printList(struct Node *ptr)
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
    struct Node *head = NULL;
    int keys[] = {1, 2, 3, 4, 3, 2, 1};
    int n = sizeof(keys) / sizeof(keys[0]);

    for (int i = 0; i < n; i++)
    {
        push(&head, keys[i]);
    }

    printf("Linked list: ");
    printList(head);

    if (palindrome(head))
    {
        printf("The linked list is a palindrome.\n");
    }
    else
    {
        printf("The linked list is not a palindrome.\n");
    }

    return 0;
}
