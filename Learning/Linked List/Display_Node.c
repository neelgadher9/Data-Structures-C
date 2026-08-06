#include<stdio.h>
#include<stdlib.h>

struct Node{
    int info;//data(information).
    struct Node *link;//pointer for the nextb node.
}*first=NULL;

void create(int a[],int n){
    int i;
    struct Node *t;//for traversing pointer.
    struct Node *last;//for last node.

    first=(struct Node*)malloc(sizeof(struct Node));
    first->info=a[0];
    first->link=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=(struct Node*)malloc(sizeof(struct Node));
        t->info=a[i];
        t->link=NULL;
        last->link=t;
        last=t;
    }
}

void display(struct Node *p){
    while(p->link!=NULL){
        printf("%d -> ",p->info);
        p=p->link;
    }
    printf("%d ",p->info);
}

void main(){
    int A[5]={1,3,5,2,4};
    create(A,5);
    display(first);
}