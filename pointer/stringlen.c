#include<stdio.h>
int main()
{ char str[15];
    char *p;
    p=str;
    printf(" enter a string:");
    scanf("%s",p);


    while(*p)
    {
        p++;
    }
    printf("%d",p-str);
    return 0;
}