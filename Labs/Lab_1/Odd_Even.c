//WAP to find whether a number is odd or even.

#include<stdio.h>

void findOddorEven(int n){
    if(n%2==0){
        printf("Number is Even! ");
    }
    else{
        printf("Number is Odd! ");
    }
}

int main(){
    int n;

    printf("To Find whether it is odd or even \n");
    printf("Enter a Number :");
    scanf("%d",&n);

    findOddorEven(n);
    return 0;
}