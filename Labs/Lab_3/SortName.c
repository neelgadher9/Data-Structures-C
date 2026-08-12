//WAP to sort the N names in an alphabetical order.

#include<stdio.h>
#include<string.h>

void readArrayOfNames(int n,char a[][20]){
    for(int i=0;i<n;i++){
            printf("Enter Name %d : ",i+1);
            scanf("%s",a[i]);
    }    
}
void sortName(int n,char a[][20]){
    char temp[20];
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(strcmp(a[j],a[j+1])>0){
                strcpy(temp,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],temp);
            }
        }
    }
}

void displaySortedName(int n,char a[][20]){
    printf("\nSorted Name \n");
    for(int i=0;i<n;i++){
            printf("Name %d : %s \n",i+1,a[i]);
    } 
}

void main(){
    int n;

    printf("How much name you want to store : ");
    scanf("%d",&n);

    char a[n][20];
    readArrayOfNames(n,a);
    sortName(n,a);
    displaySortedName(n,a);
}