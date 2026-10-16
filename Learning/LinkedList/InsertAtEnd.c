//Insert at the Ending.
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void traversal(struct Node * ptr);
struct Node * insertAtLast(int x,struct Node *last);

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
    last=insertAtLast(data,last);

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

struct Node * insertAtLast(int data,struct Node *last){
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=NULL;
    last->next=ptr;
    return ptr;
}