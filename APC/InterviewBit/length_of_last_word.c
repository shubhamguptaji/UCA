#include <stdio.h>
#include <string.h>
int main()
{
    char a[] = "Hello World  ";
    int len = strlen(a), count = 0,i,flag=0;
    for (i = len - 1; i >= 0; i--)
    {
        count++;
        if(count==1 && a[i]==' ') {
            count=0;
            continue;
        }
        if (a[i] == ' ')
        {
            flag=1;
            break;
        }
    }
    if(flag)
        count--;
    printf("%d", count);
    return 0;
}