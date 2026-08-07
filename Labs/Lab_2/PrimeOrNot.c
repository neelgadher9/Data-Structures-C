// WAP to check whether a number is prime or not.

#include<stdio.h>

void primeOrNot(int n){
    int count=0;
    for(int i=2;i<n;i++){
        if(n%i==0)
            count++;           
    }
    if(count==0)
        printf("%d is a prime number.",n);
    else
        printf("%d isn't a prime number.",n);
}

void main(){
    int n;

    printf("To Check whether it is prime or not \n");
    printf("Enter a number : ");
    scanf("%d",&n);

    primeOrNot(n);
}