#include <stdio.h>
int main()
{   int num,sqr,n,sum=0;
  printf(" enter an integer:");
  scanf("%d",&num);


  sqr=num*num;
  
   for(;sqr>0;sqr/10)
   {
            sum=sum+sqr%10;
        


      
   }
      if(num==sum)
      printf("number is neon");
      else printf("number is not neon");

    return 0;

}