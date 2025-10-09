#include <stdio.h>
int main(void){
    int iInput=0;
    int ipassword=0;

    printf("enter a 4-digit number to generate a password：\n");
    scanf("%d",&iInput);
    while(iInput<1000||iInput>9999){            //check the input
        printf("enter a 4-digit number\n");
        scanf("%d",&iInput);        
    }
    while(1){
        int irepeat=0;
        int ipassword=(iInput*3+1357)%10000;//generate password
        int array_pas[4]={ipassword/1000,ipassword%1000/100,ipassword/100%10,ipassword%10};
        for(int i=0;i<4;i++){
            for(int j=i+1;j<4;j++){
                if (array_pas[i]==array_pas[j]&&i!=j){
                    irepeat+=1;
                }
            }
            if(irepeat!=0){
            break;
            }
        }
        printf("%d",irepeat);
        if(irepeat==0){
            break;
        }
        else{
            int ipassword=(ipassword*3+1357)%10000;//generate password
        }
    }

    int array_pas[4]={ipassword/1000,ipassword%1000/100,ipassword/100%10,ipassword%10};

    printf("a secret password has been generated");
    
    int iguess=0;
    int itimes=1;
    int A=0;
    int B=0;
    
    while(iguess!=ipassword){
        printf("--- ROUND %d ---",itimes);
        printf("enter a 4-digit number：");
        scanf("%d",&iguess);
        int array_guess[4]={iguess/1000,iguess%1000/100,iguess/100%10,iguess%10};
        for (int i =0;i<4;i++){
            if(array_guess[i]==array_pas[i]){
                A+=1;
            }
        }
        for (int i=0;i<4;i++){
            for (int j=0;j<4;j++){
                if ( i !=j&&array_guess[i]==array_pas[j]){
                    B+=1;
                }
            }
        }
        printf("%dA%dB",A,B);
        itimes+=1;
    }




 }