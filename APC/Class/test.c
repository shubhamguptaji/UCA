#include<stdio.h>
#include<stdlib.h>

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
    if ((q->head + 1) % q->size == q->tail)
    {
        return;
    }
    else if (isEmpty(q))
    {
        q->head = q->tail = 0;
    }
    else
    {
        q->tail = (q->tail + 1) % q->size;
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
        d = q->a[q->head];
        q->head = q->tail = -1;
    }
    else
    {
        d = q->a[q->head];
        printf("\n%d\n", q->a[q->head]);
        q->head = (q->head + 1) % q->size;
    }
    return d;
}

int findMax(const int a[], int strt, int end) {
    int i, max = INT_MIN;
    for(i=strt;i<=end;i++)
        if(a[i]>=max)
            max = a[i];
    return max;
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

int main() {
    int a[] = {648, 614, 490, 138, 657, 544, 745, 582, 738, 229, 775, 665, 876, 448, 4, 81, 807, 578, 712, 951, 867, 328, 308, 440, 542, 178, 637, 446, 882, 760, 354, 523, 935, 277, 158, 698, 536, 165, 892, 327, 574, 516, 36, 705, 900, 482, 558, 937, 207, 368};
    int n = sizeof(a)/sizeof(a[0]);
    slidingMaximum(a, n,9);
    return 0;
}