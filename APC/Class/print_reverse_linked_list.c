#include "linked_list.h"
void func(node *h)
{
    if (h->next == NULL)
    {
        printf("%d ",h->data);
        return;
    }

    func(h->next);
    printf("%d ", h->data);
}
int main()
{
    node *head = NULL;
    addAtBeg(&head, 5);
    addAtBeg(&head, 4);
    addAtBeg(&head, 3);
    addAtBeg(&head, 2);
    addAtBeg(&head, 1);
    printList(&head);
    // func(head);
    // printf("%d",head->data);
    return 0;
}