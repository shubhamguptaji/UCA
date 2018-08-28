#include <stdio.h>
#include <stdlib.h>


void swap(int* a, int i, int j) {
    int temp = a[i];
    a[i]=a[j];
    a[j]=temp;
}


void quickSort(int* a,int l, int r) {
    if(r<=l)
        return;
    int last=l;
    int ran=0;
    swap(a,ran,l);
    int p=0;
    for(int i=l+1;i<=r;i++) {
        if(a[i]>p)
            swap(a,i,++last);
    }
    swap(a,l,last);
    // quickSort(a,l,last);
    // quickSort(a,last+1,r);
}

void moveElements(int *a, int n)
{
    quickSort(a,0,n);
}

int main()
{
    int a[] = {7, -6, 13, 10 ,15, 5, 2 , -8, -9, -1};
    moveElements(a, 10);
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
}