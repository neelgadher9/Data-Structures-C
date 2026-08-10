//Write a program to calculate average of first n numbers.

#include<stdio.h>

float avrageOfN(int n){
    int sum=0;

    for(int i=1;i<=n;i++){ //sum
        sum+=i;
    }

    return (sum/n);
}

void main(){
    int n;

    printf("To calculate average of first n numbers. \n");
    printf("Enter n : ");
    scanf("%d",&n);

    float avg=avrageOfN(n);
    printf("Average of first %d numbers = %f",n,avg);
}