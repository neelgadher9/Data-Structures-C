// WAP to reverse a number. 

#include<stdio.h>

int reverseNumber(int n){
    int rem1,reversed=0;

    while(n>=10){
        rem1=n%10;
        reversed=reversed*10;
        reversed=rem1*10+reversed;
        n=n/10;
    }
    reversed=reversed+n;
    return reversed;
}

void main(){
    int n;

    printf("To reverse \n");
    printf("Enter a number : ");
    scanf("%d",&n);

    int reversed=reverseNumber(n);
    printf("%d",reversed);
}