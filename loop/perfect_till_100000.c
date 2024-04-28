#include <stdio.h>
int main()
{
    int num=1, sum = 0, i = 1;
   while (num<=100000)
   {
    
   
                while (i < num)
                {
                    if (num % i == 0)
                        sum = sum + i;
                    // if (sum == num)
                    // {
                    //     printf("\n%d",sum);
                        
                    // }

                    i++;
                }
                if (sum == num)
                {
                    printf("\n%d", sum);
                }
          num++;  
          i=1;  
          sum=0;     
   }
    return 0;
}