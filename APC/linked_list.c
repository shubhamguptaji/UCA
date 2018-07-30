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
int main() {
    node *head = NULL;
    push(&head, 10);
    append(&head, 20);
    push(&head, 11);
    append(&head, 17);
    push(&head,15);
    printf("%d\n",peek(&head));
    printf("%d\n", head->next->data);
    printList(&head);
    return 0;
}