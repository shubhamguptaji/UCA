#include <stdio.h>
#include<stdlib.h>
typedef struct PriorityQueue
{
    int *arr;
    int size;
    int head;
    int tail;
} pqueue;

void initialize(pqueue *p, int size)
{
    p->arr = (int *)malloc(sizeof(int) * size);
    p->head = 0;
    p->tail = -1;
    p->size = size;
}

void insert(pqueue *p, int data)
{
    p->tail++;
    p->arr[p->head++] = data;
    int k=p->head;
    while(k>1) {
        if(p->arr[k/2] > p->arr[k]){
            int temp = p->arr[k/2];
            p->arr[k/2]=p->arr[k];
            p->arr[k] = temp;
        }
        k = k/2;
    }
}

void delete(pqueue *p) {
    p->tail++;
}

int peek(pqueue* p) {
    return p->arr[p->head];
}

int isEmpty(pqueue* p) {
    if(p->head==p->tail)
        return 1;
    return 0;
}

void print(pqueue* p) {
    for(int i=p.t)
}

int main() {
    pqueue* p;
    initialize(p,5);
    insert(p,2);
    insert(p,1);
    insert(p,6);
    insert(p,4);
    insert(p,5);
    print(p);
    return 0;
}