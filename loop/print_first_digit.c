#include<stdio.h>
int main()
{ int a;
printf("enter a number :");
scanf("%d",&a);

while (a>=10)
{
    a=a/10;
} 
//a=a%10;

printf(" the first digit is %d",a);



    return 0;


}