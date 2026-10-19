//Insert at the beginning.
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void traversal(struct Node * ptr);
struct Node * insertAtEnd(struct Node *ptr,int data);

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
    struct Node * last=third;

    int data;
    printf("Enter an element for insert at the Ending : ");
    scanf("%d",&data);

    printf("Old Linked List Before Insert At Last : ");
    traversal(first);
    last=insertAtEnd(first,data);

    printf("\nNew Linked List After Insert At Last : ");
    traversal(first);
    return 0;
}

void traversal(struct Node * ptr){
    while(ptr!=NULL){
        printf("%d -> ",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL");
}

struct Node * insertAtEnd(struct Node *ptr,int data){
    struct Node * newNode=(struct Node *)malloc(sizeof(struct Node));
    newNode->data=data;

    while(ptr->next!=NULL){
        ptr=ptr->next;
    }

    newNode->next=NULL;
    ptr->next=newNode;
    return newNode;
}