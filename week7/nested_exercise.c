#include <stdio.h>
int main(void){
    int row_size=0;
    int column_size=0;

    printf("enter your row size ");
    scanf("%d",&row_size);
    printf("enter your column size ");
    scanf("%d",&column_size);

    int counter=1;

    for (int i=0 ;i<row_size;i++){
      for (int j=0 ;j<column_size;j++){
        printf("%d ",counter);
        if (counter<=9){
            printf(" ");
        } 
        counter++;
      }
      puts("\n");
    }
}