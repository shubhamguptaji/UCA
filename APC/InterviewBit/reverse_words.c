#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char *a)
{
    int count = 0;
    int len = strlen(a), k = -1;
    // printf("%d", len);
    // char* b= strrev(a);
    // for(int i=0;i<len;i++)
    //     printf("%c",a[i]);
    char *c = (char *)malloc(sizeof(char) * len);
    printf("\b");
    for (int i = len; i >= 0; i--)
    {
        // printf("%c",a[i]);
        count++;
        if (a[i] == ' ')
        {
            count--;
            // printf("%d ", count);
            for (int j = i; j <= i + count; j++)
            {
                // printf("%c", a[j]);
                c[k++] = a[j];
            }
            count = 0;
        }
        if (i == 0)
        {
            // printf(" ");
            c[k++] = ' ';
            for (int j = i; j <= i + count; j++)
            {
                // printf("%c", a[j]);
                c[k++] = a[j];
            }
        }
    }
    for (int i = 0; i < k; i++)
        printf("%c", c[i]);
    printf("%d", k);
}

int main()
{
    char a[] = "the sky is blue";
    reverse(a);
    return 0;
}