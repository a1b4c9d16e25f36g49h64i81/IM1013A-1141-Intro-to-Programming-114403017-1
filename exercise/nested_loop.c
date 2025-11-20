#include<stdio.h>
int right_left(int number,int i,int j);
int left_right(int number,int i,int j);
int find(int number,int a,int b);

int left_right(int number,int i,int j){
    int _sum=find(number,i,i)*2;
    return _sum-find(number,j,i);
}

int right_left(int number,int i,int j){
    int _sum=find(number,number+1-j,j)*2;
    return _sum-find(number,number+1-j,number+1-i);
}

int find(int number,int a,int b){
    int _count=0;
    for (int i=1;i<a;i++){
        if (a==i){
            return _count+1+b-a;
        break;
        }
        _count+=(number-2*i)*4;
    }
}

int main(void){
    int number=5;
    int a=(number+1)/2;
    int count=1;

    for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            int answer=0;

            if(i<j){
                if(i+j>number+1){
                    answer=right_left(number,i,j);
                
            }
            else if(i>j){
                answer=(number,i,j);//先翻轉
                if(i+j>number+1){//第二次翻轉判定
                    answer=right_left(number,i,j);
                }
            }
            else{            
                answer=count+1+j-i;
                count+=(number-2*i)*4;
            }
            printf("%d",answer);

            }
        }
    }
}