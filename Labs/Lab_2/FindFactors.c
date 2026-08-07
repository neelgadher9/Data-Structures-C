//WAP to find factors of a given number. 

#include<stdio.h>

void findFactors(int n){
    printf("Factors of %d : ",n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            printf("%d , ",i);
        }
    }
    printf("%d",n);
}

void main(){
    int n;

    printf("To Find Factors \n");
    printf("Enter a Number : ");
    scanf("%d",&n);

    findFactors(n);
}