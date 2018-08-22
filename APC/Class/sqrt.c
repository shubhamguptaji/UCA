#include<stdio.h>
#include<conio.h>
double sqr(double , double);
void main()
{
double i,j,n;
printf("enter a number\n");
scanf("%lf",&n);
j=n*100;
for(i=1;i<=n*5;i++)
{
j=sqr(j,n);
}
printf("\nresult is %lf",j);
getch();
}
double sqr(double j, double n)
{
return (j+(n/j))/2;   // Check out newtons Algorithm for 
}