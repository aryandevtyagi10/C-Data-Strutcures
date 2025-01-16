#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack[size];
int top=-1;
void push(int val){
    if(top==size-1){
     printf("the stack is full!");
    }
    else{
        top++;
        stack[top]=val;
    }
}
void pop(){
    if(top==-1){
        printf("stack is empty");
    }
    else{
        top--;
    }
}
void display(){
    if(top==-1){
        printf("stack is empty");
    }
    else{
        for(int i=top;i>=0;i--){
            printf("%d ",stack[i]);
        }
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    pop();
    display();
}