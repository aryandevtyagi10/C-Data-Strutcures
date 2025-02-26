#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack[size];
int top=-1;
void push(int x){
    if(top==size-1){
      printf("stack overflow");
    }
    else{
        top++;
        stack[top]=x;
    }
}
void pop(){
    if(top==-1){
        printf("stack underflow");
    }
    else{
        top--;
    }
}
void display(){
    if(top==-1){
        printf("stack underflow");
    }
    else{
        for(int i=top;i>=0;i--){
            printf("%d ",stack[i]);
        }
    }
}
int peek(){
    return stack[top];
}
void isempty(){
 if (top == -1){
    printf("stack is empty");
 }
 else printf("\nstack is not empty");
}
int main(){
    push(10);
    push(100);
    push(1000);
    pop();
    display();
    int p = peek();
    printf("%d",p);
    isempty();
}