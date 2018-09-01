#include "stack_using_array.h"

int isOpen(char a)
{
    if (a == '[' || a == '{' || a == '(')
        return 1;
    return 0;
}

int isClosed(char a)
{
    if (a == ']' || a == '}' || a == ')')
        return 1;
    return 0;
}

int cmp(char a, char b)
{
    if ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'))
        return 1;
    return 0;
}

void brackets(char *s,stk *a)
{
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (isOpen(s[i]))
            push(a, s[i]);
        else if (isClosed)
        {
            if (cmp(a->arr[a->top], s[i]))
            {
                pop(a);
            }
            else
                push(a, s[i]);
        }
    }
    if(isEmpty(a)) {
        printf("balanced");
    }
    else
        printf("unbalanced");
}

int main()
{
    char s[] = "{()[(]}";
    stk a;
    int len = strlen(s);
    init(&a, len - 1);
    brackets(s,&a);
    return 0;
}