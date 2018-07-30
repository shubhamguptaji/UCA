#include<stdio.h>
int evenDigits(long int n)
{
    int num=0;
    if(n>10 && n%2==0) {
        printf("%d", n%10);
        evenDigits(n/10);
    }  
    else {
        evenDigits(n%10);
    }
    return num;
}
int main() {
    printf("%d",evenDigits(84356));
    return 0;
}