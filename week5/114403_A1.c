#include <stdio.h>

int main(void){
    int iBalance=10000;
    int iwithdraw=0;
    
    printf("Curent balance：%d\n",iBalance);
    printf("enter withdraw amount(0 to quit)：");

    while(iwithdraw!=0){
        scanf("%d",&iwithdraw);
        if (iwithdraw<iBalance){
            if (iwithdraw%100==0){
                printf("withdraw seccessful");
                iBalance-=iwithdraw;
            }
            else{
                printf("withdraw amount must be multiple of 100");
            }
        }
        else{
            printf("insuffcient balance");
        }
        printf("Curent balance：%d\n",iBalance);
        printf("enter withdraw amount(0 to quit)：");


    }
    printf("Transaction ended.");
    printf("Final balance：%d",iBalance);


}