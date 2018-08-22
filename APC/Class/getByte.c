#include<stdio.h>
int getByte(int x, int n) {
    printf("%d\n", (x >> (n << 3)) & 0xff);
    return (x >> (n << 3)) & 0xff;
}

int main() {
    getByte(1,4);
    return 0;
}