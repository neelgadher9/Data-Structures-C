#include<stdio.h>

//Structure Schema
struct Node{
    int data;  // it is data so it can be anything (int,float,char).
    struct Node * next;  //containing next node address("Pointing next node").
};  //<- Semicolon is imp

void main(){  //for 3 nodes demo linked list.
    struct Node * first,* second,* third;  //preparing for first node
    first=(struct Node *)malloc(sizeof(struct Node));  //allocating memory in heap
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    //now what about the save the data into linked list?
    //Basically think about first->data=?

    first->data=89;
    //what about second?,yes you store it like second->data , but what about link between first and second, here comes next("struct Node * next") in the game next(first node's next) pointer store the pointer of second like first->link=second;
    first->next=second;

    second->data=23;
    second->next=third;

    third->data=21;
    third->next=NULL;
}