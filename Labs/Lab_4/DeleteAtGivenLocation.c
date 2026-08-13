//Write a program to delete a number from a given location in an array.
#include<stdio.h>
void readArray(int array[],int n);
void deleteInArray(int array[],int n,int iLocation);
void displayArray(int array[],int n);

void main(){
    int n;

    printf("Enter Array Size : ");
    scanf("%d",&n);

    int a[n];
    readArray(a,n);
    printf("Before Delete\n");
    displayArray(a,n);

    int iIndex;

    printf("\nFor Delete any number in Array\n");
    printf("Enter index for delete : ");
    scanf("%d",&iIndex);
    deleteInArray(a,n,iIndex);
    printf("\nAfter Delete\n");
    for(int i=0;i<n-1;i++){
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

void deleteInArray(int array[],int n,int iLocation){
    for(int i=iLocation;i<n;i++){
        array[i]=array[i+1];
    }
}

void displayArray(int array[],int n){
    for(int i=0;i<n;i++){
        printf("a[%d] : %d\n",i,array[i]);
    }
}