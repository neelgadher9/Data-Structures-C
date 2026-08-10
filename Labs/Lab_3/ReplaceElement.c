// Read n numbers in an array then read two different numbers, replace 1st number with 2nd number in an array and print its index and final array.

#include<stdio.h>

void readArray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("Enter a[%d] Element : ",i);
        scanf("%d",&a[i]);
    }
}

void replaceElement(int findN,int replaceN,int a[],int n){
    int indexOFn;
    for(int i=0;i<n;i++){
        if(findN==a[i]){
            a[i]=replaceN;
            indexOFn=i;
        }
        printf("\nReplaced %d with %d at index %d \n",findN,replaceN,indexOFn);
    }
}

void displayArray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("a[%d] : %d\n",i,a[i]);
    }
}

void main(){
    int n,fn,rn;

    printf("Enter Array Size : ");
    scanf("%d",&n);

    int a[n];
    readArray(a,n);

    printf("\nReplace an Element in Array \n");
    printf("Enter the number you want to replace : ");
    scanf("%d",&fn);
    printf("Enter the new number : ");
    scanf("%d",&rn);

    replaceElement(fn,rn,a,n);
    displayArray(a,n);
}
 