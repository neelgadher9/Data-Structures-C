// WAP to find the largest among the given three numbers by user. 
#include<stdio.h>
int largestAmongThree(int a,int b,int c){
    int largest=(a>b)?((a>c)?a:c):((b>c)?b:c);
    return largest;
}
void main(){
    int a,b,c;

    printf("Enter First Number : ");
    scanf("%d",&a);
    printf("Enter Second Number : ");
    scanf("%d",&b);
    printf("Enter Third Number : ");
    scanf("%d",&c);

    int largest=largestAmongThree(a,b,c);
    printf("Largest Number Among Three : %d",largest);
}