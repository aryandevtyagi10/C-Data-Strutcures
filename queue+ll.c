#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*front=NULL;
struct node*rear=NULL;
void enqueue(int x){
    struct node*newnode=malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(front==NULL && rear==NULL){
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=rear->next;
    }
}
void dequeue(){
    struct node*temp=front;
    if(front==NULL && rear==NULL){
        printf("the queue is empty");
    }
    else{
        front=front->next;
        free(temp);
    }
}
void display(){
    struct node*ptr=front;
    while(ptr!=NULL){
        printf("%d \n",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();
    dequeue();
    display();
}