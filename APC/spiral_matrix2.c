#include <stdio.h>
int main()
{

    int A = 80;
    int i, j = 0,k=0,l=0;
    int top = 0;
    int bottom = A - 1;
    int left = 0;
    int right = A - 1;
    int a[A][A];
    while (left <= right && top <= bottom)
    {
        
        for (i = left; i <= right; i++)
        {
            j++;
            a[k][i] = j;
            // printf("%d ", j);
            l=i;
        }
        top++;

        for (i = top; i <= bottom; i++)
        {
            j++;
            a[i][l] = j;
            // printf("%d ", j);
            k=i;
        }
        right--;
        for (i = right; i >= left; i--)
        {
            j++;
            a[k][i] = j;
            // printf("%d ", j);
            l=i;
        }
        bottom--;
        for (i = bottom; i >= top; i--)
        {
            j++;
            a[i][l] = j;
            // printf("%d ", j);
            k=i;
        }
        left++;
        
    }
    for(i=0;i<A;i++) {
        printf("[");
        for(j=0;j<A;j++) {
            printf("%d " , a[i][j]);
        }
        printf("]\n");
    }
    return 0;
}