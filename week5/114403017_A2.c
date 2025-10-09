#include <stdio.h>
int main(void){
    int iInput=0;
    int ipassword=0;

    printf("enter a 4-digit number to generate a password：\n");
    scanf("%d",&iInput);
    while(iInput<=1000||iInput>=9999){            //check the input
        printf("enter a 4-digit number");
        scanf("%d",&iInput);
    }
    

    while(ipassword){              //check the password
        int ipassword=(iInput*3+1357)%10000;
    }
    printf("a secret password has been generated");
    
    int iguess=0;
    int itimes=1;
    
    while(iguess!=ipassword){
        printf("--- ROUND %d ---",itimes);
        printf("enter a 4-digit number：");
        scanf("")
        printf("A B");
        itimes+=1;
    }




 }