#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
    struct node *next;
};
struct node *newnode,*temp;
struct node *rear=0;
struct node *front=0;
void enqueue()
{
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter the data: ");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(front==0&&rear==0)
	{
		front=newnode;
		rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
}
void dequeue()
{
	temp=front;
	if(front==0&&rear==0)
	{
		printf("\nThe list is empty");
	}
	else
	{
		printf("\nThe deleted item is: %d",front->data);
		front=front->next;
		free(temp);
	}
}
void display()
{

	if(front==0&&rear==0)
	{
		printf("\nThe list is empty");
	}

	else
	{
		temp=front;
		printf("\nThe Queue is: ");
		while(temp!=0)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
	}
}
void main()
{
	int ch;
	while(1)
	{
		printf("\n1 for Enqueue\n2 for Dequeue\n3 for Display\n");
		scanf("%d",&ch);
		if(ch==1)
		enqueue();
		else if(ch==2)
		dequeue();
		else if(ch==3)
		display();
		else
		{
			printf("\nWrong Choice");
			exit(1);
		}
	}

}
