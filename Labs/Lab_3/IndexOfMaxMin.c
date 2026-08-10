//Write a program to find position of the smallest number & the largest number from given n numbers.

#include<stdio.h>

int indexOfMax(int a[],int n){
    int max=a[0],maxi=0;
    for(int i=1;i<n;i++){
       
        if(max<a[i]){
            maxi=i;
            max=a[i];
        }
    }
    return maxi;
}

int indexOfMin(int a[],int n){
    int min=a[0],mini=0;
    for(int i=1;i<n;i++){
       
        if(min>a[i]){
            mini=i;
            min=a[i];
        }
    }
    return mini;
}

void readArray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("Enter a[%d] Element : ",i);
        scanf("%d",&a[i]);
    }
}

void main(){
    int n;

    printf("Enter a total element for an Array : ");
    scanf("%d",&n);

    int a[n];

    readArray(a,n);

    int maxp=indexOfMax(a,n)+1;
    printf("Largest Element position : %d\n",maxp);

    int minp=indexOfMin(a,n)+1;
    printf("Smallest Element position : %d",minp);
}