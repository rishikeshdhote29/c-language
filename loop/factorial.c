#include<stdio.h>
int main()
{ int num,total=1;
printf("enter a number to calculate factorial:");
scanf("%i",&num);
    while (num>=1)
    {
        total=total*num;
        num-=1;
    }
printf("factorial is %i",total);

    return 0;
}