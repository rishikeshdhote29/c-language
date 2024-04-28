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
    {  for(j=0;str[i][j]!='\0';j++)
       { printf(" %c", str[i][j]);}
       printf("\n");}
    return 0;
}