#include <stdio.h>

int main(void){
    int iBalance=10000;
    int iwithdraw=0;
    
    printf("Curent balance：%d\n\n",iBalance);
    printf("enter withdraw amount(0 to quit)：");
    scanf("%d",&iwithdraw);

    while(iwithdraw!=0){
        if (iwithdraw<iBalance){
            if (iwithdraw%100==0){
                printf("withdraw seccessful!\n");
                iBalance-=iwithdraw;
            }
            else{
                printf("withdraw amount must be multiple of 100\n");
            }
        }
        else{
            printf("insuffcient balance\n");
        }
        printf("Curent balance：%d\n\n",iBalance);
        printf("enter withdraw amount(0 to quit)：");
        scanf("%d",&iwithdraw);


    }
    printf("Transaction ended.\n");
    printf("Final balance：%d\n",iBalance);


}