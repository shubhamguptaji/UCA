#include<stdio.h>
#include<string.h>

int main() {
    char a[100];
    gets(a);
        int len= strlen(a);
        char b[100];
        int j=0;
        for(int i=0;i<len;i++) {
            if((a[i]>='a'&&a[i]<='z') || (a[i]>='A'&&a[i]<='Z') || (a[i]>=0 && a[i]<=9)) {
                b[j]=tolower(a[i]);
                j++;
            }
        }
        int len2=strlen(b);
        char rev[100];
        j=0;
        for(int i=len2-1;i>=0;i--) {
            rev[j]=b[i];
            j++;
        }
        // puts(rev);
        if(strcmp(b,rev)==0) {
            printf("Yes");
        }
        else
            printf("NO");
    return 0;    
}