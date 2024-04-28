#include <stdio.h>
int main()
{
    int i, j, n =65;

    for (i = 1; i <= 4; i++)

    {
    n=65;
        for (j =1; j<=i; j++,n++)
        {
            printf("%c",n);
        }

        printf("\n");
    }
    return 0;
}