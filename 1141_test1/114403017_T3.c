#include <stdio.h>
#include <stdlib.h>

void ring_traverse(int N,int A[][N],int top,int left,int bottom,int right){
 /*  for( int i=0;i<N;i++){
        for(int j=0;j<N;j++){
        printf("%d",A[i][j]);
    }}*/
   int number=N;
   //printf("%d",N);
   //printf("%d\n",(N+1)/2);
   puts("[Ring traversal output]");
   for(int j =0;j<N/2;j++){


    for(int i=j;i<number;i++){
        printf("%d ",A[j][i]);
    }

    for(int i=j+1;i<number;i++){
        printf("%d ",A[i][number-1]);
    }
  
    for(int i=number-2;i>=j;i--){
        printf("%d ",A[number-1][i]);
    }

    for(int i=number-2;i>=1+j;i--){
        printf("%d ",A[i][0]);
    }

    number-=1;
    //printf("number: %d",number);
    }
       //printf("%d\n",N);

if(N%2==1){
    printf("%d",A[N/2][N/2]);
}
puts("");
//printf("%d %d",N,N%2);
}

void sort__ascending(int n,int B[n]){
    for(int j=0;j<n;j++){
    int min=100;


    for (int i=0;i<n;i++){
        //printf("%d %d ",min,B[i]);

        if (B[i]<min){
        //printf("1 %d %d ",min,B[i]);

            min=B[i];
            
        }
    }
    for(int i=0;i<n;i++){
        if(B[i]==min){
            B[i]=100;
            break;
        }
    }
    printf("%d ",min);

}

}
void sort__ascending(int n,int B[n]);


void flatten_2d_to_1d(int N,int M[][N],int B[]){
    int icount=0;
    for (int i =0;i<N;i++){
        for (int j=0;j<N;j++){
            printf("%d ",M[i][j]);
            B[icount]=M[i][j];
            icount+=1;
        }
    }
}

void flatten_2d_to_1d(int N,int M[][N],int B[]);

void ring_traverse(int N,int A[][N],int top,int left,int bottom,int right);

void find_max_resource_block(int N,int map[][N]){
    int accumulated=0;
    int max=0;
    int location[2]={0,0};

    for (int i=0;i<N-2;i++){
        for (int j=0;j<N-2;j++){
            for(int k=0;k<3;k++){
                for (int t=0;t<3;t++){
            accumulated+=map[i+t][j+k];
            }
        }
            //printf("%d ",accumulated);

        if (accumulated>max){
            max=accumulated;
            location[0]=i;
            location[1]=j;
        }
        }  
    }
    printf("Maximum resource sum: %d\n",max);
    printf("Top-coordinate: (%d, %d)\n",location[0],location[1]);
    printf("Max resource block:\n");
    for(int k=location[0];k<3+location[0];k++){
                for (int t=location[1];t<3+location[1];t++){
                    printf("%d ",map[k][t]);
            }
        puts("");
        }
    //printf("%d %d,%d",max,location[0],location[1]);
}

void find_max_resource_block(int N,int map[][N]);

int main(void){
    int Select=0;
    int count=0;
    while(1){
        int exist=0;
    do{
        /*if(count!=0){
            printf("\nInvalid Input!\n");
        }*/
    printf(" ==== MENU ====\n");
    printf("1) Option 1 - Ring Traversal of a Square Matrix\n");
    printf("2) Option 2 - Flatten and Sort\n");
    printf("3) Option 3 - Maximum Resource Block Finder\n");
    printf("(-1) End program\n");
    printf("\nSelcet: ");
    scanf("%d",&Select);
    count+=1;
    
switch (Select)
{
case 1:{
    int iSize=0;
    int icount=0;
    do{
        if(icount!=0){
            printf("Invalid entry!\n");
        }
    printf("Please enter the size of the matrix (1~5):");
    scanf("%d",&iSize);
    icount+=1;
    }while(iSize!=1 && iSize!=2 && iSize!=3 && iSize!=4 && iSize!=5);
    
    printf("\n[Matrix A]\n");

    int array[iSize][iSize];
    for (int i=0;i<iSize;i++){
        for (int j=0;j<iSize;j++){
            int number=rand()%10;
            array[i][j]=number;
            printf("%d ",number);
        }
        puts("");
    }
    ring_traverse(iSize,array,0,1,2,3);
    break;}
case 2:{
int iSize=0;
int icount=0;
    do{
        if(icount!=0){
            printf("Invalid entry!\n");
        }
    printf("Please enter the size of the matrix (1~5):");
    scanf("%d",&iSize);
    icount+=1;

    }while(iSize!=1 && iSize!=2 && iSize!=3 && iSize!=4 && iSize!=5);

    printf("\n[Matrix M (%d x %d)]\n",iSize,iSize);

    int array[iSize][iSize];
    int B[iSize*iSize];

    for (int i=0;i<iSize;i++){
        for (int j=0;j<iSize;j++){
            int number=rand()%100;
            array[i][j]=number;
            printf("%d ",number);
        }
        puts("");
    }
    puts("");
    printf("[Flattened 1D array B in row-major order]\n");
    
    flatten_2d_to_1d(iSize,array,B);
    puts("");
    /*for(int i=0;i<iSize*iSize;i++){
    printf("%d ",B[i]);}*/
    puts("");
    printf("[Sorted 1D array B (ascending)]\n");
    sort__ascending(iSize*iSize,B);
    puts("");
    break;}
case 3:{
    int iSize=0;
    int icount=0;
    do{
        if(icount!=0){
            printf("Invalid entry!\n");
        }
    printf("Please enter the size of the matrix (3~10):");
    scanf("%d",&iSize);
    icount+=1;
    }while(iSize!=3 && iSize!=4 && iSize!=5 && iSize!=6 && iSize!=7 && iSize!=8 && iSize!=9 && iSize!=10);
    printf("\n[Matrix M (%d x %d)]\n",iSize,iSize);
    int M[iSize][iSize];
    for (int i=0;i<iSize;i++){
        for (int j=0;j<iSize;j++){
            int number=rand()%10;
            M[i][j]=number;
            printf("%d ",number);
        }
        puts("");
    }
    puts("");
    find_max_resource_block(iSize,M);
break;
}
case -1:
    exist+=1;
    break;
default:
printf("\nInvalid Input!\n");
    break;
}


}while(Select!=1 && Select!=2 && Select!=3 && Select!=-1);
if(exist!=0){
    break;
}
}
}



    

