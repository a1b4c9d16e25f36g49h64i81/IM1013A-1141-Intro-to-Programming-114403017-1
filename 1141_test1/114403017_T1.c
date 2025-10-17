#include <stdio.h>
#include <math.h>


int main(void){
    int iSelect=0;
    int istudents=0;
    int iadults=0;
    int idiscount=0;
    int ibonus=1;
    int iInstall=0;
    int icount;

    printf("==== Future City Tech Expo Ticket System ===\n");
    printf("1) Optional 1 - Single-Order Quotation\n");
    printf("2) Optional 2 - Group Total & Installments\n");
    printf("(-1) End program\n");
    printf("Select: ");
    scanf("%d",&iSelect);
    while (1){
        icount=0;
    
    switch(iSelect){
        case 1:
        icount+=1;
        while(1){
        printf("[Option 1] Enter number of adults (0-20), or -1 to end: ");
        scanf("%d",&iadults);
        if(iadults==-1){
            break;
        }
        printf("[Option 1] Enter number of students (0-20), or -1 to end: \n\n");
        scanf("%d",&istudents);
        if(istudents==-1){
            break;
        }
        printf("--- Quotation Summary ---");
        printf("Adults: %d, Students: %d,Total Ticket: %d\n",iadults,istudents,istudents+iadults);
        printf("Base Total: %d",iadults*200+istudents*150);
        if (iadults+istudents<=5&&iadults+istudents>=1){
            printf("Quantity Discount Factor: 1.00");
            idiscount=1;
        }
        if (iadults+istudents<=10&&iadults+istudents>=6){
            printf("Quantity Discount Factor: 0.95");
            idiscount=0.95;
        }
        if (iadults+istudents<=15&&iadults+istudents>=11){
            printf("Quantity Discount Factor: 0.90");
            idiscount=0.9;
        }
        if (iadults+istudents>=16){
            printf("Quantity Discount Factor: 0.85");
            idiscount=0.9;
        }
        if ((iadults+istudents)%5!=0){
            printf("Multiple-of-5 Bonus Applied: No (Factor= %d)",ibonus);
            printf("Final Payable Account: %d",(iadults*200+istudents*150)*idiscount*ibonus);
        }
        else{
            ibonus=0.95;
            printf("Multiple-of-5 Bonus Applied: Yes (Factor= %d)",ibonus);
            printf("Final Payable Account: %d",(iadults*200+istudents*150)*idiscount*ibonus);
        }
    }
        case 2:
            icount+=1;
            print("[Optional 2] Enter principle in dallors (positive), or -1 to end: \n");
            scanf("%d",&iInstall);
            printf("--- Installments Plan Summary ---\n");
            printf("Principle: %d",(float)iInstall);
            if (iInstall>=500&&iInstall<=1000){
            printf("Number of Period: 3\n");
            printf("Handling Fee per Period: 20.00\n");
            print("Interest Rate per Period: 3.00%\n");
            printf("Repayment (Compound on Principle): %f\n",iInstall*pow((1+0.03),3));
            printf("Total Handling Fee: ",20*3);
            printf("Total Repayment (Including Handling Fee): \n",20*3+iInstall*pow((1+0.03),3));
            printf("Payment per Installment: \n",(iInstall*pow((1+0.03),3)+20*3)/3);

            }
        default:
            print("Unown selection.Please choose 1, 2,or -1 to end");
            break;
    }
        if(icount!=0){
            break;
        }
    }
    printf("program ends");
}