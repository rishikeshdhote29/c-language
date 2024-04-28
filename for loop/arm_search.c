#include <stdio.h>
#include <math.h>
int main()
{
    int num=1, x, sum = 0, rem,n;
   printf("enter a number:");
    scanf("%d", &n);

    

    while (num<n)
    {
        /* code */
    x=num;
    
    for (; num > 0;)
    {
        rem = num % 10;
        sum = sum + rem * rem * rem;
        num /= 10;
    }

    if (sum == x)
    {
        printf(" armstrong num %d", sum);
    }
num++;}
    return 0;
} 