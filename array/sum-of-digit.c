#include <stdio.h>
int main()
{
    int arr[5];
    int i,temp,sum=0;
    for (i = 0; i < 5; i++)
    {
        printf("Enter a number:");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        temp = arr[i];
        for (sum = 0; temp > 0; temp /= 10)
        {
            sum = sum + (temp % 10);
       }
       printf("\nsum of digit of %d id %d ",arr[i],sum);
            
    }

    return 0;
}