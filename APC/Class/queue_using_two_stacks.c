#include "stack_using_array.h"

void enqueue(stk *s, int data)
{
    s->top++;
    s->arr[s->top]=data;
}

int dequeue(stk* s, stk* t) {
    int x =s->top;
    for(int i=0;i<=x;i++) {
        t->top=i;
        t->arr[i] = pop(s);
        // printf("%d %d\n",i,t->arr[i]);
    }
    return pop(t);

}

int main()
{
    stk s, t;
    init(&s, 20);
    init(&t, 20);
    enqueue(&s, 1);
    enqueue(&s, 2);
    enqueue(&s,3);
    enqueue(&s, 4);
    enqueue(&s, 5);
    enqueue(&s, 6);
    printf("%d ",dequeue(&s,&t));
    printf("%d ",dequeue(&s,&t));
    printf("%d ",dequeue(&s,&t));
    printf("%d ",dequeue(&s,&t));
    printf("%d ",dequeue(&s,&t));
    printf("%d ",dequeue(&s,&t));
    return 0;
}