// Read two 2x2 matrices and perform addition of matrices into third matrix and print it.
#include<stdio.h>
void read2Cross2(int array[][2]);
void additionOfMatrices(int newArray[][2],int array1[][2],int array2[][2]);
void display2Cross2(int array[][2]);

int main(){
    int arr1[2][2],arr2[2][2],newArray[2][2];

    printf("\nFor First:\n");
    read2Cross2(arr1);
    printf("\nFor Second:\n");
    read2Cross2(arr2);

    additionOfMatrices(newArray,arr1,arr2);

    printf("\nNew Matrices:\n");
    display2Cross2(newArray);
    return 0;
}

void read2Cross2(int array[][2]){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Enter Array[%d][%d] : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
}
void additionOfMatrices(int newArray[][2],int array1[][2],int array2[][2]){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            newArray[i][j]=array1[i][j]+array2[i][j];
        }
    }
}
void display2Cross2(int array[][2]){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
}