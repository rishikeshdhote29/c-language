#include <stdio.h>
int main()
{
    int num, i, sum = 0;
    printf(" enter a number:");
    scanf("%d", &num);
    for (; 0 < num; (num /=10))
    {
        sum=sum+num%10;
        
       

    }
    printf("sum of digit  is :%d", sum);
    return 0;
}