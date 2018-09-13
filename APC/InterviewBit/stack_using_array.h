#include <stdio.h>
#include <stdlib.h>
#include<string.h>
const int SIZE = 150;
typedef struct stack
{
    char *arr;
    int top;
} stk;

void init(stk *mem, int x)
{
    mem->arr = (char *)malloc(sizeof(char) * x);
    mem->top = -1;
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

void push(stk *s, char data)
{
    s->top += 1;
    s->arr[s->top] = data;
}

int pop(stk *s)
{

    int a = s->arr[s->top];
    s->top -= 1;
    return a;
}

int top(stk* s) {
    return s->arr[s->top];
}
// int main()
// {
//     stk s;
//     init(&s, 10);
//     push(&s, 1);
//     push(&s, 2);
//     // printf("%d ", pop(&s));
//     printf("%d ",top(&s));
//     // display(&s);
//     return 0;
// }