#include <stdio.h>
int main()
{
    int arr[5];
    int i,j,temp;
    for (i = 0; i < 5; i++)
    {
        printf("Enter a number:");
        scanf("%d", &arr[i]);
    }
        for (j = 0; j < 5; j++)
    {
        
       for (i = 0; i < 5; i++)
       {
        printf(" %d ",arr[i]);
       }
       printf("\n");
       temp = arr[0];

       arr[0] = arr[1];
       arr[1] = arr[2];
       arr[2] = arr[3];
       arr[3] = arr[4];
       arr[4] = temp;
    }

    return 0;
}