// WAP to reverse a number. 

#include<stdio.h>

void reverseNumber(int n){
    int rem1,rem2=0;

    while(n>=10){
        rem1=n%10;
        rem2=rem2*10;
        rem2=rem1*10+rem2;
        n=n/10;
    }
    rem2=rem2+n;
    printf("%d",rem2);
}

void main(){
    int n;

    printf("To reverse \n");
    printf("Enter a number : ");
    scanf("%d",&n);

    reverseNumber(n);
}