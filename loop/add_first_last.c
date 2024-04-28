#include <stdio.h>
int main()
{
    int num1,num2;
    printf("enter a number :");
    scanf("%d", &num1);
    num2=num1;
    num2=num2%10;
    while (num1 >= 10)
    {
        num1 = num1 / 10;
    }
    

    printf(" sum of first and last digit %d", num1+num2);
    return 0;
}