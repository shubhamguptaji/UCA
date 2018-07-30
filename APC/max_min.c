#include <stdio.h>
long int maximum(long int a, long int b)
{
    return a > b ? a : b;
}

long int minimum(long int a,long int b)
{
    return a < b ? a : b;
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int arr_count = 5;
    long int sum = 0;
    long int max=0;
    long int min;
    for (int i = 0; i < arr_count; i++)
    {
        
        for (int k = 0; k < arr_count; k++)
        {
            if (k == i)
            {
            }
            else
            {
                sum = arr[k]+sum;
            }
        }
        printf("%lu\n", sum);
        if(i==0) {
            max= sum;
            min = sum;
        }
        else {

        max = maximum(max, sum);
        min = minimum(min, sum);
        }
        sum=0;
    }
    printf("%ld %lu", min, max);
}