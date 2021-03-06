#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    int head;
    int tail;
    int size;
    int *arr;
} deq;

void initialize(deq *d, int n)
{
    d->tail = -1;
    d->head = 0;
    d->size = n;
    d->arr = (int *)malloc(sizeof(int) * n);
}

void enqueue(deq *d, int x)
{
    if (d->head == 0)
        d->tail++;
    d->arr[d->head] = x;
    d->head++;
}

int dequeue(deq *d)
{
    if (d->tail == -1)
        return 0;
    int a = d->arr[d->tail];
    d->tail++;
    d->tail %= d->size;
    return a;
}

void print(deq *d)
{
    for (int i = d->tail; i < d->head; i++)
        printf("%d ", d->arr[i]);
}

int slidingWindowSumMax(deq *d, int w, int j)
{
    int sum = 0;
    for (int i = j; i < j+3; i++)
        sum += d->arr[i];
    printf("%d\n", sum);
}

void slidingMaximum(const int* a, int n, int w) {
    
    queue* q = (queue*)malloc(sizeof(queue));
    initialize(q, n);
    int max = INT_MIN;
    // *len1 = n-w+1;
    // int* res = (int*)malloc(sizeof(int) * (*len1+1));
    int k=0, i;
    for(i=0;i<w;i++)
    {
        enqueue(q,a[i]);
        if(a[i]>=max)
            max = a[i];
    }
    // res[k++]= max;
        // printf("%d ", max);

    for(i=w;i<n;i++) {
        int temp = dequeue(q);
        if(max == temp)
            max = findMax(a, i-w+1, i);
        if(a[i]>=max)
            max = a[i];
        enqueue(q,a[i]);
        // printf("%d ", max);
        // res[k++] = max;
    }
    // return res;
}

int main()
{
    deq *d = (deq *)malloc(sizeof(deq));
    initialize(d, 5);
    enqueue(d, 1);
    enqueue(d, 2);
    enqueue(d, 3);
    enqueue(d, -1);
    enqueue(d, 5);
    for (int i = d->tail; i <= d->head - 3; i++)
    {
        slidingWindowSumMax(d, 3,i);
    }
    // dequeue(d);
    // dequeue(d);
    print(d);
    return 0;
}