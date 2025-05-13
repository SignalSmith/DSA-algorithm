#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};
struct node * head = NULL;
void push(int val)
{
    struct node * newnode = malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=head;
    head=newnode;
}
void pop()
{
    struct node * temp;
    if(head==NULL)
    printf(" Stack is empty \n");
    else
    {
        printf("\n popped element = %d\n",head->data);
        temp=head;
        head=head->next;
        free(temp);
    }
}
void display()
{
    struct node * temp = head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
  push(30);
  push(20);
  push(10);
  printf("\n Linked list is: ");
  display();
  pop();
  printf("\n After pop new linked list is: ");
  display();
  pop();
  printf("\n After pop new linked list is: ");
  display();
  return 0;
}


