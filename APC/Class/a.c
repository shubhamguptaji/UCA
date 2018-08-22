#include <stdio.h>
void func(int (*a)[3][3])
{
    for (int m = 0; m < 3; m++)
        for (int n = 0; n < 3; n++)
            printf("%d\n", (*a)[m][n]);
}
void func1(int (*a)[3]) {
    for (int m = 0; m < 3; m++)
        for (int n = 0; n < 3; n++)
            printf("%d\n", *(*(a+m)+n));
    
}
void func2(int *a) {
    for(int i=0;i<9;i++) {
        printf("%d", *a+i);
    }
}
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    func(&arr);
    func1(arr);
    func2(*arr);
    return 0;
}