#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
struct node *head=NULL;
struct node *temp;
struct node *newnode;
void insertatbeg(int num)
{
	newnode=(struct node *) malloc(sizeof(struct node));
	newnode->data=num;
	newnode->next=NULL;
	if(head==NULL)
		head=newnode;
	else
	{
		newnode->next=head;
		head=newnode;
	}
}
void traverse()
{
	printf("\nList Contains Following Data\n");
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
void insertatlast(int num)
{
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=num;
	newnode->next=NULL;
	if(head==NULL)
		head=newnode;
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	}
}
void insertbefore(int source,int num)
{
	if(head==NULL)
	{
		printf("\nList is empty");
	}
	else
	{
		int found=0;
		if(head->data==source)
		{
			newnode=(struct node *)malloc(sizeof(struct node));
			newnode->data=num;
			newnode->next=head;
			head=newnode;
			printf("\nNode Inserted");
			found=1;
		}
		else
		{
			temp=head;
			while(temp!=NULL)
			{
				if(temp->next->data==source)
				{
					newnode=(struct node *)malloc(sizeof(struct node));
					newnode->data=num;
					newnode->next=temp->next;
					temp->next=newnode;
					printf("\nNumber Inserted");
					found=1;
					break;
				}
				temp=temp->next;
			}
		}
		if(found==0)
			printf("\nSource Not Found");
		
	}
}
void deleteatbeg()
{
	if(head==NULL)
	{
		printf("\nList is Empty Unable to delete");
	}
	else
	{
		temp=head;
		head=head->next;
		printf("\nElement To Be Delete is : %d",temp->data);
		free(temp);
	}
}
void deleteatlast()
{
	if(head==NULL)
	{
		printf("\nList is empty, unable to Delete");
	}
	else
	{
		if(head->next==NULL) //only one element is presnet so it is deleted
		{
			temp=head;
			head=NULL;
			printf("\nNumber to Be Delete=%d",temp->data);
			free(temp);
		}
		else
		{
			temp=head;
			while(temp->next->next!=NULL)
			{
				temp=temp->next;
			}
			struct node *r=temp->next;
			temp->next=NULL;
			printf("\nNumber to Be Delete =%d",r->data);
			free(r);
		}
	}
}
int main()
{
	
	insertatbeg(10);
	insertatbeg(5);
	insertatbeg(2);
	insertatlast(20);
	insertatlast(30);
	insertbefore(20,15);
	traverse();
	deleteatlast();
	traverse();
	return 0;
}