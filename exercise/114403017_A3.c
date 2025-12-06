#include<stdio.h>
#include<stdlib.h>

void seperate_even_odd(int a[],int n,int even[],int odd[],int counts[]){
    /*for (int i=0;i<n;i++){
        printf("%d %d %d\n",a[i],even[i],odd[i]);
    }*/
    

    for (int i=0;i<n;i++){
        if (a[i]%2==0){
            odd[counts[0]]=a[i];
            counts[0]+=1;
        }
        else if (a[i]%2==1){
            even[counts[1]]=a[i];
            counts[1]+=1;
        }
    }
    //printf("%d %d\n",counts[0],counts[1]);
    /*for (int i=0;i<n;i++){
        printf("%d %d %d\n",a[i],even[i],odd[i]);
    }*/
    
}
void seperate_even_odd(int a[],int n,int even[],int odd[],int counts[]);

int main (void){
    int iSelect=0;
    
    printf(" ==== Menu ====\n");
    printf("1) Option 1 - Split into even and oddnumber array\n");
    printf("2) Option 2 - Calculate Sum of Elements in the Upper Triangle\n");
    printf("(-1) End program\n\n");
    printf("Please select an option: ");
    scanf("%d",&iSelect);
    
    switch(iSelect){
        case 1:{
            int iSize=0;
            printf("\nEnter array size (1~20): ");
            scanf("%d",&iSize);
            int even[iSize];
            int odd[iSize];

            int iCount[2]={0,0};

            int interger[iSize];
            for (int i=0;i<iSize;i++){
                interger[i]=rand()%10+1;
            }

            seperate_even_odd(interger,iSize,even,odd,iCount);

            printf("Original array:\n");
            
            for (int i =0;i<iSize;i++){
                printf("%d ",interger[i]);
            }
            puts("\n");

            printf("Total odd numbers: %d\n",iCount[0]);
            printf("Odd numbers: ");
            for (int i=0;i<iCount[0];i++){
                printf("%d ",odd[i]);
            }
            puts("\n");
            
            printf("Total even numbers: %d\n",iCount[1]);
            printf("Even numbers: ");
            for (int i=0;i<iCount[1];i++){
                printf("%d ",even[i]);
            }
            puts("\n");  
            break;
        }
        case 2:
            break;
        case -1:
            break;
        default:
            printf("Invalid option. Try again.\n");
            break;

    }
}