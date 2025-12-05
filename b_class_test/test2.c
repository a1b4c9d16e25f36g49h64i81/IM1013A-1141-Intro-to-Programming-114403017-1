#include<stdio.h>

int in(int number,int x){

};

int in();

int main(void){
    int number=0;
    int board[5][5]={{1,6,11,16,21},{2,7,12,17,22},{3,8,13,18,23},{4,9,14,19,24},{5,10,15,20,25}};
    
    printf("請輸入數字個數\n");
    scanf("%d",&number);
    /*
    for (int k=0;k<number;k++){
        
        for(int i = 0;i<5;i++){
            for(int j=0;j<5;j++){
                if(board[i][j]==a){

                }
            }
        }
    }*/
    int column=0;
    int raw=0;
    int shay=0;
    int antishay=0;
    int numbers[25]={};




    for (int i=0;i<number;i++){
        for (int j=0;j<5;j++){
            if (numbers[i]+1 in array){
                column++;
            }
            if (numbers[i]+5 in array){
                raw++;
            
            }

            if (numbers[i]+6 in array){
                shay++;
            }

            if (numbers[i]-4 in aaray){
                antishay++;
            }
        }
    }

    int line=0;

    if(column%2==0){
        line+=column/2;
    }
    if(raw%2==0){
        line+=raw/2;
    }
    if(shay%2==0){
        line+=shay/2;
    }
    if(antishay%2==0){
        line+=antishay/2;
    }
    printf("%d",line);
}