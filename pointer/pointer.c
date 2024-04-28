#include<stdio.h>
int main()
{ int a=10;
 int *p;
 p=&a;
 printf("value of a %d",a);
 printf("\naddress of a is %llu",p);
 *p=30;
 printf("\n again a value %d",a);
 



    return 0;
}