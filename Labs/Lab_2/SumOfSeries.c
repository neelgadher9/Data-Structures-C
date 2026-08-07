//WAP to find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4)+ …+(1+2+3+4+….+n). 

#include<stdio.h>

void sumOfSeries(int n){
    int ans2=0;
    for(int i=1;i<=n;i++){
        int ans1=0;
        for(int j=1;j<=i;j++){
            ans1=ans1+j;
        }
        ans2+=ans1;
    }
    printf("Sum of the series when n = %d is %d",n,ans2);
}

void main(){
    int n;

    printf("For the sum of 1 + (1+2) + (1+2+3) +...+ (1+2+3+4+...+n). \n");
    printf("Enter n : ");
    scanf("%d",&n);

    sumOfSeries(n);
}