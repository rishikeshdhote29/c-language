#include <stdio.h>

int main()
{
    char str[5][10];
    int i,j;
    for (i = 0; i < 5; i++)
    {
        printf("enter name:");
        scanf("%s", str[i]);
    }
    for (i = 0; i < 5; i++)
    {       
        for(j=0;str[i][j]!='\0';j++);
        printf("\n lenght of %s is %d", str[i], j);
    }
    return 0;
}