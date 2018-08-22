#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *createNewNode()
{
    node *nn = (node *)malloc(sizeof(node));
    return nn;
}
void push(node **h, int d)
{
    node *nn = createNewNode();
    nn->data = d;
    nn->next = *h;
    *h = nn;
}
void append(node **h, int d) {
    node *nn = createNewNode();
    nn->data = d;
    nn->next = NULL;
    if(*h==NULL){
        *h = nn;
    }
    else {
        node *curr = *h;
        while(curr->next) {
            curr = curr->next;
        }
        curr->next = nn;
    }
}
int peek(node **h) {
    return (*h)->data;
}
void printList(node **h)
{
	while ((*h) != NULL)
	{
		printf(" %d ", (*h)->data);
		(*h) = (*h)->next;
	}
}
void addAtLast(node **h, int d ,node** slowpointer)
{
	node *nn = createNewNode();
	nn->data = d;
	nn->next=*slowpointer;
	if(*h==NULL)
	{
		*h=nn;
	}
	else
	{
		node *curr = *h;
		while(curr->next)
		{
			curr=curr->next;
		}
		curr->next=nn;
	}	
}
int main() {
    node *head = NULL;
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    // push(&head, 5);
    // push(&head, 6);
    node *fastpointer = head;
    node *slowpointer = head;
    while(fastpointer!=NULL && fastpointer->next != NULL) {
        fastpointer = fastpointer->next->next;
        slowpointer = slowpointer->next;
    }
    addAtLast(&head, 5, &slowpointer);
    // printList(&head);
    printf("%d\n", slowpointer->data);
    node* fptr = head;
    node* sptr = head;
    do {
        fptr = fptr->next->next;
        sptr = sptr->next;
    }while(fptr != sptr);
    printf("%d\n%d", sptr->data, fptr->data);
    // append(&head, 20);
    // push(&head, 11);
    // append(&head, 17);
    // push(&head,15);
    // printf("%d\n",peek(&head));
    // printf("%d\n", head->next->data);
    // printList(&head);
    return 0;
}