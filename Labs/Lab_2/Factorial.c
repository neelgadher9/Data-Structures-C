// WAP to find factorial of a number. (Using loop & recursion).

#include<stdio.h>

void factorialOfN(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=i*ans;
    }
    printf("Factorial Of %d is %d",n,ans);
}

int recurseFactorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return (n)*recurseFactorial(n-1);
    }
}

void main(){
    int n;

    printf("To Find Factorial \n");
    printf("Enter a Number : ");
    scanf("%d",&n);

    // factorialOfN(n);
    int rec_ans=recurseFactorial(n);
    printf("Factorial Of %d is %d",n,rec_ans);
}