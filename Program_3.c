//Write a C program to return multiples value from function using Pointers.


#include <stdio.h>


void compute(int a, int b, int* multi, int* divide)
{
  *multi = a*b;
  *divide = a>b ? a/b : b/a;  // Returning multiple values using pointer
}


int main()
{
    int mul, div, x, y;
    printf("Enter two numbers: \n");
    scanf("%d%d", &x, &y);
    compute(x, y, &mul, &div);
    printf("The multiplication of the 2 no.s is %d\n",mul);
    printf("The division of the 2 no.s is %d\n",div);
    return 0;
}
