#include<stdio.h>

int main() {
    int b=10 ;
    int x =((b>>1)&0x55555555);
    int y=((b<<1)&0xAAAAAAAA);
    printf("%d", x|y);
    return 0; 
}