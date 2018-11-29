#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    int *a;
    int head, tail, size;
} queue;

void initialize(queue *q, int size)
{
    q->head = -1;
    q->tail = -1;
    q->size = size;
    q->a = (int *)malloc(sizeof(int) * size);
}

int isFull(queue *q)
{
    if (q->head == q->size - 1)
    {
        return 1;
    }
    return 0;
}

int isEmpty(queue *q)
{
    if (q->head == -1 && q->tail == -1)
        return 1;
    return 0;
}

void enqueue(queue *q, int data)
{
    if ((q->head + 1)%q->size == q->tail)
    {
        return;
    }
    else if (isEmpty(q))
    {
        q->head=q->tail =0;
    }
    else{
        q->tail = (q->tail + 1)%q->size;
    }
    q->a[q->tail] = data;
    // printf("%d ", q->size);
}

int dequeue(queue *q)
{
    int d;
    if (isEmpty(q))
        return -1;
    else if (q->head == q->tail)
    {
        d= q->a[q->head];
        q->head = q->tail = -1;
    }
    else
    {
        d = q->a[q->head];
        // printf("%d ", q->a[q->head]);
        q->head= (q->head + 1)%q->size;
    }
    return d;
}
int main()
{
    queue *q = (queue *)malloc(sizeof(queue));
    initialize(q, 10);
    enqueue(q, 1);
    enqueue(q, 2);
    printf("%d ", dequeue(q));
    printf("%d ", dequeue(q));

    // printf("%d ", q->a[q->head]);
    return 0;
}