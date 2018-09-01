#include<stdio.h>
#include<stdlib.h>

int main() {
    int n = -1146467285;
    int b, revnum=0;
    while(n) {
        b= n%10;
        revnum = revnum*10+b;
        n/=10;
    }
    printf("%d",revnum);
    return 0;
}