#include<stdio.h>

int sum_of_digits(int a);

int main(void){
    int a =0;
    printf("enter your number: ");
    scanf("%d",&a);
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