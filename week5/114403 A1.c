#include <stdio.h>

int main(void){
    int iBalance=10000;
    int iwithdraw=0;
    
    while(iwithdraw!=0){
        printf("Curent balance：%d\n",iBalance);
        printf("enter withdraw amount(0 to quit)：");
        scanf("%d",&iwithdraw);
        if (iwithdraw>iBalance){
            if (iwithdraw%100!=0){

            }
        }
    }


}