#include<stdio.h>

int main (){
    float iC;
    printf("enter celsius\n");
    scanf("%f",&iC);
    float iF=iC*9/5+32;
    printf("%f Fa is %f\n",iC,iF);
}//end main