//WAP to convert number of days into year, week & days [e.g. 375 days mean 1 year, 1 week and 3 days].

#include<stdio.h>

void yearWeekDays(int tdays){
    int y = tdays / 365;
    int w = ( tdays % 365 ) / 7;
    int d = (tdays % 365) % 7;

    printf("Time -> %d year, %d week and %d days",y,w,d);
}

void main(){
    int total_days;

    printf("Converting into Years,Weeks and Days \n");
    printf("Enter Total Days : ");
    scanf("%d",&total_days);

    yearWeekDays(total_days);
}