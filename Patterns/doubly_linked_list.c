#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct node{
    int data;
    struct node* next;
    struct node*prev;
};
void create(struct node*head,int n){
    struct node*temp,*last;
    printf("ENTER DATA");
    scanf("%d",&head->data);
    head->prev=NULL;
    head->next=NULL;
    last=head;
    for(int i=1;i<n;i++){
        struct node*temp=malloc(sizeof(struct node));
        printf("ENTER DATA");
        scanf("%d",&temp->data);
        last->next=temp;
        temp->prev=last;
        temp->next=NULL;
        last=temp;
    }
}
void display(struct node*head){
    struct node*temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
struct node* ins1(struct node* head){
    struct node*temp=malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&temp->data);
    temp->prev=NULL;
    temp->next=head;
    head->prev=temp;
    head=temp;
    return head;
}
void ins2(struct node* head){
    struct node*temp=malloc(sizeof(struct node));
    struct node*temp1=head;
    printf("enter data");
    scanf("%d",&temp->data);
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next=temp;
    temp->next=NULL;
    temp->prev=temp1;
}
void ins3(struct node*head,int pos){
       struct node*temp=malloc(sizeof(struct node));
       struct node*temp1=head;
       struct node*temp2=head->next;
        printf("enter data");
    scanf("%d",&temp->data);
       int i=0;
       while(i!=pos-1){
        temp1=temp1->next;
        temp2=temp2->next;
        i++;
       }
       temp1->next=temp;
       temp2->prev=temp;
       temp->next=temp2;
       temp->prev=temp1;

}

int main(){
    int n,a;
    struct node*head=malloc(sizeof(struct node));
    printf("ENTER THE NUMBER OF NODES : ");
    scanf("%d",&n);
    create(head,n);
    head=ins1(head);
    ins2(head);
    ins3(head,3);
    display(head);
}