//WAP to determine whether the entered character is vowel or not. 

#include<stdio.h>

void vowelOrNot(char x){
    if(x=='A' ||x=='E' ||x=='I' ||x=='O' ||x=='U' || x=='a' ||x=='e' ||x=='i' ||x=='o' ||x=='u'){
        printf("The entered character is vowel! ");
    }
    else{
        printf("The entered character is not vowel! ");
   
    }
}

void main(){
    char something;

    printf("Enter a Character : ");
    scanf("%c",&something);

    vowelOrNot(something);
}