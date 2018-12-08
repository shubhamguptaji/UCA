#include "linked_list.h"

node *merge(node *head1, node *head2)
{
    node *a = NULL;
    node *b = head1;
    node *c = head2;
    while (b != NULL && c != NULL)
    {
        if ((b->data) < (c->data))
        {
            // printf("%d ",b->data);
            addAtLast(&a, b->data);
            b = b->next;
        }
        else
        {
            // printf("%d ",c->data);
            addAtLast(&a, c->data);
            c = c->next;
        }
        // a=a->next;
    }
    while (b != NULL)
    {
        addAtLast(&a, b->data);
        b = b->next;
    }
    while (c != NULL)
    {
        addAtLast(&a, c->data);
        c = c->next;
    }
    return a;
}

node *mergeTwoLists(node *head1, node *head2)
{
    node *a = NULL;
    node *b = head1;
    node *c = head2;
    while (b != NULL && c != NULL)
    {
        if ((b->data) > (c->data))
        {
            node* temp = createNewNode();
            temp->data = c->data;
            printf("%d\n ",temp->data);
            b->next=NULL;
            temp->next =b->next; 
            b->next = temp;
            c = c->next;
        }
        else
        {
            // printf("%d ",b->data);
            b = b->next;
        }
        // printf("%d ",b->data);
    }
    while (c != NULL)
    {
        b->next = c;
        c->next = b->next->next;
        c = c->next;
    }
    return b;
}

int main()
{
    node *head = NULL;
    addAtBeg(&head, 10);
    addAtBeg(&head, 9);
    addAtBeg(&head, 8);
    addAtBeg(&head, 7);
    addAtBeg(&head, 1);
    node *head1 = NULL;
    addAtBeg(&head1, 5);
    addAtBeg(&head1, 4);
    addAtBeg(&head1, 3);
    addAtBeg(&head1, 2);
    addAtBeg(&head1, 1);
    node *c = mergeTwoLists(head, head1);
    printList(&c);
    return 0;
}