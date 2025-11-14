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
    
    int icount=0;
    do{
        if (icount!=0){
            printf("Invalid input!Please try again.\n");
            scanf("%d",&a);
        }
        else{
            printf("enter your integer(1~9): ");
            scanf("%d",&a);
        }
        icount++;
    }while(a<1 || a>9);
    print_recursive(a);
}