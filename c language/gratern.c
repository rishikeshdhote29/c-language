#include<stdio.h>
int main    ()
{
    int a,b;
printf("enter to integrer:");
scanf(   "%d %d",&a,&b);
if (a<b)
{
    printf("greter number is %d",b);
} 
else if (a>b)
{
    printf("greter number is %d",a);
}
else
{
    printf("both are equal");
}
     return 0;
}