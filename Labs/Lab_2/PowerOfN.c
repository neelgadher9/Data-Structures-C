//WAP to find power of a number using loop.

#include<stdio.h>

int powerOfNumber(int n,int p){
    int ans=1;

    for(int i=1;i<=p;i++){
        ans=ans*n;
    }
    return ans;
}

int recursePower(int n,int p){
    if(p==0){
        return 1;
    }
    else{
        p--;
        return n*recursePower(n,p);
    }
}

void main(){
    int n,p;

    printf("For Power of a number \n");
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Enter a power you want : ");
    scanf("%d",&p);

    //int ans = powerOfNumber(n,p);
    int ans = recursePower(n,p);
    printf("%d raise to %d is %d",n,p,ans);
}