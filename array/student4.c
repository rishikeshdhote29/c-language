#include <stdio.h>
int main()
{
    int arr[3][4],brr[3];
    int i, j, max,top=0,std;
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
            }
        }
        brr[i]=max;
    }
  for(i=0;i<3;i++)
     {
                if(brr[i]>top)
            {top=brr[i];
            std=i+1;}

     }

     printf("toper is %d student",std);
    return 0;
}