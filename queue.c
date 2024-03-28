#include <stdio.h>
#include<stdlib.h>


typedef struct node
{
	int data;
	struct node* next;
}node;
node* Q;
node* head=NULL;
node* rear=NULL;
void insert()
{
	node* temp;
	node* t=head;
	temp=(node*)malloc(sizeof(node));
	if(temp==NULL)
	{
		printf("Error");
	}
	else
	{
		int d;
		printf("Enter the item to be inserted");
		scanf("%d",&d);
		temp->data=d;
		if(head==NULL)
		{
			head=temp;
			head->next=NULL;
		}
		else
		{
			while(t->next!=NULL)
			t=t->next;
			t->next=temp;
			temp->next=NULL;
		}
	}
}
void disp()
{
	node* t;
	t=head;
	while(t!=NULL)
	{
		printf("%d",t->data);
		t=t->next;
	}
}
void dele()
{
	node* t;
	t=head;
	if(t==NULL)
	{
		printf("No element in  the queue");
		
	}
	else
	{
		
		printf(" %d",t->data);
		head=t->next;
		free(t);
	
	}
}
void reada()
{
	int n,c=1;
	while(c==1)
	{
		printf("\n1.Enter 2.Delete   3.Display 4.Exit");
		scanf("%d",&n);
		printf("\n");
		switch(n)
		{
			case 1:			
					insert();
		   		    break;
			case 2:
					dele();
					break;	
			case 3:
				   disp();
				break;
			case 4 :c=0;
		}
}
}
void main()
{

	reada();
}
 

