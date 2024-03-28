#include <stdio.h>
#include<stdlib.h>



typedef struct node{
    struct node* next;
    struct node* prev;
    char c;
}node;
node *head=NULL;int q=-1;
node* create()
{
    node* t ;
    t= (node*)malloc(sizeof(node));
    return t;
}
void add(node *t)
{
    node *a;
    if(head==NULL)
    {
        head=t;
        head->next=NULL;
        head->prev = NULL;
        //q++;
    }
    else
    {
        a=head;
        while(a->next!=NULL)
        {
            a=a->next;
            
        }
        //q++;
        a->next=t;
        t->prev=a;
        t->next=NULL;
    }
}
void print()
{
    node* ab;
    node* d;
    ab=head;
    if(ab==NULL)
    {
        printf("Empty node");
    }
    else
    {
        while(ab!=NULL)
        {
            d=ab;
			ab=ab->next;
            
        }
    }
    while(d!=NULL)
    {
		printf("%c",d->c);
		d=d->prev;
    		
	}
}
void read()
{
    node* temp;
    char S[20],i,n;
    printf("Enter the string  ");
    scanf("%s",S);
    for(i=0;S[i]!='\0';i++)
    {
        //printf("%c",S[i]);
        temp=(node*)malloc(sizeof(node));
        temp->c=S[i];
		add(temp);
		q++;
    }
    print();
}
void check()
{
	node* start=head;
	node* end=head;
	int p=0,i=0;
	while (end->next!=NULL)
	{
		end=end->next;	
	}
	
	while(start!=NULL||end!=NULL)
	{
	if(end->c!=start->c)
	{
		p=2;
		break;
	}
	i++;
	end=end->prev;
	start=start->next;
	}
	if(p==0)
	{
		printf("\npalindrome");
	}
	else
	{
		printf("not a palindrome");
	}
}


void main()
{
	read();
	check();
}
