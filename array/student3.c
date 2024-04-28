#include <stdio.h>
int main()
{
    int arr[3][4];
    int i, j, max,sub;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {

            printf("enter no:");
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        max = 0;
        for (j = 0; j < 4; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                sub=j+1;
            }
        }
        printf("\n highest no of %d student in subject %d is %d", i + 1, sub,max);
    }

    return 0;
}