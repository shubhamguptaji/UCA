#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    int n=16;
    char **a = (char**) calloc(n, sizeof(char*));
    int i;
    for(i=0;i<n;i++) {
        if((i+1)%3==0 && (i+1)%5==0){
            a[i] = (char*) calloc(9, sizeof(char));
            strcpy(a[i],"FizzBuzz\0");   
        }
        else if((i+1)%3==0){
            a[i] = (char*) calloc(5, sizeof(char));
            strcpy(a[i],"Fizz\0");
        }
            
        else if((i+1)%5==0) {
            a[i] = (char*) calloc(5, sizeof(char));
            strcpy(a[i],"Buzz\0");
        }
            
        else{
            // int l=0;
            
            int m=i+1;
            int n=i+1;
            int count=0;
            while(n>0) {
                n/=10;
                count++;
            }
            a[i] = (char*) calloc(count, sizeof(char));
            a[i][count--]='\0';
            while(m>0){
                int b = m%10;
                a[i][count--]=b+48;
                m/=10;
                
            }
        }
    }
    for(int i=0;i<n;i++){
        int j=0;
        while(a[i][j]!='\0'){
            printf("%c", a[i][j]);
            j++;
            
        }
        // puts(a[i]);
        printf(" ");
    }
    return 0;
}