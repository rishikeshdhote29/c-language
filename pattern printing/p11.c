#include <stdio.h>
int main()

{
    int i, j,k,n,m=6;

    for (i = 1; i <= 4; i++)
    {
        for (j =m ; j >= 1; j-=1)
            printf(" ");
        for (n = 1; n <= i; n++)
            printf("%d ", n);
         for(k=i-1;k<=i&&k>0;k--)
         printf("%d ",k);
        printf("\n");
        m-=2;
    }

    return 0;
}