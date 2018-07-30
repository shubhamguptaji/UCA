#include <stdio.h>
#include <assert.h>

int sign(int x)
{
    printf("%d\n", ((x >> 31) | (!!x)));
    return ((x >> 31) | (!!x));
}

void test()
{
    assert(sign(-5) == -1);
    assert(sign(5) == 1);
    assert(sign(0) == 0);
}

int main()
{
    test();
    return 0;
}