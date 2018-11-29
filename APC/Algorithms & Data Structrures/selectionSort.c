#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int min = 0;
    for (int i = 0; i < n - 1; i++)
    {
        min=i;
        for (int j = i; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min=j;
            }
        }
        swap(&a[i], &a[min]);
    }

    for(int i=0;i<n;i++)
        printf("%d ", a[i]);
    return 0;
}