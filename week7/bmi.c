#include <stdio.h>

float mul(float,float);
float div(float,float);
float bmi(float weight_in_kg,float hight_in_cm);


int main(void){
    float dWeight=0;
    float dHight=0;
    printf("enter your weight in kg ");
    scanf("%f",&dWeight);
    printf("enter your hight in cm ");
    scanf("%f",&dHight);
    float fbmi = bmi(dWeight,dHight);
    printf("%.2f\n",fbmi);

}

float mul (float x,float y){
    return x*y;
}

float div(float x,float y){
    return x/y;
}
float bmi(float weight_in_kg,float hight_in_cm){
    return div(weight_in_kg,mul(div(hight_in_cm,100),div(hight_in_cm,100)));
}