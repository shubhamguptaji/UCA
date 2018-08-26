#include<stdio.h>
#include<stdlib.h>

int main() {
    int n=9247;
    int count=0,i=1;
    while(i<=n) {
        if(i%1000==0) {
            count+=3;
            i+=5;
        }
        else if(i%100==0) {
            count+=2;
            i+=5;
        }
        else if(i%50==0) {
            count+=2;
            i+=5;
        }
        else if(i%10==0) {
            count +=1;
            i+=5;
        }
        else if(i%5==0) {
            i+=5;
            count++;
        }
        else
            i++;
    }
    printf("%d", count);
}