#include<stdio.h>

int main() {
    int a=68;
    int x =a>>4&0x0F0F0F0F;
    int y = a<<4&0xF0F0F0F0;
    a = x|y;
    printf("%d",a);
    return 0;
}