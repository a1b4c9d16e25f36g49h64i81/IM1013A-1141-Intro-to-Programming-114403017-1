#include<stdio.h>

int print_recursive(int a){
    if (a==1){
        printf("%d\n",1);
    }
    else{
        printf("%d",a);
        print_recursive(a-1);
    }
}

int main(void){
    int print_recursive(int);
    int sum_of_digits(int a);
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