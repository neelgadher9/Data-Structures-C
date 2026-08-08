//Write a program to read and display n numbers using an array.

#include<stdio.h>

void displayArray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("a[%d] : %d\n",i,a[i]);
    }
}

void readArray(int array[],int n){
    for(int i=0;i<n;i++){
        printf("Enter a[%d] Element : ",i);
        scanf("%d",&array[i]);
    }
}

void main(){
    int n;

    printf("Enter total Element for an Array : ");
    scanf("%d",&n);
    int a[n];

    readArray(a,n);
    displayArray(a,n);
}