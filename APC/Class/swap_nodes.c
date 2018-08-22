#include "linked_list.h"
node* swap(node *h) {
    node* first = h;
    node* second = h->next;
    while(first&& second->next) {
    first = second->next;
    second= h->next;
    printf("%d %d ", first->data, second->data);
    first=first->next;
    second=second->next;
    }
    // first->next = second->next;
    // second->next = first;
    // h = second;
    // printf("%d %d ", first->data, second->data);
    // // }

    
    // printf("%d %d ", first->data, second->data);
    // printList(&h);

    return h;
}
int main() {
    node *head = NULL;
    addAtBeg(&head, 6);
    addAtBeg(&head, 5);
    addAtBeg(&head, 4);
    addAtBeg(&head, 3);
    addAtBeg(&head, 2);
    addAtBeg(&head, 1);
    // printf("\n");
    // node* rev = reverse_recursively(head);
    // printList(&rev);
    node* a = swap(head);
    // printList(&a);
    // printList(&head);

    return 0;
}