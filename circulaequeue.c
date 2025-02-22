#include<stdio.h>
#define size 5
int queue[size];
int front=-1;
int rear=-1;
void enqueue(int val){
    if((rear+1)%size==front){
        printf("overflow");
    }
    else if(front==-1 && rear ==-1){
        front=rear=0;
        queue[rear]=val;
    }
    else{
        rear=(rear+1)%size;
        queue[rear]=val;
    }
}
void dequeue(){
    if(front ==-1 && rear==-1){
        printf("queue id empty");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        front=(front+1)%size;
    }
}
void display(){
    if(front==-1 && rear==-1){
      printf("empty");
    }
    else{
        int i=front;
        while(i!=rear){
            printf("%d ",queue[i]);
            i=(i+1)%size;
        }
        printf("%d",queue[rear]);
    }printf("\n");
}
int main() { 
enqueue (2); 
enqueue (10); 
enqueue (15); 
enqueue (20); 
display (); 
dequeue (); 
dequeue (); 
display (); 
dequeue (); 
dequeue (); 
dequeue (); 
return 0; 
}