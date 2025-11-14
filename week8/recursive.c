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
    printf("enter your number: ");
    int a =0;
    scanf("%d",&a);
    print_recursive(a);
}