#include<stdio.h>
void main(){
float x = 5.3f;
unsigned char *ch = (char *)(&x);
for(int i=0;i<4;i++) {
printf("%d\n",*(ch+i));
}
}