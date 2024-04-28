#include<stdio.h>
#include<stdlib.h>
int main()
{
 int n,sum=0,i;
 int *p;
 printf("how many element do you want to store:");
 scanf("%d",&n);
 p= (int *) malloc(n*sizeof(int));
 if(!p)
 {
    printf ("memory is not avilable");
        return 1;
 }
    for(i=0;i<n;i++)
    {
        printf("enter a number:");
        scanf("%d",p+i);
    }

    printf("you inputed:");

        for (i = 0; i <n; i++)
    {
        printf("\n%d",*(p+i));
        sum+=*(p+i);
    }
    printf("\nsum is %d",sum);
    
    printf("\naverage is %f ",(float)sum/n);

     return 0;
}