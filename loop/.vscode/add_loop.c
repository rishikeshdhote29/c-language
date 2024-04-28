#include<stdio.h>
int main ()
{
int a,i,t;
printf("enter an int");
scanf("%d",&a);
i=1;
t=0;
while (i<=a)
{
t=t+i;

i++;

}
printf("sum of numbers in : %d",t);

    return 0;

}