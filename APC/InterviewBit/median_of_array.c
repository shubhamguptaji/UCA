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
    int l, flag1=0, flag2=0,i=0,j=0;
    if((m+n)%2)
    {
    int k =(m+n)/2;
    while(l<k) {
        flag1=0;
        flag2=0;
        if(a[i]<b[j]){
            i++;
            flag1=1;
        }
        else {
            j++;
            flag2=1;
        }
        l++;
    }
    if(flag1)
        printf("%d",a[i-1]);
    else if(flag2)
        printf("%d",b[j-1]);
    else
        printf("%d",a[i-1]+b[j-1]);
    }
    return 0;
}

int main()
{
    int a[] = {1,3,5 };
    int b[] = {2,4} ;
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
    len = median(a,b,2,0);
    return 0;
}