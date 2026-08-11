//WAP to print Pascal triangle.

#include<stdio.h>

void createPascalTriangle(int trows,int a[trows][trows]){
    for(int i=0;i<trows;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                a[i][j]=1;
            }
            else{
                a[i][j]=a[i-1][j]+a[i-1][j-1];
            }
        }
    }
}

void displayPascal(int trows,int a[trows][trows]){
    for(int i=0;i<trows;i++){
        for(int k=trows;k>i;k--){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d ",a[i][j]);
        }printf("\n");
    }
}

void main(){
    int n;

    printf("Pascal Triangle\n");
    printf("Enter how much rows you want : ");
    scanf("%d",&n);

    int a[n][n];
    createPascalTriangle(n,a);
    displayPascal(n,a);
}