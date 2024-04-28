#include <stdio.h>
#include<string.h>
int main()
{
    char str[5][10];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("enter name:");
        scanf("%s", str[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n lenght of %s is %d", str[i],strlen(str[i]));
    }
    return 0;
}