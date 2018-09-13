#include "stack_using_array.h"

int largestArea(int *a, int n)
{
    int max_area = 0, area = 0, tp;
    stk s;
    init(&s, n);
    int i = 0;
    while (i < n)
    {
        if (isEmpty(&s) || a[top(&s)] <= a[i])
        {
            push(&s, i++);
        }
        else
        {
            tp = top(&s);
            pop(&s);

            area = a[tp] * (isEmpty(&s) ? i : i - (top(&s)) - 1);
            if (area > max_area)
            {
                max_area = area;
            }
        }
    }
    while (!isEmpty(&s))
    {
        tp = top(&s);
        pop(&s);
        area = a[tp] * (isEmpty(&s) ? i : i - (top(&s)) - 1);
        if (area > max_area)
        {
            max_area = area;
        }
    }
    return max_area;
}

int main()
{
    int a[] = {};
    printf("%d ", largestArea(a, 0));
    return 0;
}