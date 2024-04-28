#include<stdio.h>


int factorial(int a){

    int i,f=1;
    i=a;
    
         for(;i>0;i--)
         f=f*i;
    
    return f;
}int main(){
 
 int a;
 printf("ENTER A NUMBER:");
 scanf("%d",&a);
 printf("factorial is %d",factorial(a));
    return 0;

}