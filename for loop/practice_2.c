// Write a program in C++ to find the last prime number that occurs before the entered number.
 #include<stdio.h>
 int main()
 { int n,n2,i;
 printf("enter a number :");
 scanf("%d",&n);
  for(n2=n-1;n2>0;n2--)
  {
  
  for(i=2;i<n2;i++)
  { if(n2%i==0)
   break;
  }
  
  
     if(n2==i)
   { printf("%d is the last prime number before %d",n2,n) ;
   break;
    }
  }
    return 0;
 }