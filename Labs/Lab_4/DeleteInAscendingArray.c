//Write a program to delete a number from an array that is already sorted in an ascending order.
#include<stdio.h>
void readArray(int array[],int n);
void deleteInAscendingArray(int array[],int n,int dNumber);

void main(){
    int n;

    printf("Enter Array Size : ");
    scanf("%d",&n);
    int a[n];

    printf("\nEnter Element In Ascending Order\n");
    readArray(a,n);

    int dNumber;
    printf("\nFor Deleting In Ascending Array\nDelete Number : ");
    scanf("%d",&dNumber);
    deleteInAscendingArray(a,n,dNumber);
    for(int i=0;i<n-1;i++){
        printf("array[%d] : %d\n",i,a[i]);
    }
}

void readArray(int array[],int n){
    for(int i=0;i<n;i++){
        printf("Enter a[%d] Element : ",i);
        scanf("%d",&array[i]);
    }
    printf("\n");
}

void deleteInAscendingArray(int array[],int n,int dNumber){
    int dLocation;
    for(int i=0;i<n;i++){
        if(dNumber==array[i]){
            dLocation=i;
        }
    }
    for(int j=dLocation;j<n-1;j++){
        array[j]=array[j+1];
    }
}
