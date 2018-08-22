#include "linked_list.h"

node *remove_duplicate(node *head)
{
    node *a = head;
    while (a->next!=NULL)
    {
        // printf("%d\n", a->data);
        if (a->data == a->next->data)
        {
            a->next = a->next->next;
            // printf("hello");
        }
        else
        {
            // printf("%d\t\n\n",a->data);
            a = a->next;
        }
    }
    return head;
}

int main()
{
    node *head = NULL;
    addAtBeg(&head, 4);
    addAtBeg(&head, 3);
    addAtBeg(&head, 2);
    addAtBeg(&head, 2);
    addAtBeg(&head, 1);
    printf("\n");
    // node* rev = reverse_recursively(head);
    node *b = remove_duplicate(head);
    printList(&b);
    // printList(&head);
    return 0;
}