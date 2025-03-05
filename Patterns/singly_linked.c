#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct node{
    int data;
    struct node* next;
};
void create(struct node*head,int n){
    struct node*temp,*last;
    printf("Enter the data");
    scanf("%d",&head->data);
    head->next=NULL;
    last=head;
    for(int i=1;i<n;i++){
      temp=malloc(sizeof(struct node));
      printf("enter data of node %d ",i+1);
      scanf("%d",&temp->data);
      temp->next=NULL;
      last->next=temp;
      last=temp;
    }
}
void display(struct node*head){
    struct node*temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int sum(struct node*head){
   int sum=0;
    struct node*temp=head;
    while(temp!=NULL){
        sum=sum+temp->data;
    }
    return sum;
}
int max(struct node*head){
    struct node*temp=head;
    int max=INT_MIN;
    while(temp!=NULL){
        if(temp->data>max){
            max=temp->data;
        }
        temp=temp->next;
        }
         printf("%d\n",max);
}
void min(struct node*head){
    struct node*temp=head;
    int min=INT_MAX;
    while(temp!=NULL){
        if(temp->data<min){
            min=temp->data;
        }
        temp=temp->next;
    }
    printf("%d\n",min);
}
// inseritn at beg
struct node* ins1(struct node*head){
       struct node*temp=malloc(sizeof(struct node));
       printf("enter data");
       scanf("%d",&temp->data);
       temp->next=head;
       head=temp;
       return head;
}
//insert at end
void ins2(struct node*head){
    struct node*ptr=head;
    struct node*temp=malloc(sizeof(struct node));//ptr=traverse
       printf("enter data");
       scanf("%d",&temp->data);
       temp->next=NULL;
       while(ptr->next!=NULL){
        ptr=ptr->next;
       }
       ptr->next=temp;
}
void ins3(struct node*head,int pos){
     struct node*ptr1=head;
     struct node*ptr2=head->next;
     struct node*temp=malloc(sizeof(struct node));
      printf("enter data");
      scanf("%d",&temp->data);
      for(int i=1;i<pos;i++){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
      }
      ptr1->next=temp;
      temp->next=ptr2;

}
struct node* del_beg(struct node*head){
    struct node*temp=head;
    head=head->next;
    free(temp);
    return head;
}
void del_end(struct node*head){
    struct node*temp=head;
    struct node*temp1=head->next;
    while(temp1!=NULL){
        temp=temp->next;
        temp1=temp1->next;
    }
    temp->next=NULL;
    free(temp1);
}
struct node* del_pos(struct node*head,int pos){
    struct node*temp1=head;
    struct node*temp2=head->next;
    int i=0;
    while(i!=pos-1){
        temp1=temp1->next;
        temp2=temp2->next;
        i++;
    }
    temp1->next=temp2->next;
    free(temp2);
}
struct node* reverseList(struct node* head) {
         if(head==NULL || head->next==NULL)
        return head;
        struct node* t = head;
       struct node* s = head->next;
       struct node* r = head->next->next;
        t->next=NULL;
        while(r!=NULL){
            s->next=t;
            t=s;
            s=r;
            r=r->next;
        }
        s->next=t;
        return s;
    }
    struct node* merge(struct node*head1,struct node *head2){
       struct node*temp=malloc(sizeof(struct node));
       struct node*temp3=temp;
       temp3->data=0;
       struct node*temp1=head1;
       struct node*temp2=head2;
       while(temp1!=NULL && temp2!=NULL){
           if(temp1->data<=temp2->data){
           temp3->next=temp1;
           temp1=temp1->next;
           temp3=temp3->next;
           }
           else{
            temp3->next=temp2;
            temp2=temp2->next;
            temp3=temp3->next;
           }
       }
       if(temp1==NULL){
        temp3->next=temp2;
        temp3=temp2;
       }
       else{
        temp3->next=temp1;
        temp3=temp1;
       }
       return temp->next;

    }
     int main(){
        int n,a;
    struct node*head1=malloc(sizeof(struct node));
    struct node*head2=malloc(sizeof(struct node));
    printf("ENTER THE NUMBER OF NODES : ");
    scanf("%d",&n);
    create(head1,n);
     printf("ENTER THE NUMBER OF NODES : ");
    scanf("%d",&n);
    create(head2,n);
    struct node*list3=merge(head1,head2);
    display(list3);

    }
    