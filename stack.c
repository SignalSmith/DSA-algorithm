#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *top=0,*newnode,*temp;
void push()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the data: ");
	scanf("%d",&newnode->data);
	newnode->next=top;
	top=newnode;
}
void pop()
{
	temp=top;
	if(top==0)
	{
		printf("\nThe list is empty");
	}
	else
	{
		printf("The deleted item: %d",top->data);
		top=top->next;
		free(temp);
	}
}
void peek()
{
	temp=top;
	if(top==0)
	{
		printf("\nThe list is empty");
	}
	else
	{
		printf("\nThe peeked item is: %d",top->data);
	}
}
void display()
{
	temp=top;
	if(top==0)
	{
		printf("\nThe list is empty");
	}
	else
	{
		while(temp!=0)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n1 for Push\n2 for Pop\n3 for Peek\n4 for Display\n");
		scanf("%d",&ch);
		if(ch==1)
		push();
		else if(ch==2)
		pop();
		else if(ch==3)
	    peek();
	    else if(ch==4)
	    display();
	    else
	    {
	    	printf("\nWRONG CHOICE");
	    	exit(1);
		}
	}
	return 0;
}
