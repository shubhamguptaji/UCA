#include "linked_list.h"

node *rotate_list(node *head, int n)
{

    int count = 0;
    node *a = head;
    node *c = head;
    while (a->next)
    {
        count++;
        a = a->next;
    }
    count++;
    if (n % count != 0)
    {
        return head;
    }
    n = n % count;
    // printf("%d ", count);
    // printf("%d  ", n);
    int rem = count - n;
    a = head;
    int i = 0;
    while (i < rem)
    {
        i++;
        a = a->next;
    }
    node *b = NULL;
    b = a;
    node *d = b;
    while (b->next)
    {
        b = b->next;
    }
    i = 1;
    // printf("%d ", rem);
    while (i <= count - n)
    {
        b->next = head;
        head = head->next;
        b = b->next;
        i++;
    }
    b->next = NULL;
    return d;
}

int main()
{
    node *head = NULL;
    addAtBeg(&head, 5);
    addAtBeg(&head, 4);
    addAtBeg(&head, 3);
    addAtBeg(&head, 2);
    addAtBeg(&head, 1);
    // addAtBeg(&head, 6);
    int n = 19;
    node *a = rotate_list(head, n);
    printList(&a);
    return 0;
}