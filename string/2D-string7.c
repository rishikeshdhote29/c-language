#include<stdio.h>
#include<string.h>
 int main(){


    char temp[10], str[5][10];
   int i,j,x;
    for(i=0;i<5;i++){
            printf("enter string:");
            gets(str[i]);
    }

    for(i=0;i<5;i++)
    {
                

           for(j=i+1;j<5;j++)
           {
               x = strcmp(str[i], str[j]);
               if (x==1)
            {
                        
                   strcpy(temp, str[i]);
                   strcpy(str[i], str[j]);
                   strcpy(str[j], temp);
                
                    }
           }
    }

    for (i = 0; i < 5; i++){
        printf("\n%s",str[i]);


    }
        return 0;

 }
 