#include "linked_list.h"

node* reverse(node* h) {
    node *ptr1 = NULL;
    node* ptr2 = h;
    while(ptr2) {
        node* temp = ptr2->next;
        ptr2->next = ptr1;
        ptr1 = ptr2;
        ptr2=temp;
    }
}

node* recursive_reverse(node* h) {
    if(h->next==NULL) {
        return h;
    }
    node* head = recursive_reverse(h->next);
    h->next = h->next->next;
    h->next = NULL;
}

