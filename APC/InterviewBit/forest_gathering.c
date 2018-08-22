#include <stdio.h>
// int sumArray(int a[][], int n,int m)
// {
// }
int main()
{
    int n;
    scanf("%d", &n);
    int a[3][2]={0};
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);
    int b[3][2]={0};
    int m=5;
    for (int i = 0; i < n; i++) {
        b[i][1]= a[i][0] + a[i][1]*m;
        b[i][0]=a[i][0];

    }
    for(int i=0;i<n;i++)
        for(int j=0;j<2;j++)
            printf("%d ",b[i][j]);
    return 0;
}