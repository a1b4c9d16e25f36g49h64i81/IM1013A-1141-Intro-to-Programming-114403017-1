#include <stdio.h>
int main(void){
    int iSize=0;

    printf("enter your row size ");
    scanf("%d",&iSize);
    
    int counter=1;

    for (int i=1 ;i<=iSize;i++){
      for (int j=1 ;j<=i;j++){
        printf("%d",j);
      }
      puts("\n");
    }
}



/*
1 1 1 1 1
1 2 2 2 1
1 2 3 2 1
1 2 2 2 1
1 1 1 1 1


*/