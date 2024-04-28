#include <stdio.h>
int main()
{
    int arr[3][3];
    int i, j,sum=0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            printf("enter no:");
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            printf(" %d", arr[i][j]);
                if(i==j)
                sum+=arr[i][j];
        }
        printf("\n");
    }
        printf("sum of digoanl is %d",sum);
    return 0;
}