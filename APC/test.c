#include<stdio.h>
int main() {
    int x= 0;
    printf("%d", ((x>>31) | (!!x)));
    return 0;
}