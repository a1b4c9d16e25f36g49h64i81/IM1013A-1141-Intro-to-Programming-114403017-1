#include<stdio.h>
#include<math.h>

void dectobin(int a){
    int number =a;
    int bin=0;
    int icount=0;

    while(number!=0){
        //printf("%d %d %d\n",number,icount,bin);
        bin=bin+(number%2)*pow(10,icount);
        number=number/2;
        icount+=1;
    }

    printf("The binary number is %d\n", bin);
}

void get_symbol(int row,int col,int N){
    //printf("  ");
    /*for (int i =1;i<2*N+2;i++){
        printf("%d ",i);
    }*/
    puts("");
    for (int i =1;i<N*2+2;i++){
        //printf("%d ",i);
        for (int j =1;j<N*2+2;j++){
            if(i<=N && j<=N){
                printf("@ ");
            }
            if(j>N+1 && i<=N){
                printf("# ");                
            }
            if(i>N+1 && j<=N){
                printf("%% ");                
            }
            if(j>N+1 && i>N+1){
                printf("& ");                
            }
            if(i==N+1 && j!=N+1){
                printf("- ");                
            }
            if(i!=N+1 && j==N+1){
                printf("| ");                
            }
            if(i==N+1 && j==N+1){
                printf("+ ");                
            }
        }
        puts("");
    }

}

void dectobin(int a);

int main(void){
    

/*
    printf(" ==== MENU ====\n");
    printf("%s","1) Option 1 - Increasing Number Triangle Pattern\n");
    printf("%s","2) Option 2 - Decimal to binary number using recursion\n");
    printf("%s","3) Option 3 - Printing a Four-Quadrant Pattern\n");
    printf("%s","(-1) End Program\n");
    printf("%s","Select: ");
    scanf("%f",&fSelect);*/

    int idefault=0;
    do{ 
        float fSelect=0;
        float fnumber=0;
        int icount=0;
        printf(" ==== MENU ====\n");
        printf("%s","1) Option 1 - Increasing Number Triangle Pattern\n");
        printf("%s","2) Option 2 - Decimal to binary number using recursion\n");
        printf("%s","3) Option 3 - Printing a Four-Quadrant Pattern\n");
        printf("%s","(-1) End Program\n");
        printf("%s","Select: ");
        scanf("%f",&fSelect);
    switch((int)fSelect){
        case 1://increasing number
            printf("\nPlease enter the size of the triangle (1~20): ");
            scanf("%f",&fnumber);

            if (fnumber>20 || fnumber<1 || fnumber!=(int)(fnumber)){
                printf("Invalid Input!\n\n");
                break;
            }

            
            
            int icounter=1;

            for (int i=1 ;i<(int)fnumber+1;i++){
                for (int j=0;j<i;j++){
                    printf("%d ",icounter);
                    icounter++;
                }
                puts("");
            }
            puts("");
            break;
        
        case 2://decimal to binary
                
                printf("\nPlease enter a decimal number: ");
                scanf("%f",&fnumber);
                if (fnumber>127 || fnumber<0 || fnumber!=(int)(fnumber)){
                    printf("Invalid Input!\n\n");
                    break;
                }            
            
            dectobin((int)fnumber);

           puts("");
            break;
        case 3://printing a pattern
            printf("\nPlease enter the size of each quadrant: ");
            scanf("%f",&fnumber);   

            if (fnumber>5 || fnumber<1 || fnumber!=(int)(fnumber)){
                printf("Invalid Input!\n\n");
                break;
            }
           

            get_symbol(0,0,(int)fnumber);
            puts("");
            break;

        case -1://end
            printf("\nProgram ends.\n");
            idefault=1;
            break;
        default:
            printf("InValid menu option. Try again.\n");
            puts("");
            break;

    }
    //puts("");
    }while(idefault==0);
}