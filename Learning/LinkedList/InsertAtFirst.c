//Insert at the beginning.
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void traversal(struct Node * ptr);
struct Node * insertAtFirst(int x,struct Node *first);

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

    int data;
    printf("Enter an element for insert at the beginning : ");
    scanf("%d",&data);

    printf("Old Linked List Before Insert At First : ");
    traversal(first);
    first=insertAtFirst(data,first);

    printf("\nNew Linked List After Insert At First : ");
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

struct Node * insertAtFirst(int data,struct Node *first){
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=first;
    return ptr;
}