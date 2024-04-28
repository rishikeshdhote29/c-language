#include <stdio.h>
int main()
{
    int power, base,i=1,res=1;
    printf("enter base :");
    scanf("%d",&base);
    printf("enter power:" );
    scanf("%d",&power);
    while (i<=power)
    {
        res=res*base;
        i++;
      
    }
    printf("answer is %d",res );
    return 0;
}