#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* front=NULL;
struct node* rear=NULL;
void enqueue(int val){
    struct node*temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    if( front==NULL && rear==NULL){
        front=rear=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }
}
void dequeue(){
    if(front==NULL && rear==NULL){
        printf("queue is mepty");
    }
    else if(front==rear){
        front=rear=NULL;
    }
    else{
        struct node *temp=front;
        front=front->next;
        free(temp);
    }
}
void display(){
    struct node*temp=front;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int peek(){
    return front->data;
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    dequeue();
    display();
}