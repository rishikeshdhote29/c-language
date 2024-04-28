#include <stdio.h>
int main()
{
    int arr[3][4];
    int i, j,sum;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {

            printf("enter no:");
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {sum=0;
        for (j = 0; j < 4; j++)
        {sum+=arr[i][j];

            
        }
        printf("\ntotal no of %d student is %d",i+1,sum);
    }

    return 0;
}