#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int longest_palindromic_substring(char* a, int* z) {
    int lena=strlen(a);
    int l=0,r=0;
    for(int i=1;i<lena;i++) {
        printf("%d ", i);
    }
    return 0;
}

int main()
{
    char a[] = "abaxaba";
    int z = (int*)malloc(sizeof(int)*strlen(a));
    longest_palindromic_substring(a,z);
    return 0;
}