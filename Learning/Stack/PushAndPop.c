#include<stdio.h>
#include<stdbool.h>
#define N 3

int TOP=-1;
int stack[N];

void push(int element){
    if(TOP>=N-1){
        printf("Stack is overflow");
        return;
    }
    TOP++;
    stack[TOP]=element;
}

void pop(){
    if(TOP==-1){
        printf("Stack is underflow !");
        return;
    }
    printf("Popped Element : %d \n",stack[TOP]);
    stack[TOP--];
}

void display(){
    if(TOP==-1){
        printf("Stack is EMPTY !");
        return;
    }
    for(int i=TOP;i>=0;i--){
        printf("%d \n",stack[i]);
    }
}

void main(){
    push(50);
    pop();
    push(20);
    pop();
    display();
}