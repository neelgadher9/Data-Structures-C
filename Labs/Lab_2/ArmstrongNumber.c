// WAP to print Armstrong number from 1 to 1000.

#include<stdio.h>

void armstrongBtw1To1000(){
    int digits,rem1;

    for(int n=1;n<=1000;n++){
        int temp=n,rem2=0;
        digits=(n<10)?1:(((n<100)?2:3));

        while(temp!=0){//temp=153//15//1
            int rem=1;
            rem1=temp%10;//rem[1]=3//5//1

            for(int i=1;i<=digits;i++){
            rem=rem1*rem;//3*3*3=27//5*5*5=125//1
            }
            
            rem2=rem+rem2;//0+27//27+125//1+125+27
            temp=temp/10;//15//1//0
        }
        if(n==rem2){
            printf(" %d ",n);
        }
    }
}
void main(){
    armstrongBtw1To1000();
}