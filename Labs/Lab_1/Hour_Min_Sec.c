//WAP to convert seconds into hours, minutes & seconds and print in HH:MM:SS 
//[e.g. 10000 seconds mean 2:46:40 (2 Hours, 46 Minutes, 40 Seconds)].

#include<stdio.h>

void hourMinSec(int tsec){
    
    int h=tsec/3600;
    int m=(tsec%3600)/60;
    int s=tsec%60;

    printf("Time -> %d:%d:%d ",h,m,s);
}

void main(){
    int total_sec;

    printf("Enter a Total Seconds : ");
    scanf("%d",&total_sec);

    hourMinSec(total_sec);
}