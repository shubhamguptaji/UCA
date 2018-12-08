#include "linked_list.h"

void sortList(node* head) {
    node* current = head;
    node* last = NULL;
    if(head==NULL)
        return;
    int flag=0;
    do {
        flag = 0;
        current = head;
        while(current->next != last) 
        {
            if(current->data > current->next->data)
            {
                int temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
                flag =1;
            }
            current = current->next;
        }
        last = current;
    }while(flag);
}

int main() {
    node* head = NULL;
    addAtBeg(&head, 1);
    addAtBeg(&head, 2);
    addAtBeg(&head, 3);
    addAtBeg(&head, 4);
    addAtBeg(&head, 5);
    printList(head);
    printf("\n");
    sortList(head);
    printList(head);
    return 0;
}
