// WAP to merge two sorted arrays into another array in a sorted order.


#include <stdio.h>
#include<stdlib.h>
 
int main()
{
int m,n;
int arr1[100], arr2[100], arr3[100];

  
  printf("\nEnter the size of Array 1 : ");
  scanf("%d",&m);

  
  printf("\nInput the Array 1 elements : ");
  for(int i = 0; i<m; i++)
    {
      scanf("%d",&arr1[i]);
    }
  
  
  printf("\nEnter the size of Array 2 : ");
  scanf("%d",&n);

  printf("\nInput the Array 2 elements : ");
  for(int j = 0;j<n;j++)
    {
      scanf("%d",&arr2[j]);
    }

  int k = m+n;
  int c,d;
 

  for(c = 0; c < m; c++)
    {
      arr3[c] = arr1[c];
    }

  for(c = m, d = 0 ; c < k; c++, d++)
    {
       arr3[c] = arr2[d];
    }
 int temp;
  for(int i = 0; i < m+n; i++)
    {
       for(int j = i+1; j < m+n; j++)
         {
            if(arr3[i] > arr3[j])
               {
                  temp = arr3[i];
                  arr3[i] = arr3[j];
                  arr3[j] = temp;
               }
         }
    }

  printf("\nThe Merged Sorted Array : ");
  for(int i = 0; i < n + m; i++)
    {
       printf("%d ",arr3[i]);
    }
 printf("\n");
 return 0;
}