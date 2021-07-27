//Write a C program to sort an array using pointers.


#include <stdio.h>



int main()
{
  int arr[100],n,i,j,t;
  printf("Enter no of elements to be inserted into the array: ");
  scanf("%d",&n);
  int *ptr = &arr[0];
  printf("Enter array elements:\n");
    for(i=0;i < n; i++)
        scanf("%d",ptr+i); 
   for (i = 0; i < n; i++)
   {
    for (j = i + 1; j < n; j++)
	{
      if (*(ptr + j) < *(ptr + i))
	  {
          t = *(ptr + i);
          *(ptr + i) = *(ptr + j);
          *(ptr + j) = t;
        }
    }
  }
  printf("Array elements after sorting are:\n");
  for(i=0;i<n;i++)\
   {
    printf("%4d",*(ptr+i)); }
  
  return 0;
}
