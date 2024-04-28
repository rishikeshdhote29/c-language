#include <stdio.h>
int main()
{
    float a,b;
    printf("enter a number :");
    scanf("%f", &a);
    printf("h0ow many persent du you want :");
    scanf("%f",&b);

a=a*(b/100);
    printf(" the first digit is %.2f", a);

    return 0;
}