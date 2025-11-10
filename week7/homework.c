#include<stdio.h>
char reverse_number(int N){
    char array[7]={'\0','\0','\0','\0','\0','\0','0'};

    for(int i =0;i<5;i++){
        array[i]=N%10+'0';
        N/=10;
    }
    array[5]=N;

    return array[0]+array[1]+array[2]+array[3]+array[4]+array[4]+array[5];
}

int mul(int a,int b){
    return a*b;
}
int main(void){
    int iEnd=0;
    int mul(int, int);
    char reverse_number(int);


    do{
        int iSelection=0;
        puts(" ==== MENU ====\n1) Option 1 - times table\n2) Option 2 - reverse the number\n(-1) End program");

        int icount=0;
        do{
            if(icount!=0){  //if entry has been error
                puts("Invalid option. Try again.");
            }
            printf("\nPlease select an option: ");
            scanf("%d",&iSelection);
            icount++;

        }while(iSelection!=1 && iSelection!=2 && iSelection!=-1);

        switch(iSelection){
            case 1:
                for (int i=1;i<10;i++){
                    for (int j=1;j<10;j++){
                        int iPro =mul(i,j);
                        printf("%2d*%2d=%2d ",i,j,iPro);
                    }
                    puts("");
                }
                break;
            case 2:
                float fNumber=0;
                int icount = 0;
                do{
                    if (icount!=0){
                        printf("Invalid Input!\n");
                    }
                    printf("Enter a positive integer between 1 and 100000: ");
                    scanf("%f",&fNumber);
                    icount++;
                    }while(fNumber<1 || fNumber>100000 || fNumber!=(int)fNumber);// out of the range or float
                
                int iReverse=reverse_number((int)fNumber);
                puts("--- REVERSAL RESULT ---");
                printf("Original Number N: %d\n",(int)fNumber);
                printf("Reversed Number R: %c\n",iReverse);

                break;
            case -1:
                iEnd++;
                printf("\nProgram terminated.\n");
                break;
            default:
                break;
        }
    }while(iEnd==0);
}
