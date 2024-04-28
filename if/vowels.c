#include<stdio.h>
int main()
{char lt;
 printf(" enter a latter:");
 scanf("%c",&lt);
  switch (lt)           
  {
  case 'a':case'A':
   case 'e':case'E':
    case 'i':case'I':
     case 'o':case'O':
      case 'U':case'u':
    printf("it is vowel");
    break;
  
  default:printf("wrong input");
    break;
  }

    return 0;

}