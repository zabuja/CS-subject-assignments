//Write a C Program to modify value stored in another variable using pointer.


#include <stdio.h>


int main()
{
	int num = 20;
	int *ptr = &num;
	printf("value of num before modifying it's value: %d\n", num);
	printf("value of num before: (using pointer): %d\n", *ptr);
	*ptr = 5;
	printf("value of num after modifying it's value: %d\n", num);
	printf("value of num after: (using pointer): %d\n", *ptr);
        return 0;
}
