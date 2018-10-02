#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    int data;
    struct node * next;
}node;

node* createNewNode() {
    node* nn = (node*)malloc(sizeof(node));
    return nn;
}

void addAtBeg(node** h, int data) {
    node* nn = createNewNode();
    nn->data = data;
    nn->next = *h;
    *h = nn;
}

void addAtLast(node** h, int data) {
    node* nn = createNewNode();
    nn->data = data;
    nn->next = NULL;
    if(*h == NULL) {
        *h = nn;
    }
    else{
        node* curr = *h;
        while(curr->next) {
            curr = curr->next;
        }
        curr->next = nn;
    }
}

void addAtPosition(node** h, int data, int pos) {
    if(pos==1) {
        addAtBeg(h,data);
    }
    else {
        node* curr = *h;
        int p=1;
        while(p<pos-1&&curr) {
            curr = curr->next;
            p++;
        }
        if(curr == NULL){
            printf("Position does not exist\n");
        }
        else {
            node *nn = createNewNode();
            nn->data = data;
            nn->next = curr->next;
            curr->next = nn;

        }
    }
}
void printList(node *h)
{
	while (h != NULL)
	{
		printf("%d ", h->data);
		h = h->next;
	}
}

// int deleteAtBeg(node** h) {
//     int data;
//     if((*h)==NULL){
//         return 0;
//     }
//     else{
               
// }