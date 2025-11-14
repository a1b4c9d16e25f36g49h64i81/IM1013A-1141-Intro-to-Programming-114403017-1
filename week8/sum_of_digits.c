#include<stdio.h>

int sum_of_digits(int a);

int main(void){
    int a =0;
    

    int icount=0;
    do{
        if (icount==0){
            printf("enter your integer(1~100000): ");
            scanf("%d",&a);
        }
        else{
            printf("Invalid input!Please try again.\n");
            scanf("%d",&a);
        }
        icount++;
    }while(a<1 || a>100000);

    printf("%d\n",sum_of_digits(a));
}

int sum_of_digits(int a){
    if (a<=9 &&a>=0){
        return a;
    }
    else{
        return sum_of_digits(a/10)+a%10;
    }
}