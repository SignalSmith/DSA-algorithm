#include<stdio.h>

  void main()
  {
      int i,j,n,temp,flag;
      printf("enter the no of elements : ");
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

       for(i=0;i<n-1;i++)
       {
           for(j=0;j<n-1-i;j++)
           {
                flag=0;
               if(arr[j]>arr[j+1])
               {
                   temp=arr[j];
                   arr[j]=arr[j+1];
                   arr[j+1]=temp;
                   flag++;
               }
           }
           if(flag==0)
           {
               break;
           }
       }

       printf("\n the sorted array is : [");
      for(i=0;i<n;i++)
      {
          printf(" %d", arr[i]);
      }
      printf("]");
  }
