#include <stdio.h>
int main()
{
    char str[10];
    int i, m,len ,c=0;
    printf("enter your name ");
    scanf("%s", &str);
    for (i = 0; str[i] != '\0'; i++){
        len++;
    }
    for(i=0;i<len/2;i++)
    {
                if(str[i]!=str[len-1-i])
                c++;
    }
    
    if(c==0)

        printf("string is palandrome    ") ;
        else 
        printf("string is not palndrome");   
    
    
    
    
    
        return 0;
}