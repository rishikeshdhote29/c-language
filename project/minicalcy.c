#include<stdio.h>
int main()
{ int a,b,c,d;
char op ;

printf(" enter a value ");
scanf("%d",&a);
printf(" enter a op ");
scanf(" %c",&op);
printf(" enter a value ");
scanf("%d",&b);
if (op=='+')
{
    c=a+b;
}
else if (op=='-')
{
    c=a-b;                  
}
else if (op=='*')
{
    c=a*b;
}
 else if (op=='/')
 {
    c=(float)  a/b;
 }
 else{goto end;}
 printf(" enter a op ");
 scanf(" %c",&op);

// printf(" enter a value ");
// scanf("%d,&");
if (op=='+'||op=='-'||op=='*'||op=='/'  )
{
   printf(" enter a value ");
scanf("%d,&a");
if (op=='+')
{
    d=a+c;
}
else if (op=='-')
{
    c=c-a;                  
}
else if (op=='*')
{
    c=c*a;
}
 else if (op=='/')
 {
    c=(float)  c/a;
 }
 else{printf(" syntaxt error");}
}
/*else{
    printf("answer is %d",c);
}*/
printf(" answer is %d",d);

end:
printf("ho gya tera");
    return 0;
}