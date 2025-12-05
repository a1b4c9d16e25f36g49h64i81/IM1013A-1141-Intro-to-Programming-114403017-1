#include<stdio.h>
#define number 5
int main(void){
    int array[number]={};

    for(int i =0;i<number;i++){
        printf("enter your number: ");
        scanf("%d",&array[i]);
        //puts("");
    }

    printf("your numbers are ");

    int icount=0;

    for(int i =0;i<number;i++){
        printf("%d ",array[i]);
        icount+=array[i];
    }    
    printf("\nyour total number is %d",icount);
}