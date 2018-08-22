#include "linked_list.h"

int func(node** n, node* h) {
    if(h==NULL) {
        return 1;
    }
    else {
        int y=func(n, h->next);
        if(y==1) {
            if((*n) -> data == h->data) {
                *n = (*n)->next;
                return 1;
            }
            else{
                return 0;
            }
        }
    }
}
int main()
{
    node *head = NULL;
    addAtBeg(&head, 5);
    addAtBeg(&head, 4);
    addAtBeg(&head, 3);
    addAtBeg(&head, 4);
    addAtBeg(&head, 7);
    // printList(&head);
    printf("%d",func(&head, head));
    return 0;
}