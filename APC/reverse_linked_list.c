#include "linked_list.h"
node* reverse_recursively(node* h) {
    node* first = h;
    node* second = h->next;
    if(!second) {
        return first;
    }
    else
    {
        node* curr = reverse_recursively(second);
        first->next = second->next;
        second->next = first;
        return curr;
    }
}
node* reverse_ll(node** h) {
    node* ptr1 = NULL;
    node* ptr2 = *h;
    while(ptr2!=NULL) {
        node* ptr3= ptr2->next;
        ptr2->next = ptr1;
        ptr1 = ptr2;
        ptr2 = ptr3;
    }
    return ptr1;
}
int main() {
    node *head = NULL;
    addAtBeg(&head, 5);
    addAtBeg(&head, 4);
    addAtBeg(&head, 3);
    addAtBeg(&head, 2);
    addAtBeg(&head, 1);
    printf("\n");
    node* rev = reverse_recursively(head);
    printList(&rev);
    // printList(&head);

    return 0;
}