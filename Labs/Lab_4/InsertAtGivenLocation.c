//Write a program to insert a number at a given location in an array. 

#include<stdio.h>
void readArray(int array[],int n);
void insertInArray(int array[],int n,int iLocation,int iNumber);
void displayArray(int array[],int n);

void main(){
    int n;

    printf("Enter Array Size : ");
    scanf("%d",&n);

    int a[n];
    readArray(a,n);
    printf("Before Insert\n");
    displayArray(a,n);

    int iIndex,iNumber;

    printf("\nFor Insert any number in Array\n");
    printf("Enter index where you want to insert : ");
    scanf("%d",&iIndex);
    printf("\nInsert Element : ");
    scanf("%d",&iNumber);
    insertInArray(a,n,iIndex,iNumber);
    printf("\nAfter Insert\n");
    for(int i=0;i<=n;i++){
        printf("a[%d] : %d\n",i,a[i]);
    }
}

void readArray(int array[],int n){
    for(int i=0;i<n;i++){
        printf("Enter a[%d] Element : ",i);
        scanf("%d",&array[i]);
    }
    printf("\n");
}

void insertInArray(int array[],int n,int iLocation,int iNumber){
    for(int i=n;i>=iLocation;i--){
        array[i+1]=array[i];
    }
    array[iLocation]=iNumber;
}

void displayArray(int array[],int n){
    for(int i=0;i<n;i++){
        printf("a[%d] : %d\n",i,array[i]);
    }
}