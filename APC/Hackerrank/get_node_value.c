#include "linked_list.h"

int nodevalue(node* h, int pos)  {
    node* a= h;
    int count =0;
    // if(h==NULL)
    //     return 0;
    while(a!=NULL) {
        count++;
        a=a->next;
    }
    node* b = h;
    printf("%d\n",count);
    int i=1,position = count - pos;
    while(b->next!=NULL && i<position) {
        b=b->next;
        i++;
    }
    return b->data;
    return 0;
}
int main()
{
    node *head = NULL;
    addAtBeg(&head, 5);
    addAtBeg(&head, 4);
    addAtBeg(&head, 3);
    addAtBeg(&head, 2);
    addAtBeg(&head, 1);
    // printList(&head);
    printf("\n");
    // printf("%d",head->data);
    int a = nodevalue(head,3);
    printf("%d",a);
    return 0;
}