#include<stdio.h>
#include<stdlib.h>
#define size 6
int queue[size];
int front=-1;
int rear=-1;
void enqueue(int val){
    if(rear==size-1){
        printf("overflow!");
    }
    else if(front ==-1 && rear==-1){
        front=rear=0;
        queue[front]=val;
    }
    else{
        rear++;
        queue[rear]=val;
    }
}
void dequeue(){
    if(front==-1 && rear==-1){
        printf("underflow!");
    }
    else if(front ==rear){
        front=rear=-1;
    }
    else{
        front++;
    }
}
int peek(){
    return queue[front];
}
void display(){
    for(int i=front;i<=rear;i++){
        printf("%d ",queue[i]);
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
}