#include<stdio.h>
int main    ()
{ int p,c,m;
 printf("inter pcm marks");
 scanf("%d %d %d",&p,&c,&m);
 if (p>=50)
 {
    if (c>=55)
    {
        if (m>=60  )
        { 
            
               if (p+c+m>=220)
                 {
                            printf(" eligible for admission");
                 }
                   else if (p+m>=130)
                 {
                         printf(" eligible for admission");
        
           
                 }
                else 
                 {
                         printf(" eligible not for admission");
                 }
               
        } else 
        {
            printf(" eligible not for admission");
        }
    }
    else 
        {
                printf(" eligible not for admission");
        } 
 } else 
        {
            printf(" eligible not for admission");
        }
     
    
    
    
    return 0;


}