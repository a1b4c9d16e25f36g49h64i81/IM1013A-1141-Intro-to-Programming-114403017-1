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
int print_recursive(int);

int main(void){
    int a =0;
    printf("enter your number: ");
    scanf("%d",&a);
    print_recursive(a);
}