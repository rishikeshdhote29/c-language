// wap to calculate quadratic eqn
#include<stdio.h>
#include<math.h>
int main()
{int a,b,c,d ;

printf ("enter   three coefficient ");
scanf("%d %d %d",&a,&b,&c);

d= (b*b)-(4*a*c);

printf("value of x1 %f" ,(-b+sqrt(d))/(2.0*a));
printf("value of x2 %f" ,(-b-sqrt(d))/(2.0*a));

return 0 ;

}