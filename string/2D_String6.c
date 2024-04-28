#include<stdio.h>
#include<string.h>
int main(){
    char str[5][10],temp[10];
    int i;
    for(i=0;i<5;i++)
        {
            printf("enter name:");
            gets(str[i]); }
  printf("enter name you want to search");
    gets(temp);
    for (i = 0; i < 5; i++)
    {
        if(strcmp(str[i],temp)==0){

            printf("string matched potision is %d",i++);
        break;
        
        }

    }
    if(i==5 )
    printf("string not found ");
        return 0;
}