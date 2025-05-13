#include<stdio.h>
int main()
{
	int n,i,j;

	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	int a[n];

	printf("\nEnter the elements of the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	int min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
		  min=a[i];
		}
	}
	printf("\nThe minimum value is: %d",min);
}
