#include "linked_list.h"

void reverse(node **head, int m, int p)
{
    node* current = *head;
    int count=0;
    while(count<m-1){
        current=current->next;
        count++;
    }
    // printList(head);
    node* prev = current;
    current = current->next;
    node* n = NULL;
    while(current!=NULL) {
        n = current->next;
        current->next = prev;
        prev = current;
        current = n;
    }
    *head = prev;
}
int main()
{
    node *head = NULL;
    addAtBeg(&head, 5);
    addAtBeg(&head, 4);
    addAtBeg(&head, 3);
    addAtBeg(&head, 2);
    addAtBeg(&head, 1);
    printf("\n");
    // node* rev = reverse_recursively(head);
    reverse(&head,2,4);
    printList(&head);
}