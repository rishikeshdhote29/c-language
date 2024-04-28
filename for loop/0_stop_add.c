#include<stdio.h>
int main ()
 {int num,sum=0;
 printf("enter number and press to stop\n");
 for(;;)
 { scanf("%d",&num);
   
   
    if(num==0)
       break;
   if(num>0)
   sum += num;
 }
 
 printf("sum af all number is %d",sum);
 
 return 0;
 
 }