#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

const int SIZE = 150;
typedef struct stack
{
    int *arr;
    int top;
} stk;

stk* init(stk *mem, int x)
{
    mem->arr = (int *)malloc(sizeof(int) * x);
    mem->top = -1;
    return mem;
}

int isFull(stk *s)
{
    if (s->top == SIZE)
    {
        return 1;
    }
    return 0;
}

int isEmpty(stk *s)
{
    if (s->top == -1)
        return 1;
    return 0;
}

void push(stk *s, int data)
{
    s->top = s->top + 1;
    s->arr[s->top] = data;
}

int pop(stk *s)
{
    if(isEmpty(s))
        return -1;

    int a = s->arr[s->top];
    s->top -= 1;
    return a;
}

int top(stk* s) {
    return s->arr[s->top];
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    stk *s;
    // int n;
    // scanf("%d", &n);
    stk* t = init(s,10);
    // while(n--) {
    //     int t;
    //     scanf("%d ", &t);
    //     if(t==1) {
    //         int data;
    //         scanf("%d ", data);
    //         push(s,data);
    //         printf("hello");
    //     }
    //     else if(t==2)
    //     {
            
    //         pop(s);
    //     }
    //     else if(t==3) {
    //         int max = s->arr[s->top];
    //         pop(s);
    //         while(!isEmpty(s)){
    //             if(s->arr[s->top]>max)
    //                 max  = s->arr[s->top];
    //             pop(s);
    //         }
    //         printf("%d\n", max);
    //     }
    // }
    push(t, 1);

    return 0;
}