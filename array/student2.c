#include <stdio.h>
int main()
{
    int arr[3][4];
    int i, j, max;
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
        max=0;
        for (j = 0; j < 4; j++)
        {       if (arr[i][j]>max)
        {           max=arr[i][j];
        
        }
        
         
        }
        printf("\n highest no of %d student is %d", i + 1, max);
    }

    return 0;
}