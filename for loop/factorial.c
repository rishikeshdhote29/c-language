#include <stdio.h>
int main()
{
    int num ,i,fac=1;
    printf("enter a  number:");
    scanf("%d",&num);
    for ( i = 1; i<=num     ; i++)
    {
        fac=fac*i;

    }
    printf("factorial is %d",fac);
    
    
    return 0;
}