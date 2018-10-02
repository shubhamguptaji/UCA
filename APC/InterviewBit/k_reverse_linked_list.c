#include "linked_list.h"

node* reverse(node* h, int k) {
    node* curr = h;
    node* prev = NULL;
    node* next = NULL;
    int count =0;
    while(curr && count<k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if(next) {
        h->next = reverse(next, k);
    }
    return prev;
}


int main()
{
    node *head = NULL;
    addAtBeg(&head, 6);
    addAtBeg(&head, 5);
    addAtBeg(&head, 4);
    addAtBeg(&head, 3);
    addAtBeg(&head, 2);
    addAtBeg(&head, 1);
    printf("\n");
    // node* rev = reverse_recursively(head);
    node *a = reverse(head, 5);
    printList(a);
    return 0;
}