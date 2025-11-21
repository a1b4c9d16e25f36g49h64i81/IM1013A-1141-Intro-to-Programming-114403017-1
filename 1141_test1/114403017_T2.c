#include<stdio.h>
#include<math.h>

void dectobin(int a){
    int number =a;
    int bin=0;
    int icount=0;

    while(number!=0){
        printf("%d %d %d\n",number,icount,bin);
        bin=bin+(number%2)*pow(10,icount);
        number=number/2;
        icount+=1;
    }

    //return bin;
}

void get_symbol(int row,int col,int N){
    printf("  ");
    for (int i =1;i<2*N+2;i++){
        printf("%d ",i);
    }
    puts("");
    for (int i =1;i<N*2+2;i++){
        printf("%d ",i);
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
        do{
            printf("\nPlease enter the size of the triangle (1~20): ");
            scanf("%f",&fnumber);

            if (icount!=0){
                printf("Invalid Input!");
            }
        }while(fnumber>20 || fnumber<1 || fnumber==(int)(fnumber));
        
        int icounter=1;

        for (int i=1 ;i<(int)fnumber+1;i++){
            for (int j=0;j<i;j++){
                printf("%d ",icounter);
                icounter++;
            }
            puts("");
        }
    
    case 2://decimal to binary
        do{
            printf("\nPlease enter a decimal number: ");
            scanf("%f",&fnumber);

            if (icount!=0){
                printf("Invalid Input!");
            }
        }while(fnumber>127 || fnumber<0);
        
        //printf("%d\n",dectobin((int)fnumber));

        /*for(int i =0;i<fnumber;i++){
            for(int j =0;j<;j++){

            }
        }*/
    case 3://printing a pattern
        do{
            printf("\nPlease enter a decimal number: ");
            scanf("%f",&fnumber);

            if (icount!=0){
                printf("Invalid Input!");
            }
        }while(fnumber>127 || fnumber<0);
        get_symbol(0,0,(int)fnumber);

    case -1://end
        printf("\nProgram ends\n");
        break;
    default:
        printf("InValid Input!");
    }

}