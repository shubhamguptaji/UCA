#include <stdio.h>
#include<stdlib.h>

void print(int *a, int size){
    for(int i=0;i<size;i++) {
        printf("%d, ",a[i]);
    }
}

int main()
{
    int size;
    scanf("%d", &size);
    int a[100];
    for (int i = 0; i < size; i++)
        scanf("%d", &a[i]);
    int finalflag;
    int tempflag;
    int count = 1;
    finalflag = 1;
    do
    {
        tempflag = 1;
        for (int i = 1; i < size; i++)
        {
            if (a[i - 1] > a[i])
            {
                int temp = a[i - 1];
                a[i - 1] = a[i];
                a[i] = temp;
                if (tempflag != 0)
                {
                    tempflag = 0;
                }
            }
        }
        if (tempflag != 0)
        {
            finalflag = 0;
        }
        count++;
    } while (finalflag != 0);
    print(a,size);
    return 0;
}