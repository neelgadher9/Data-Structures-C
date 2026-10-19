#include<stdio.h>
#include<stdlib.h>

struct Node{
    int info;
    struct Node *link;
}*first=NULL,*last=NULL;

void insertAtFirst(int info);
void traversal(struct Node * ptr);

int main(){
    
    int info;
    
    printf("Enter an element for insert at the Ending : ");
    scanf("%d",&info);

    insertAtFirst(info);
    traversal(first);

    return 0;
}

void insertAtFirst(int info){
    struct Node * newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->info=info;

    struct Node *ptr=first;//for traversing ptr
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }//for traverse

    newNode->link=NULL;
    last=newNode;
}

void traversal(struct Node * ptr){
    while(ptr!=NULL){
        printf("%d -> ",ptr->info);
        ptr=ptr->link;
    }
    printf("NULL");
}