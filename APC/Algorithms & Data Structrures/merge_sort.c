#include <stdio.h>

void merge(int *a, int l, int mid, int r) {
    int i=l;
    int j=mid+1;
    int k=0;
    int aux[10];
    while(i<=l && j<=r) {
        if(a[i]>a[j]) {
            aux[k++]=a[j++];
        }
        else
            aux[k++]=a[i++];
    }
    while(i<=mid)
        aux[k++]=a[i++];
    while(j<=r)
        aux[k++]=a[j++];
    for(int i=0;i<k;i++) {
        a[l+i]=aux[i];
    }
}

void mergeSort(int *a, int l, int r)
{
    if (l == r)
        return;
    int mid = (l + r) / 2;
    mergeSort(a, l, mid);
    mergeSort(a, mid + 1, r);
    merge(a, l, mid, r);
}

int main() {
    int a[] = {10,9,8,7,6,5,4,3,2,1};
    mergeSort(a,0,9);
    for(int i=0;i<10;i++) {
        printf("%d ",a[i]);
    }
    printf("%d",__SIZEOF_DOUBLE__);
    return 0;
}