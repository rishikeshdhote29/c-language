#include <stdio.h>
int main()
{
    int arr[10],i,j,temp;
    for(i=0;i<5;i++)
 {
        printf("enter a number:");
        scanf("%d",&arr[i]);


 }
 for (i=0;i<5;i++)
 {  
          for(j=i+1;j<5;j++)  {
            
            if(arr[i]>arr[j])
            {  temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

            }}
 }


for (i = 0; i < 5; i++)
{
    printf("\n%d",arr[i]);
    
}
 



    return 0;
}