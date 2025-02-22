#include<stdlib.h>
#ifndef Queue.h
#define Queue.h
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
    if(front==NULL && rear ==NULL){
        front=rear=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
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
    }
}

// #endif
// #include <stdio.h>
// #include "Queue.h"
// void bfs(int arr[][7],int i,int n){
//     int i=0;
// struct Queue q;

// }
// int main(){

// }