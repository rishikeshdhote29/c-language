#include<stdio.h>
int main (){
 int arr[5];
 int i;
 int *p;
 p=arr;
 for(i=0;i<5;i++)
 { 
    printf("enter number:");
    scanf("%d",*p+i);
 }
 for (i = 0; i < 5; i++)
 {
     printf("\n%d",*(p+i));
    
 }

    return 0;
}