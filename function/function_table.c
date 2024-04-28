#include<stdio.h>
void table (int,int);
int main(){
int a,b;

printf("enter two mumnber:");
scanf("%d %d",&a,&b);
table(a,b);
}
void table(int i, int j){
        int x;
    if(j>0){

       for(x=1;x<=j;x++) 
        printf("\n%d * %d =%d",i,x,i*x);
    }
    else 
    printf("table can not be printed");

}