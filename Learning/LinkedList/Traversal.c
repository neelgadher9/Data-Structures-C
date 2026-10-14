#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void traversal(struct Node * ptr);  //for traversal ptr is pointer which travells and visit the all nodes in linked list.

int main(){  
    struct Node * first,* second,* third;
    first=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));

    first->data=89;
    first->next=second;

    second->data=23;
    second->next=third;

    third->data=21;
    third->next=NULL;

    traversal(first);
    return 0;
}

void traversal(struct Node * ptr){
    while(ptr!=NULL){  //when ptr (traversal pointer) at ptr->next=NULL. (YK its the last node).
        printf("%d -> ",ptr->data);  //you simply print data of node stores and -> says next).
        ptr=ptr->next;  //changing the pointer location to point next node (first then second then third).
    }
    printf("NULL");
}