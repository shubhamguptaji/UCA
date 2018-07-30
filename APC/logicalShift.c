#include<stdio.h>
int logicalShift(int x, int n) {
    int mask = ~(((1 >> 31) >> n)<<1);
    printf("%d\n", (mask&(x>>n)));
    return ((mask&(x>>n)));
}

int main() {
    logicalShift(-1,1);
    return 0;
}