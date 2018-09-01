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

void longestValidParenthesis(char* a, stk* s) {
    int len = strlen(a);
    int popcount=0,j=0;
    for (int i = 0; i < len; i++)
    {
        if (isOpen(a[i])) {
            push(s, a[i]);
            popcount=0;
        }
        else if (isClosed)
        {
            if (cmp(s->arr[s->top], a[i]))
            {
                pop(s);
                popcount++;
            }
            else
            {
                push(s, a[i]);
                popcount=0;
            }
        }
        if(j<popcount){
            j=popcount;
        }
    }
    printf("%d",j*2);
}

int main() {
    char a[] = "{{()}[[]";
    int len = strlen(a);
    stk s;
    init(&s,len);
    longestValidParenthesis(a,&s);
    return 0;

}