#include<stdio.h>
int main()
{
  int arr[10];
  int i,max=0;
  for(i=0;i<10;i++)
    {
        printf("Enter a number:");
        scanf("%d",&arr[i]);
    }

    for(i=0;i<10;i++){

        if(arr[i]>max)
            max=arr[i];

    }

    printf("max member is %d",max);
    return 0;

}