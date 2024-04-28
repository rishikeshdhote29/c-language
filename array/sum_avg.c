#include <stdio.h>
int main()
{
    int arr[3][4];
    int i, sum=0,j;
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
        for (j = 0; j < 4; j++)
        {

            printf(" %d", arr[i][j]);
            sum+=arr[i][j];
  
        }
        printf("\n");
        }
    printf("sum of elemnts is %d",sum);
    printf("avg of elements %f",sum/12.0);    return 0;
}