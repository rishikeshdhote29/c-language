#include <stdio.h>
int main()
{
    int i, j,ch;

    for (i = 1; i < 5; i++)
    {
        for (j =1,ch=65; j <=i; j++)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}