#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

struct node*top=NULL;//remember
void push(int x){
    struct node*temp=malloc(sizeof(struct node));
    temp->data=x;
    temp->next=top;
    top=temp;
}
void pop(){
    struct node*temp=top;
    if(top==NULL){
        printf("the stack is empty");
    }
    else{
        top=top->next;
        free(temp);
    }
}
void display(){
    struct node*temp=top;
    if(top==NULL){
        printf("stack is empty");
    }
    else{
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    pop();
    push(40);
    display();//peek
}
