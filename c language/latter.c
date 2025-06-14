#include<stdio.h>
int main    ()
{ char ch;
printf("enter a character");
scanf("%c",&ch);
if (ch>=65&&ch<=90  )       

{
 printf("capital latter") ; 
}
else if (ch>=98 &&ch<=122)

{
    printf("small latter        ");
}

else if (ch>=48 &&ch<=57)

{
    printf("a digit        ");
}
else{printf("somthing else");}


return 0;
}