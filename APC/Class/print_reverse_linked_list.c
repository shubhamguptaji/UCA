#include "linked_list.h"

node *reverse(node **h)
{
    node *ptr1 = NULL;
    node *ptr2 = *h;
    while (ptr2->next)
    {
        node *ptr3 = ptr2->next;
        ptr2->next = ptr1;
        ptr1 = ptr2;
        ptr2 = ptr3;
    }
    return ptr1;
}

int main()
{
    node *h = NULL;
    addAtBeg(&h, 5);
    addAtBeg(&h, 4);
    addAtBeg(&h, 3);
    addAtBeg(&h, 2);
    addAtBeg(&h, 1);

    // printList(&head, );
    add(head, h);
    // printf("%d",head->data);
    return 0;
}