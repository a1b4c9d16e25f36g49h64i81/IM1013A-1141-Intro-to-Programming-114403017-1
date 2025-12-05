
#include<stdio.h>
#include<stdlib.h>
# define size 5
void initializeArray(int x ,int b[x]){
    for(int a=0;a<x;a++){
        b[a]=a+1;
    }
}

void printArray(int a,int b[a]){
    for(int i=0;i<a;i++){
        printf("%d\n",b[i]);
    }
}

void randomizeArray(int a,int b[a]){
    srand(9);
    for(int i=0;i<a;i++){
        b[i]=rand()%5+1;
    }
}

int sumOfArrayElement(int a ,int b[]){
    int sum=0;
    for (int i=0;i<a;i++){
        sum+=b[i];
    }
    return sum;
}
void printArray(int a,int b[a]);
void initializeArray(int x ,int b[x]);
void randomizeArray(int a,int b[a]);

int main(void){
    int array[size];
    initializeArray(size,array);
    randomizeArray(size,array);
    printArray(size,array);
    printf("%d\n",sumOfArrayElement(size,array));
}