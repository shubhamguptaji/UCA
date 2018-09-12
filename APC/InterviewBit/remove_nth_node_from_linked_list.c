#include "linked_list.h"

node *remove_node(node *head, int n)
{
    node *a = head;
    int count = 0;
    while (a->next)
    {
        count++;
        a = a->next;
    }
    count++;
    if (n == 1 && count == 1)
    {
        return NULL;
    }
    // printf("%d\n", count);
    if (count < n || count == n)
    {
        return head->next;
    }
    n = count - n -1;
    printf("\n%d  ", n);
    node *b = head;
    int count1 = 0;
    while (count1 < n)
    {
        b = b->next;
        count1++;
    }
    b->next = b->next->next;
    return head;
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
    int n = 1;
    // printList(&head);
    node *a = remove_node(head, n);
    printList(&a);
    return 0;
}