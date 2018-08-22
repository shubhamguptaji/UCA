#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int comp2(void* x, void* y) {
    return *((int*)y) - *((int*)x);
}   
int main() {
    int calorie[40] = {819 ,701 ,578 ,403 ,50 ,400 ,983 ,665 ,510 ,523 ,696 ,532 ,51 ,449 ,333 ,234 ,958, 460, 277, 347, 950, 53, 123, 227, 646, 190, 938, 61, 409, 110, 61, 178, 659 ,989, 625 ,237, 944, 550, 954, 439};
    int calorie_count = 40;
    unsigned long int sum=0;
    qsort(calorie,40,sizeof(int),comp2);
    for(int i=0;i<calorie_count;i++) {
        sum = sum + pow(2,i)*calorie[i];
    }
    printf("%ud",sum);
    return 0;
}