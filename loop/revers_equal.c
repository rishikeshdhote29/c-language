#include <stdio.h>
int main()
{
    int a, b,c,revers=0;
    printf("enter a number :");
    scanf("%d", &a);
    
    c=a;
    while (a > 0)

    {
        b = a % 10;

        revers=revers*10+b;

        a = a / 10;
    }
    if (revers==c)
    {
    printf("%d is palindromic number   ", revers);
    }
    else
    printf("%d is not palindromic number   ", revers);
     return 0;
}