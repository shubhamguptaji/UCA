#include "linked_list.h"

node *remove_duplicates(node *head)
{
    node* a= head;
    node* b = NULL;
    // b = head;
    node* c =b;
    while(a!=NULL) {
        int val = a->data;
        while(val == a->data) {
            a = a->next;
        }
            b = a;
            b =b ->next;
            a= a->next;
    }
    return b;
}

int main()
{
    node *head = NULL;
    addAtBeg(&head, 5);
    addAtBeg(&head, 4);
    // addAtBeg(&head, 4);
    addAtBeg(&head, 4);
    addAtBeg(&head, 3);

    addAtBeg(&head, 3);
    addAtBeg(&head, 2);
    addAtBeg(&head, 1);
    addAtBeg(&head, 1);
    // addAtBeg(&head, 1);
    node *a = remove_duplicates(head);
    printList(&a);
    return 0;
}