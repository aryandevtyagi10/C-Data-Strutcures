#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*front=NULL;
struct node*rear=NULL;
void enqueue(int val){
    struct node*temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    if(front==NULL && rear==NULL){
        front=rear=temp;
        rear->next=front;
    }
    else{
        rear->next=temp;
        rear=temp;
        rear->next=front;
    }
}
void dequeue(){
    if(front==NULL && rear==NULL){
        printf("queue is empty");
    }
    else if(front==rear){
        front=rear=NULL;
    }
    else{
      struct node*temp=front;
      front=front->next;
      free(temp);
      rear->next=front;
    }
}
void display(){
    struct node*temp=front;
    while(temp->next!=front){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}