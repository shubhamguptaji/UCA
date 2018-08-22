#include<stdio.h>
#include<sys/time.h>
int main() {
    struct timeval now;
    gettimeofday(&now, NULL);
    int a[] = {1,2,8,9,10};
    int b[] = {6,7,3,4,5};
    int i=0, j=0, k=0;
    int c[10];
    while(i<5 && j<5) {
        if(a[i]>=b[j]) {
            c[k]=b[j];
            j++;
        }
        else {
            c[k]=a[i];
            i++;
        }
        k++;
    }
    while(j<5) {
        c[k]=b[j];
        k++;
        j++;
    }
    while(i<5) {
        c[k]=a[i];
        k++;
        i++;
    }
    for(int i=0;i<10;i++)
        printf("%d ",c[i]);
    unsigned int t=now.tv_usec;
    printf("%u", t);
    return 0;
}