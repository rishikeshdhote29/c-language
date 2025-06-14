//wap to accpt age from the user if user put age in minus or 0 again ask age from the user
#include<stdio.h>
int main ()
{int age;
input:
printf("enter your age;");
scanf("%d",&age);


if (age<=0)
{
    printf("invalid input,try again");
    goto input;

}
else{printf("your age is %d",age);}
    return 0;
}