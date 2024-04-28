#include<stdio.h>
int main()
{   
    printf("%llu",sizeof(4));
    printf("\n%llu", sizeof('a'));
    printf("\n%u", sizeof("rishikesh"));
    printf("\n%u", sizeof(2.5));
    printf("\n%u", sizeof(2.5f));

    return 0;
}