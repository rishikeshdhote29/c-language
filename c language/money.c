#include<stdio.h>
#include<conio.h>
int main()
{
int amt;
printf("enter amount:");
scanf("%d",&amt);

printf(" note on 2000 is %d",amt/2000);
amt=amt%2000;
printf(" \nnote on 1000 is%d",amt/1000);
amt=amt%1000;
printf("\nnote on 500 is %d",amt/500);
amt=amt%500;
printf(" \nnote on 200 is %d",amt/200);
amt=amt%200;
printf("\n note on 100 is %d",amt/100);
amt=amt%100;
printf(" \nnote on 50 is %d",amt/50);
amt=amt%50;
printf(" \nnote on 20 is  %d",amt/20);
amt=amt%20;
printf(" \nnote on 10 is %d",amt/10);
amt=amt%10;
printf(" \nnote on  5 is %d",amt/5);
amt=amt%5;
return 0 ;


}