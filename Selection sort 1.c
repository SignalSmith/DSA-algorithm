#include<stdio.h>

  void main()
  {
      int i,j,n,temp;
      printf("\n enter the no of elements in array : ");
      scanf("%d",&n);
      printf("\n enter %d elements : ",n);
      int arr[n];
      for(i=0;i<n;i++)
      {
          scanf("%d",&arr[i]);
      }
      printf("\n the unsorted array is [ ");
      for(i=0;i<n;i++)
      {
          printf(" %d",arr[i]);
      }
      printf("]");




      for(i=0;i<n-1;i++)
      {
          int min=i;
          for(j=i+1;j<n;j++)
          {
              if(arr[j]<arr[min])
              {
                  min=j;
              }
          }
          if(min!=i)
          {
              temp=arr[i];
              arr[i]=arr[min];
              arr[min]=temp;
          }
      }

       printf("\n the sorted array is [ ");
      for(i=0;i<n;i++)
      {
          printf(" %d",arr[i]);
      }
      printf("]");

  }
