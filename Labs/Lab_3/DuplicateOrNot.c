//Write a program to find whether the array contains a duplicate number or not.

#include<stdio.h>

int containsDuplicateOrNot(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n-1;j++){
            if(a[i]==a[j+1]){
                return 1;
            }
        }
    }
    return 0;
}

void readArray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("Enter a[%d] Element : ",i);
        scanf("%d",&a[i]);
    }
}

void main(){
    int n;

    printf("Enter Array Size : ");
    scanf("%d",&n);

    int a[n];
    readArray(a,n);

    int result=containsDuplicateOrNot(a,n);

    if(result==1){
        printf("Array contains duplicate number!");
    }
    else{
        printf("Array doesn't contain duplicate number!");
    }
}