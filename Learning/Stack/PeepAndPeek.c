#include<stdio.h>
#include<stdbool.h>
#define N 3

int TOP=-1;
int stack[N];

void push(int element){
    if(TOP>=N-1){
        printf("Stack is overflow \n");
        return;
    }
    TOP++;
    stack[TOP]=element;
}

void pop(){
    if(TOP==-1){
        printf("Stack is underflow ! \n");
        return;
    }
    printf("Popped Element : %d \n",stack[TOP]);
    stack[TOP--];
}

void PEEK(){
    if(TOP==-1){
        printf("Stack is EMPTY ! \n");
        return;
    }
    printf("Top of the Stack is %d \n",stack[TOP]);
}

void PEEP(int index){
    if(index==-1){
        printf("index is not valid !\n");
        return;
    }
    if(index>TOP+1){
        printf("index is more than top !\n");
        return;
    }
    printf("At The %dth index from the TOP : %d \n",index,stack[TOP-index]);
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
    push(90);
    push(23);
    push(20);
    pop();
    PEEP(3);
    PEEP(1);
    PEEK();
    pop();
    PEEK();
    display();
}