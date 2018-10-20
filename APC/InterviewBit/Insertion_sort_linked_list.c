#include "linked_list.h"

void insert(node** res, node* current) 
{
    if(*(res)==NULL || current->data<(*res)->data)
    {
        current->next = *res;
        *res = current;
    }
    else 
    {
        node* temp = *res;
        while(temp->next!= NULL && temp->next->data <= current->data)
        {
            temp = temp->next;
        }
        current->next = temp->next;
        temp->next = current;

    }
}

node* insertionSort (node* head) {
    node* res = NULL;
    node* current = head;
    while(current!=NULL)
    {
        node* temp = current->next;
        insert(&res, current);
        current = temp;
    }
    head = res;
    
}

int main() {
    node* head = NULL;
    addAtBeg(&head, 2);
    // addAtBeg(&head, 3);
    // addAtBeg(&head, 1);
    printList(head);
    printf("\n");
    node* res = insertionSort(head);
    printList(res);
}