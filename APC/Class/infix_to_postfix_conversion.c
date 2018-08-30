#include "stack_using_array.h"
#include <stdbool.h>

int isoperand(char a)
{
    if (a != '+' && a != '-' && a != '*' && a != '/' && a != ')')
        return 1;
    return 0;
}

bool precedence(char left, char right)
{
    char *operators = "+-*/";
    int precedence[] = {1, 1, 2, 2};
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
            // printf("\n%c\n", s->arr[s->top]);
        }
        else if (isoperand(str[i]))
        {
            // printf("\n%c\n", s->arr[s->top]);
            a[k++] = str[i];
        }
        else if (str[i] == ')')
        {
            // printf("\n%c\n", s->arr[s->top]);

            while (s->arr[s->top] != '(')
            {
                // printf("%c ", pop(s));
                a[k++] = pop(s);
            }
            pop(s);
        }
        else
        {
                // printf("\n%c\n", s->arr[s->top]);
                printf("%c ", str[i]);
            while (precedence(str[i],s->arr[s->top]))
            {
                // printf("%c\n", pop(s));
                char b = pop(s);
                a[k++] = b;
            }
            push(s, str[i]);
        }
    }
    printf("%c ", pop(s));
    a[k] = '\0';
    printf("%s\n", a);
}

int main()
{
    stk s;
    init(&s, 30);
    char a[] = "(a*b+c*d/(e+f)-g)";
    toPostFix(a, &s);
    int n = strlen(a);
    printf("%d", n);
    return 0;
}