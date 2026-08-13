// Write a program to insert a number in an array that is already sorted in an ascending order. 
#include<stdio.h>
void readArray(int array[],int n);
void insertInAscendingArray(int array[],int n,int iNumber);

void main(){
    int n;

    printf("Enter Array Size : ");
    scanf("%d",&n);
    int a[n+1];

    printf("\nEnter Element In Ascending Order\n");
    readArray(a,n);

    int iNumber;
    printf("\nFor Insert In Ascending Array\nInsert Number : ");
    scanf("%d",&iNumber);
    insertInAscendingArray(a,n,iNumber);
    for(int i=0;i<=n;i++){
        printf("array[%d] : %d\n",i,a[i]);
    }
}

void readArray(int array[],int n){
    for(int i=0;i<n;i++){
        printf("Enter array[%d] : ",i);
        scanf("%d",&array[i]);
    }
}

void insertInAscendingArray(int array[],int n,int iNumber){
    int iLocation;
    for(int i=0;i<n;i++){
        if(iNumber<array[i]){
            iLocation=i;
            break;
        }
    }
    for(int j=n;j>=iLocation;j--){
        array[j+1]=array[j];
    }
    array[iLocation]=iNumber;
}