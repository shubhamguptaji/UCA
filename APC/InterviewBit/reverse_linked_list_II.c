#include "linked_list.h"

node *reverse(node *head)
{
    node *prev = NULL;
    node *curr = head;

    while (curr)
    {
        node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

node *reverseBetween(node *head, int m, int n)
{
    if (m == n)
        return head;
    node *revs = NULL, *revs_prev = NULL;
    node *revend = NULL, *revend_next = NULL;

    int i = 1;
    node *curr = head;
    while (curr && i <= n)
    {
        if (i < m)
            revs_prev = curr;

        if (i == m)
            revs = curr;

        if (i == n)
        {
            revend = curr;
            revend_next = curr->next;
        }

        curr = curr->next;
        i++;
    }
    revend->next = NULL;
    revend = reverse(revs);

    if (revs_prev)
        revs_prev->next = revend;
    else
        head = revend;

    revs->next = revend_next;
    return head;
}

int main()
{
    node *head = NULL;
    // addAtBeg(&head, 7);
    // addAtBeg(&head, 6);
    // addAtBeg(&head, 5);
    // addAtBeg(&head, 4);
    addAtBeg(&head, 3);
    addAtBeg(&head, 2);
    addAtBeg(&head, 1);
    // node* rev = reverseBetween_recursively(head);
    node *a = reverseBetween(head, 1, 2);
    printf("\n");
    printList(a);
    return 0;
}