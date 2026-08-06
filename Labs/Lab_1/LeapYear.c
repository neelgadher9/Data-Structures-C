//WAP to check for the leap year.

#include<stdio.h>

void leapYearOrNot(int x){
    if(x%400==00 || x%4==0 && x%100!=0){
        printf("%d is a leap year! ",x);
    }
    else{
        printf("%d is not a leap year! ",x);

    }
}

void main(){
    int year;

    printf("Enter a Year : ");
    scanf("%d",&year);

    leapYearOrNot(year);
}