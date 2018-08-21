#include <stdio.h>
#include <string.h>
char *strstra(char *a, char *b)
{
    int len = strlen(a);
    int i, flag = 0;
    int lenb = strlen(b);
    for (i = 0; i < len - lenb; i++)
    {
        if (a[i] == b[0])
        {
            for (int j = 0; j < lenb; j++)
            {
                if (a[i + j] == b[j])
                {
                    flag = 1;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag)
            break;
    }
    // if (flag)
    //     return a[i];
    // else
    //     printf("Not Found");
    return a[i];
}

int main()
{
    char a[] = "hello world";
    char b[10] = "ll";
    char *c = strstra(a,b);
    printf("%c",c);
    return 0;
}