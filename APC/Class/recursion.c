// #include<stdio.h>
// // int func1(int a)
// // {
// //     if (a <= 1)
// //             printf("%d=", a);
// //     else
// //     {
// //             func1(a/2);
// //             printf("%d=", a);
// //     }
// // }
// int func1(int a)
// {
//     if (a < 0) 
//         return( -func1(-a));
//     else
//     if(a < 10)
//         return (a+1) % 10;
//     else
// 	{
//         return (100 * func1(a / 10));
//     }
// }
// int main() {
//     printf("%d",func1(348));
//     return 0;
// }
#include <stdio.h>
void primefactors(int n) {
  if(n%2==0) {
    printf("2\n");
    n/=2;
  }
  else if(n%3==0) {
    printf("3\n");
    n/=3;
  }
  primefactors(n);
}
int main()
{
   int no;
   scanf("%d",&no);
   primefactors(no);
   return 0;
}