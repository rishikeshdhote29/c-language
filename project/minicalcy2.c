#include<stdio.h>
#include <stdlib.h>

int main()
{ float a,b,c,d;
char op ;

printf(" enter a value ");
scanf("%f",&a);
printf(" enter a op ");
scanf(" %c",&op);
printf(" enter a value ");
scanf("%f",&c);
again:{
switch (op)
 {
 case '+':
   // printf("sum is%d",a+b);
       c=c+a;

    break;
    case '-':
    //printf("sum is%d",a-b);
    c=c-a;
    break;
    case '*':
   // printf("sum is%d",a*b);
   c=c*a;
    break;
    case '/':
   // printf("sum is%f",a/(float)b);
   c=c/a;
   break;
   case '=':{if (op=='/')
   {
    goto endf;
   }
   
    break;}
    default:

     printf(" error");}
}
printf(" enter a op ");
scanf(" %c",&op);
fflush(stdin);
if  (op=='+'||op=='-'||op=='*'||op=='/'  )
{ printf(" enter a value ");
scanf("%f",&a);
    goto again;
}
else{
    goto endf;
}



endf:{printf("answer is %.3f",(float)c);}


system("pause");
return 0;
}