#include<iostream>
using namespace std;
int main (){

     for (int i =1;i<=4;i++){
            for (int k=4;k>=i;k--)
                cout<<" ";

      for(int j=1;j<=i;j++)
      cout<<"*";
       for(int k=2;k<=i;k++)
       //for (;i<=i+1;i)
       cout<<"*";

      cout<<endl;     
     
     }
     int k;
      for (int i = 1; i <= 3; i++)
     {
         for (int j = 1; j <= i + 1; j++)

             cout << " ";
         for ( k = 3; k >= i; k--)
            cout << "*";
            
         for (int j =2; j >= i; j--)
             cout << "*";
            
         cout << endl;     
     
     
       }
    return 0;
}