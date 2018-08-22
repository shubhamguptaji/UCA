#include<stdio.h>
int prime(int n) {
    int flag=0;
    if(n<2)
      return 0;
  	else if(n==2) 
      return 1;
    for(int i=2;i<n;i++) {
        if(n%i==0) {
            flag=1;
            break;
        }
        else {
            flag=0;
        }
    }
    if(flag) return 0;
    else return 1;
}
int main() {
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        if(prime(i)) {
            printf("%d", i);
        }
    }
}