#include <stdio.h>
#include <stdlib.h>
# define size 4
int queue[size];
int front=-1;
int rear=-1;
void enqueue(int x){
    if(rear==size-1){
        printf("QUEUE OVERFLOW");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }
}

void dequeue(){
    if(front==-1 && rear==-1){
        printf("underflow");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        printf("the deleted elment is %d ",queue[front]);
        front++;
    }
}
void display(){
    if(front==-1 && rear==-1){
        printf("STACK UNDERFLOW");
    }
    for(int i=front;i<=rear;i++){
        printf("%d ",queue[i]);
    }
}
void peek(){
    if(front ==-1 && rear ==-1){
        printf("STACK UNDERFLOW");
    }
    else{
        print("%d ",queue[front]);
    }
}
int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    dequeue();
    display();
}