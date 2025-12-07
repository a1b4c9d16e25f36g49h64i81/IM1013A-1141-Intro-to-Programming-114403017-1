#include<stdio.h>
#include<stdlib.h>

int sum_upper_triangle(int n,int matrix [][n]){
    int sum=0;

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if(j>=i){
                sum+=matrix[i][j];
            }
        }
    }

    return sum;
}

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
    
    int count=0;

    do{
    printf(" ==== Menu ====\n");
    printf("1) Option 1 - Split into even and oddnumber array\n");
    printf("2) Option 2 - Calculate Sum of Elements in the Upper Triangle\n");
    printf("(-1) End program\n\n");
    printf("Please select an option: ");
    scanf("%d",&iSelect);

    switch(iSelect){
        case 1:{
            int iSize=0;

            int count1=0;
            do{
                if(count1==1){
                    printf("Invalid Entry.");
                }
                printf("\nEnter array size (1~20): ");
                scanf("%d",&iSize);
                count=1;
            }while(iSize>20 || iSize<1 || iSize!=iSize/1);

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
        case 2:{
            int mat_size=0;

            int count2=0;
            do{
                if(count2==1){
                    printf("Invalid entry\n");
                }
                printf("Enter matrix size N (1-5): \n");
                scanf("%d",&mat_size);
                }while(mat_size<1 ||mat_size>5 || mat_size!=mat_size/1);

            int mat[mat_size][mat_size];

            printf("Original 2D array(%dx%d): \n",mat_size,mat_size);

            for (int i=0;i<mat_size;i++){
                for (int j=0;j<mat_size;j++){
                    mat[i][j]=rand()%51;
                    printf("%d ",mat[i][j]);
                }
                puts("");
            }
            printf("Total sum of upper triangle elements: %d\n",sum_upper_triangle(mat_size,mat));
            
            break;
        }
        case -1:
            puts("Program terminated.");
            count=1;
            //printf("%d",count);
            break;
        default:
            printf("Invalid option. Try again.\n");
            break;

    }}while(count!=1);
}