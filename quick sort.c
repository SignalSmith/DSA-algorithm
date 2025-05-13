#include<stdio.h>

int partition(int[],int,int);

void quicksort(int[],int,int);

void main()

{

	int n,i,j;

	printf("\nEnter the size of the array: ");

	scanf("%d",&n);

	int a[n];

	printf("\nEnter the elements of the array: ");

	for(i=0;i<n;i++)

	scanf("%d",&a[i]);

	printf("\nThe array before sorting is: ");

	for(i=0;i<n;i++)

	printf("%d",a[i]);

	quicksort(a,0,n-1);

	printf("\nThe array after sorting is: ");

	for(i=0;i<n;i++)

	printf("%d",a[i]);

}

int partition(int a[],int lb,int ub)

{

	int start,end,pivot,temp;

	pivot=a[lb];

	start=lb;

	end=ub;

	while(start<end)

	{

		while(a[start]<=pivot)

		start++;

		while(a[end]>pivot)

		end--;

		if(start<end)

		{

			temp=a[start];

			a[start]=a[end];

			a[end]=temp;

		}

	}

	temp=a[lb];

	a[lb]=a[end];

	a[end]=temp;

	return end;

}

void quicksort(int a[],int lb,int ub)

{

	int loc;

	if(lb<ub)

	{

	loc=partition(a,lb,ub);

	quicksort(a,lb,loc-1);

	quicksort(a,loc+1,ub);

    }

}
