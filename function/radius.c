#include<stdio.h>
void circul (int, float*,float *);
int main    ()
{   
    int rad;
    float area ;
    float cercumference;
   printf(" enter radius:");
    scanf("%d",&rad);
    circul(rad,&area,&cercumference);
    printf("radius of circul is %d\n area of circul is %f \n cercumferecnce of circul is %f ",rad,area,cercumference);
        return 0;

}

 void circul(int rad, float *p,float *q )
 {
    *p= 3.14*rad*rad;
    *q=2*3.14*rad;


 }