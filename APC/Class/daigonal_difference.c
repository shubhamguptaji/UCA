#include<stdio.h>
#include<math.h>
int main() {
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int arr_rows=3;
    int arr_columns=3;
    int sum1=0, sum2=0;
    int j=0;
    for(int i=0;i<arr_rows;i++) {
        sum1+= arr[i][j];
        j++;
    }
    printf("%d\n",sum1);
    j=arr_columns-1;
    for(int i=0;i<arr_rows;i++) {
        sum2 += arr[i][j];
        j--;
    }
    printf("%d\n",sum2);
    printf("%d\n",abs(sum1-sum2));
    return 0; 
}