#include <stdio.h>

int main(void){
    int integert1;
    int integert2;
    
    printf("enter your integert\n");//enter integert 1
    scanf("%d",&integert1);

    printf("enter your integert\n");//enter integert 2
    scanf("%d",&integert2);

    int sum;
    sum=integert1+integert2;
    printf("the sum is %d\n",sum);
}