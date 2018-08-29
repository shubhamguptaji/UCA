#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node* next;
}node;

typedef struct stack {
    node* top;
}stk;

node *createNewNode()
{
    node *nn = (node *)malloc(sizeof(node));
    return nn;
}
void push(stk *s, int d)
{
    node *nn = createNewNode();
    nn->data = d;
    nn->next = s->top;
    s->top = nn;
}

int pop(stk *s) {
    if(s->top==NULL)
        return -1;
    else {
        int a = s->top->data;
        s->top = s->top->next;
        return a;
    }

}

int top(stk *s) {
    return s->top->data;
}
int main() {
    stk *s = (stk*)malloc(sizeof(stk));
    s->top=NULL;
    push(s,1);
    push(s,2);
    push(s,3);
    printf("%d ",pop(s));
    printf("%d ",pop(s));
    printf("%d ", top(s));
    printf("%d ",pop(s));
}