#include<stdio.h>
int main()
{  int a,i=2;
printf("enter a number :");
 scanf("%d",&a);
 
   for(;i<a;i++){

    if (a%i==0)
    {
        break;
    }
    
   } 

   if(a==i  )
   printf("%d is prime number ",a);
   else
   printf("%d in not a prime number ",a);
    return 0;
}
