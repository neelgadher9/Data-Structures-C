//Insert at the Ending.
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void traversal(struct Node * ptr);
struct Node * insertAtIndex(struct Node * first,int data,int index);

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

    int data,index;
    printf("Enter a Index where you want to insert : ");
    scanf("%d",&index);
    printf("Enter an element for insert at the %d : ",index);
    scanf("%d",&data);

    printf("Old Linked List Before Insert At %d : ",index);
    traversal(first);
    
    first=insertAtIndex(first,data,index);
    printf("\nNew Linked List After Insert At %d : ",index);
    traversal(first);
    return 0;
}

struct Node * insertAtIndex(struct Node * first,int data,int index){
    struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
    newNode->data=data;

    struct Node *ptr=first;
    for(int i=0;i<index-2;i++){
        ptr=ptr->next;
    }

    newNode->next=ptr->next;
    ptr->next=newNode;

    return first;
}

void traversal(struct Node * ptr){
    while(ptr!=NULL){
        printf("%d -> ",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL");
}