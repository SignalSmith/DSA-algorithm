#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=0,*newnode,*temp;
void create()
{
int choice=1 ;
while (choice==1)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the data: ");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	{
		head=newnode;
		temp=newnode;
	}
	else
	{
	temp->next=newnode;
	temp=newnode;
    }
    printf("\nDo you want to contineu? ");
    scanf("%d",&choice);
}
}
void count()
{
	int count=0;
	temp=head;
	while(temp!=0)
	{
		temp=temp->next;
		count++;
	}
	printf("\nThe length of the link list is: %d",count);
}
void display()
{
	temp=head;
	while(temp!=0)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}
void InsertFirst()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the data: ");
	scanf("%d",&newnode->data);

	newnode->next=head;
	head=newnode;
}
void InsertLast()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the data: ");
	scanf("%d",&newnode->data);

	temp->next=newnode;
	temp=newnode;
	newnode->next=0;
}
void InsertAtPossition()
{
	int pos,i=1;
	printf("\nEnter the possition: ");
	scanf("%d",&pos);
	int count=0;
	temp=head;
	while(temp!=0)
	{
		temp=temp->next;
		count++;
	}
	if(pos>count)
	{
		printf("\nINVALID POSSITION");
	}
	else
	{
		temp=head;
		while(i<pos)
		{
			temp=temp->next;
			i++;
		}
		newnode=(struct node*)malloc(sizeof(struct node));
	    printf("\nEnter the data: ");
        scanf("%d",&newnode->data);

	    newnode->next=temp->next;
	    temp->next=newnode;
	}
}
int main()
{
	int ch;
	while (1)
	{
		printf("\n 1to create \n 2to count \n 3to display \n 4to insert node at begining \n 5to insert node at last \n 6to insert at desired posstion\n ");
		scanf("%d",&ch);
		if(ch==1)
		create();
		else if(ch==2)
		count();
		else if(ch==3)
	    display();
		else if(ch==4)
		InsertFirst();
		else if(ch==5)
		InsertLast();
		else if(ch==6)
		InsertAtPossition();
		else
		{
			printf("\n Wrong Choice");
		}

	}
}
