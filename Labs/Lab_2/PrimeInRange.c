// WAP to print prime numbers between given interval.

#include<stdio.h>

void primeInRange(int start,int end){
    int i,j;
    printf("Prime number between %d to %d : ",start,end);
    for(i=start;i<=end;i++){
        int count=0;
        for(j=2;j<i;j++){
            if(i%j==0)
            count++;           
    }
    if(count==0)
        printf("%d ",i);
    }
}

void main(){
    int s,e;

    printf("Displaying prime numbers in given range \n");
    printf("Enter Starting Range : ");
    scanf("%d",&s);
    printf("Enter Ending Range : ");
    scanf("%d",&e);
    
    primeInRange(s,e);
}