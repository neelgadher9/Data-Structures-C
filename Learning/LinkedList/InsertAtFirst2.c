#include<stdio.h>
#include<stdlib.h>

struct Node{
    int info;
    struct Node *link;
}*first=NULL;

void insertAtFirst(int info);
void traversal(struct Node * ptr);

int main(){
    
    int info;
    
    printf("Enter an element for insert at the beginning : ");
    scanf("%d",&info);

    insertAtFirst(info);
    traversal(first);

    return 0;
}

void insertAtFirst(int info){
    struct Node * ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->info=info;
    ptr->link=first;
    first=ptr;
}

void traversal(struct Node * ptr){
    while(ptr!=NULL){
        printf("%d -> ",ptr->info);
        ptr=ptr->link;
    }
    printf("NULL");
}