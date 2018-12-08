#include "linked_list.h"

int func(node **n, node *h)
{
    if (h == NULL)
    {
        return 1;
    }
    else
    {
        int y = func(n, h->next);
        if (y == 1)
        {
            if ((*n)->data == h->data)
            {
                *n = (*n)->next;
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
}

node *reverse(node *h)
{
    node *ptr1 = NULL;
    node *ptr2 = h;
    while (ptr2 != NULL)
    {
        node *ptr3 = ptr2->next;
        ptr2->next = ptr1;
        ptr1 = ptr2;
        ptr2 = ptr3;
    }
    return ptr1;
}

int lPalin(node* A) {
    node* b=A;
    node* c=A;
    int count=0;
    node* d =A;
    while(d->next) {
        count++;
        d=d->next;
    }
    count++;
    printf("%d ",count);
    if(count==2){
        if(A->data == A->next->data)
            return 1;
        return 0;
    }
    while(c && c->next && c->next->next) {
        b=b->next;
        c=c->next->next;
    }
    if(count%2==0) {
        b=b->next;
    }
    if(count<2)
        return 1;
    // b= b->next;
    b = reverse(b);
    // b = b->next;
    // printList(&b);
    while (b != NULL) {
        if(b->data!=A->data)
            return 0;
        if(b->next)
            b = b->next;
        A = A->next;
    }
    return 1;
    
    
    
}

// int lPalin(node *A)
// {
//     node *b = A;
//     node *c = A;
//     int count = 0;
//     // printList(&A);
//     while (c && c->next && c->next->next)
//     {
//         b = b->next;
//         c = c->next->next;
//         count++;
//     }
//     if (count == 0)
//     {
//         if (b->data == b->next->data)
//             return 1;
//         return 0;
//     }
//     b = b->next;
//     b = reverse(b);
//     printList(&b);
//     // printf("\n%d", b->next->data);
//     // b = b->next;
//     while (b != NULL)
//     {
//         printf("\n%d ", A->data);
//         if (b->data != A->data)
//             return 0;
//         if (b->next)
//             b = b->next;
//         A = A->next;
//     }
//     return 1;
// }
int main()
{
    node *head = NULL;
    addAtBeg(&head, 1);
    addAtBeg(&head, 2);
    // addAtBeg(&head, 1);
    // addAtBeg(&head, 8);
    // addAtBeg(&head, 5);
    // printList(&head);
    printf("%d", lPalin(head));
    return 0;
}