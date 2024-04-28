#include<stdio.h>
int main()
{
    int i,n,sum=0,sum2=0;
    printf("enter a number:");
    scanf("%d",&n);
    i=1;
     while(i<=n)
     {
        if(i%2==1)
        { sum+=i;
           i++;
        } 
        else{

               sum2+=i;
               i++;


        }

     

     }

     printf("sum of even is%d\n sum of odd is%d",sum,sum2);

    return 0;
}