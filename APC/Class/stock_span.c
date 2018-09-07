#include "stack_using_array.h"

void stockSpan(int *a, int n)
{
    stk *s;
    init(s, n);
    int st[n];
    push(s, 0);
    st[0] = 1;
    for (int i = 1; i < n; i++)
    {
        while (!isEmpty(s) && a[top(s)] <= a[i])
            pop(s);
        st[i] = isEmpty(s) ? i : i - top(s);
        push(s, i);
        // printf("%d ", st[i]);
    }
    for(int i=0;i<n;i++)
        printf("%d ", st[i]);

}

int main()
{
    int a[] = {100, 80, 60, 70, 60, 75, 85};
    stockSpan(a, 7);
    // for (int i = 0; i < 7; i++)
    //     printf("%d ", b[i]);
    return 0;
}