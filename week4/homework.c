#include <stdio.h>

int main(void){
    unsigned int icounter = 0;
    int igrade = 0;
    int itotal = 0;        
    int ipass = 0;
    int ifail = 0;

    printf("please enter student grade or enter -1 to end\n");
    scanf("%d",&igrade);
    while (igrade !=-1){
        int iGrademaxlimit = 100;
        int igrademinlimit = 0;

        if (igrade>=0 && igrade<= 100){
            if(igrade<60){
                ifail += 1;
            }
            if(igrade>=60){
                ipass += 1;
            }
            icounter = icounter + 1;
            itotal = igrade + itotal;

            printf("please enter student grade or enter -1 to end\n");
            scanf("%d",&igrade); 
        }
        else{
            printf("your enter is invaliable.please enter a number between %d and %d\n",iGrademaxlimit,igrademinlimit);
            scanf("%d",&igrade);
        }

    }//end while
    
    if(icounter==0){    //if user not enter any grande
        printf("you don't enter any grade\n");
    }
    else{
    printf("the average is %.2f\n",(float)itotal/icounter);
    printf("the pass number is %d\n",ipass);
    printf("the fail number is %d\n",ifail);
    printf("the student number is %d\n",icounter);
    printf("the total grade is %d\n",itotal);

    }//end if

}