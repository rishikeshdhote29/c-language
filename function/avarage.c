#include<stdio.h>
int main();
float avarage(int i,int j,int k){
    float x;
    x=(float)(i+j+k)/3;
    return x;

}
int main(){
        int a,b,c;
    printf("enter three number for avarage:");
    scanf("%d %d %d",&a,&b,&c);
    printf("avgarage is %f",avarage(a,b,c));
    
    
    return 0;
}