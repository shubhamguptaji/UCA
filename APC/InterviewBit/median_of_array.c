#include <stdio.h>
#include<stdlib.h>

int* merge(int a[], int b[], int m, int n, int *len)
{
    int *c = (int*)malloc(sizeof(int)*(m+n));
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < m)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < n)
    {
        c[k] = b[j];
        j++;
        k++;
    }
    for (int i = 0; i < m + n; i++)
        printf("%d ", c[i]);
    *len = m+n;
    return c;
}

int median(int a[], int b[], int m, int n) {
    int l=0, flag1=0, flag2=0,i=0,j=0;
    int k =(m+n)/2;
    for(int x=0;x<m;x++)
        printf("%d ",a[x]);
    printf("\n");
    while(l<=k) {
        flag1=0;
        flag2=0;
        if(a[i]<b[j]){
            i++;
            flag1=1;
            printf("i= %d  flag1=%d ",i,flag1);
        }
        else {
            j++;
            flag2=1;
            printf("j= %d ",j);
        }
        printf("\n");
        l++;
    }
    // }
    if((m+n)%2)
    {
    if(flag1)
        printf("%d",a[i]);
    else if(flag2)
        printf("%d",b[j]);
    }
    else {

    }
    return 0;
}

int main()
{
    int a[] = {2,4,6,7} ;
    int b[] = {1,3,5};
    int len;
    // int* c = merge(a, b, 2, 0, &len);
    // printf("\n");
    // for (int i = 0; i < len; i++)
    // {
    //     printf("%d ", c[i]);
    // }
    // double mid;
    // if(len%2==1)
    //     mid = c[len/2];
    // else
    //     mid = (double)(c[(len/2)-1] + c[(len/2)])/2;
    // printf("\n%f\n",mid);
    len = median(a,b,4,3);
    return 0;
}