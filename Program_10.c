//Write a C Program to make a valid pointer as NULL pointer.


#include <stdio.h>



int main()
{
	int num = 100;
	int *ptr = &num;
	if(ptr == NULL)
		printf("It is a null pointer \n");
	else
		printf("It is a valid pointer\n");
	ptr = NULL;
	
	if(ptr == NULL)
		printf("It is a null pointer\n");
	else
		printf("It is a valid pointer\n");

        return 0;
}
