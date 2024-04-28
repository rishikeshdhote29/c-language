#include <stdio.h>
int main()
{

    int i, j, k;
    for (i = 1; i <= 4; i++)
    { for(j=2;j<=i;j++)
        printf(" ");
        for(k=4;k>=i;k--)
        printf("* ");
        printf("\n");
    }
    for(i=2;i<=5;i++)

        { for(j=3;j>=i;j--)
        printf(" ");
        for(k=2;k<=i;k++)     
           printf("* ");

        printf("\n");
        }
    return 0;
}