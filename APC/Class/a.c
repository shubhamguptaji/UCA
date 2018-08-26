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
void func3(int a[5])
{
    int i;
    for(i = 1; i < 4; i++)
        a[i] = a[i-1] -a[i] + a[i+1];
}
// int main()
// {
//     int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int b[] = {5, 65, 45, 2, 25};
//     // func(&arr);
//     // func1(arr);
//     // fu(nc2(*arr);
//     func3(b);
//     for(int j=0;j<5;j++)
//         printf("%d ", b[j]);
//     return 0;
// }

int main()
{
    int a[5] = {0,1,2,3,4};
    int *p1, *p2;
    p1 = &a[2];
    p2 = &a[0];
    printf("%d",*p2++);
	return 0;
}