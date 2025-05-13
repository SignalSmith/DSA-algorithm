#include<stdio.h>

  void main()
  {
      int i,j,n,temp;
      printf("enter the no of elements in the array : ");
      scanf("%d",&n);
      printf("\n enter %d elements : ",n);
      int arr[n];

      for(i=0;i<n;i++)
      {
          scanf("%d",&arr[i]);
      }
      printf("\n the unsorted array is : [");
      for(i=0;i<n;i++)
      {
          printf(" %d", arr[i]);
      }

      printf("]");

       for(i=1;i<n;i++)
       {
           temp=arr[i];
           j=i-1;
           while(j>=0 && arr[j]>temp)
           {
               arr[j+1]=arr[j];
               j--;
           }
           arr[j+1]=temp;
       }
       printf("\n the sorted array is : [");
      for(i=0;i<n;i++)
      {
          printf(" %d", arr[i]);
      }

      printf("]");

  }
