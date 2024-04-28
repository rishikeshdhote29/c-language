#include <stdio.h>
int main()
{
    int size, i, j;
    // printf("enter an interger");
    // scanf("%d",&size)

    for (i = 1; i <25; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* "); 
        }
        printf("\n");
    }
    return 0;
}