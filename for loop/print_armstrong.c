#include <stdio.h>
#include <math.h>
int main()
{
    int num,i, x, sum = 0, rem;
    printf("enter a number:");
    scanf("%d", &num);
 for(i=1;i<=num;i++)
{   x = i;
    for (; x > 0;)
    {
        rem = x % 10;
        sum = sum + rem * rem * rem;
        x /= 10;
    }

    if (i == sum)
    {
        printf(" %d",i);
    }
    sum=0;
}

    return 0;
}