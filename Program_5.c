//Write a C program to swap two numbers using pointers.


#include <stdio.h> 



int main()
{
    int x, y;
    int *a, *b;
    printf("Enter Value of x: ");
    scanf("%d", &x);
    printf("\nEnter Value of y: ");
    scanf("%d", &y);
    printf("\nBefore Swapping: x = %d, y = %d",x,y);
    a = &x;
    b = &y;
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("\nAfter Swapping: x = %d, y = %d", x, y);
    return 0;
}
