#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    struct node*prev;
};
void create_list(struct node*head,int n){
  struct node*p,*last;
  printf("enter data ");
    scanf("%d",&head->data);
    head->next=NULL;
    head->prev=NULL;
    last=head;
    for(int i=1;i<n;i++){
        p=malloc(sizeof(struct node));
        printf("ENTER DATA : ");
        scanf("%d",&p->data);
        p->next=NULL;
        p->prev=last;
        last->next=p;
        last=p;
        }
}


void display(struct node*head){
    struct node*ptr=head;
     int count=0;
       while(ptr!=NULL){
        count++;
        printf("%d \n",ptr->data);
        ptr=ptr->next;
    }
    }
int main(){
    int n;
    struct node*head=malloc(sizeof(struct node));
    printf("ENTER THE NUMBER OF NODES : ");
    scanf("%d",&n);
    create_list(head,n);
    display(head);
}