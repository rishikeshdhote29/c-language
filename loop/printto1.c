#include<stdio.h>
int main()
{int i,n,m;
i=1;
m=-1;
printf("enter a number:");
scanf("%d",&n);
if (n>=1)
{         while (i<=n) 

 {printf("\n%d",i);
       i++;
       }   
}
else 
{
    while (m >= n)
    {
        printf("\n%d", m);
        m -=1 ;
    }
}



return 0;
}