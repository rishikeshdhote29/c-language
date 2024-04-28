#include <stdio.h>
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
        printf("\n hello %c", str[i][0]);
    }
    return 0;
}