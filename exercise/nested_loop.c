#include<stdio.h>
#include<math.h>

int right_left(int number,int i,int j);
int left_right(int number,int i,int j);
int find(int number,int a,int b);

int left_right(int number,int i,int j){
    int b = sqrt(pow(j-(number+1)/2,2)+pow(i-(number+1)/2,2));//第幾圈
    int a =(number+1)/2-b;
    
    //printf(" %d ",a);
    int _sum=find(number,number+1-a,number+1-a)*2;
    printf("%d",_sum);
    return _sum-find(number,j,i);
}

int right_left(int number,int i,int j){
    int _sum=find(number,number+1-j,j)*2;
    return _sum-find(number,number+1-j,number+1-i);
}

int find(int number,int a,int b){
    int _count=0;

    for (int i=1;i<a+1;i++){
        if (a==i){
            return _count+1+b-a;
        }
        _count+=(number-i)*4;
    }
}

int main(void){
    int number=5;
    int a=(number+1)/2;
    int count=0;

    for(int i=1;i<6;i++){
        int answer=0;

        for(int j=1;j<6;j++){
            /*if(i<j && i+j>number+1){
                answer=find(number,i,j);
            }
            else{
                answer=left_right(number,i,j);
                if(i+j>number+1){
                    answer=right_left(number,i,j);
                }
            }

            printf("%d  ",answer);*/

        


            printf("(%d、%d) ",i,j);

            if(i<j){
                if(i+j>number+1){
                    answer=right_left(number,i,j);
                }
                else{
                    answer=find(number,i,j);
                }
                
            }
            else if(i>j){
                answer=left_right(number,i,j);//先翻轉
                printf(" %d ",answer);
                if(i+j>number+1){//第二次翻轉判定
                    answer=right_left(number,j,i);
                }
            }
            else{ 
                answer=right_left(number,i,j);           
            }
            printf("%d  ",answer);
        }
        puts("");
    }
}