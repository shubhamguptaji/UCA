#include<stdio.h>

int func(char* a,int n) {
    int b[6][6] = {0};
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(i==j)
                b[i][j]=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) {
            if(a[i]==a[j]) {
                // printf("hello\n");
                if(b[i-1][j+1]==1) {
                    printf("hi\n");
                    printf("%d %d ",i,j);
                    // printf("%d",a[])
                    printf("\n");
                    b[i][j]=1;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            printf("%d ", b[j][i]);
        printf("\n");
        }
    return 0;
}

int main() {
    char a[] = "xybaby";
    int x = func(a,6);
    return 0;
}