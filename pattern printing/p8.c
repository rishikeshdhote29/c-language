#include <stdio.h>
int main()
{
    int i, j, n = 68;

    for (i = 1; i <= 4; i++, n--)

    {

        for (j =n; j >= 65; j--)
        {
            printf("%c", j);
        }

        printf("\n");
    }
    return 0;
}