//Write a program to calculate sum of numbers from m to n.(by Array and non-Array)

#include<stdio.h>

//By Array
// int sumOfMtoNbyArray(int a[],int totalEle){
//     int sum=0;
//     for(int i=0;i<=totalEle;i++){
//       sum+=a[i]; 
//     }
//     return sum;
// }
// void readArrayMtoN(int array[],int totalEle){
//     for(int i=0;i<=totalEle;i++){
//         array[i]=i+1;
//     }
// }

//Non-Array
void sumOfMtoN(int m,int n){
    int sum=0;
    for(int i=m;i<=n;i++){
        sum+=i;
    }
    printf("Sum of %d to %d is %d",m,n,sum);
}

void main(){
    int m,n;

    printf("For Sum of M to N \n");
    printf("Enter M :");
    scanf("%d",&m);
    printf("Enter N :");
    scanf("%d",&n);

    //By Array
    // int totalEle=n-m;
    // int a[totalEle];
    // readArrayMtoN(a,totalEle);
    // int sum=sumOfMtoNbyArray(a,totalEle);
    // printf("Sum of %d to %d is %d",m,n,sum);

    //Non-Array
    sumOfMtoN(m,n);
}