#include<stdio.h>
#include<stdlib.h>

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
    int p=a[last];
    for(int i=l+1;i<=r;i++) {
        if(a[i]<p)
            swap(a,i,++last);
    }
    swap(a,l,last);
    quickSort(a,l,last);
    quickSort(a,last+1,r);
}

int main() {
    int a[] = {10,9,8,7,6,5,4,3,2,1};
    quickSort(a,0,9);
    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}