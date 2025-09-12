#include<stdio.h>

int main (){
    float fC;
    printf("enter celsius\n");
    scanf("%f",&fC);
    float fF=fC*9/5+32;
    printf("%f Fa is %.2f\n",fC,fF);
}//end main