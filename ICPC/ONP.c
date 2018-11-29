#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
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

int top(stk *s)
{
    return s->arr[s->top];
}

int isoperand(char a)
{
    if (a != '+' && a != '-' && a != '*' && a != '/' && a != ')' && a != '^')
        return 1;
    return 0;
}

bool precedence(char left, char right)
{
    char *operators = "+-*/^";
    int precedence[] = {1, 1, 2, 2, 3};
    int leftIndex = 0;
    int rightIndex = 0;
    int n = strlen(operators);
    int i;
    for (i = 0; i < n; i++)
    {
        if (operators[i] == left)
            leftIndex = i;
        if (operators[i] == right)
            rightIndex = i;
    }
    if (precedence[leftIndex] < precedence[rightIndex])
        return true;
    return false;
}

void toPostFix(char *str, stk *s)
{
    int n = strlen(str), k = 0;
    char *a = (char *)malloc(sizeof(char) * n);
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '(')
        {
            push(s, str[i]);
        }
        else if (isoperand(str[i]))
        {
            a[k++] = str[i];
        }
        else if (str[i] == ')')
        {
            while (s->arr[s->top] != '(')
            {
                a[k++] = pop(s);
            }
            pop(s);
        }
        else
        {
            while (precedence(str[i], s->arr[s->top]))
            {
                char b = pop(s);
                a[k++] = b;
            }
            push(s, str[i]);
        }
    }
    a[k] = '\0';
    printf("%s\n", a);
}

int main()
{
    int t;
    scanf("%d ", &t);
    while (t--)
    {
        char str[400];
        gets(str);
        stk s;
        init(&s, strlen(str));
        toPostFix(str, &s);
    }
    return 0;
}