#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=0,*temp,*newnode,*prevnode;
void create()
{
	int choice=1;
	while(choice==1)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
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
	printf("\nThe link list is: ");
	while(temp!=0)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}
void deletionAtFirst()
{
	struct node *p;
	p=head;
	head=head->next;

	free(p);
}
void deletionAtLast()
{
	temp=head;
	while(temp->next!=0)
	{
		prevnode=temp;
		temp=temp->next;
	}
	if(temp==head)
	{
		head=0;
		free(temp);
	}
	else
	{
		prevnode->next=0;
		free(temp);
	}
}
void deletionAtPossition()
{
	int i=1,pos;
	struct node *nextnode;
	printf("\nEnter any possition: ");
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
		printf("\nThe possition is Invalid");
	}
	else
	{
		temp=head;
		while(i<pos-1)
		{
			temp=temp->next;
			i++;
		}
		nextnode=temp->next;
		temp->next=nextnode->next;
		free(nextnode);
	}
}
int main()
{
	int ch;
	while(1)
	{
	printf("\n1 for Create\n2 for Count\n3 for Display\n4 for DeletionAtFirst\n5 for DeletionAtLast\n6 fot DeletionAtPossition\n");
	scanf("%d",&ch);
	if(ch==1)
	create();
	else if(ch==2)
	count();
	else if(ch==3)
	display();
	else if(ch==4)
	deletionAtFirst();
	else if(ch==5)
	deletionAtLast();
	else if(ch==6)
	deletionAtPossition();
	else
	{
		printf("\nWrong Choice");
		exit(1);
	}

    }
	return 0;

}
