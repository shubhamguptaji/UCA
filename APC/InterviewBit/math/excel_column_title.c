#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int n = 943566;
    // int count = 0, count1 = 0;
    // char a[3];
    // while (n > 26)
    // {
    //     n -= 26;
    //     count++;
    // }
    // while (count > 26)
    // {
    //     count -= 26;
    //     count1++;
    // }
    // if (count1)
    // {
    //     a[0] = count1 + 64;
    //     a[1] = count + 64;
    //     a[2] = n + 64;
    // }
    // else
    // {
    //     a[0] = count + 64;
    //     a[1] = n + 64;
    // }
    int i=0;
    while(n/pow(26,i++)>26);
    char *a = (char*)malloc(sizeof(char) * (i));
    printf("%d ", i);
    i--;
    int j=0;
    while(i>0) {
        if(n==0)
        {
            a[j] = a[j] - 1;
            a[j+1] = 90;
            break;
        }
        else
            a[j++] = n/pow(26,i) + 64;
        n %= (int)pow(26,i--);
        printf("%d ",n);
    }
    a[j]='\0';
    printf("%s",a);
    return 0;
}