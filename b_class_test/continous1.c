#include<stdio.h>

int main (void){
    int number=0;
    int lenght=0;
    int now_length=0;
    
    printf("enter your number");
    scanf("%d",&number);

    //int left_number=1;

    while(number=0){
        if (number%10==1){
            now_length+=1;
        }
        else{
            if (now_length>lenght){
                lenght=now_length;
            }
            now_length=0;
        }
        
        //left_number=number%10;
        number=number/10;
    }

}