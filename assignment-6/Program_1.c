//Write a C Program to read array elements and print with addresses using pointer.


#include <stdio.h>


int main()
{
    int arr[100];       
    int *ptr;           
    int  i,n;
    ptr=&arr[0];         
    printf("Enter no of elements to be inserted into the array: ");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i < n; i++)
        scanf("%d",ptr+i); 
    printf("Entered array elements are:\n");
    for(i=0;i<n;i++)
        printf("%4d",*(ptr+i));
    return 0;
}
