#include "linked_list.h"
void add(node *h, node *k)
{
    if (h->next == NULL && k->next == NULL)
    {
        return()
        return;
    }

    add(h->next, k->next);
    printf("%d ", h->data + k->data);
}
int main()
{
    node *h = NULL;
    addAtBeg(&h, 5);
    addAtBeg(&h, 4);
    addAtBeg(&h, 3);
    addAtBeg(&h, 2);
    addAtBeg(&h, 1);
    node *head = NULL;
    addAtBeg(&head, 5);
    addAtBeg(&head, 4);
    addAtBeg(&head, 3);
    addAtBeg(&head, 2);
    addAtBeg(&head, 1);
    // printList(&head, );
    add(head, h);
    // printf("%d",head->data);
    return 0;
}