#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("enter value of a:");
scanf("%d",&a);
printf("enter value of b:");
scanf("%d",&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("value of a is%d \n value of b is%d",a,b);

  return 0 ;

}