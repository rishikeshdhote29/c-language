#include<stdio.h>
int main()
{ int a,b;
printf("enter a number :");
scanf("%d",&a);
printf("revers of this num is: :");
while (a>0)
{
    b=a%10;
    printf("%d",b);
    a=a/10;
}
return 0;}