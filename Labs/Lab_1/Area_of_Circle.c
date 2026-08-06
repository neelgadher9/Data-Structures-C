#include<stdio.h>

#define PI 3.14

float areaOfCircle(float r){

    float area=(PI*r)*r;
    return area;
}

void main(){
    float r;

    printf("Enter a Radious of the Circle : ");
    scanf("%f",&r);

    float area=areaOfCircle(r);
    printf("%f",area);
}