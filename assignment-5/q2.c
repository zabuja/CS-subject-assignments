//Write a C program to perform the Addition, Subtraction, Multiplication and Divison operations between two complex numbers using Structure

#include<stdio.h>

struct comp
 {
    int real;
    int img;
 };


int main()
{   
    struct comp a,b,res;
    printf("Enter the first complex number a+ib only the real and imginary part: \n");
    printf("Real part: \n");
    scanf("%d", &a.real);
    printf("imginary part: \n");
    scanf("%d", &a.img);

    printf("Enter the second complex number only the real and imginary part: \n");
    printf("Real part: \n");
    scanf("%d", &b.real);
    printf("Imaginary part: \n");
    scanf("%d", &b.img);

    int choice;

    printf("Press 1 to add two complex numbers.\n");
    printf("Press 2 to subtract two complex numbers.\n");
    printf("Press 3 to multiply two complex numbers.\n");
    printf("Press 4 to divide two complex numbers.\n");
    printf("Press 5 to exit.\n");
    printf("Enter your choice\n");
    scanf("%d", &choice);
   
    switch (choice)
    {
    case 1:
        res.real = a.real + b.real;
        res.img  = a.img  + b.img;
         printf("Sum of the complex numbers = %d + i%d", res.real, res.img);
        break;
    case 2:
        res.real = a.real - b.real;
        res.img = a.img - b.img; 
        break;

    case 3:
        res.real = a.real*b.real - a.img*b.img;
        res.img = a.img*b.real + a.real*b.img;
        break;

    case 4:
    res.real = (a.real*b.real + a.img*b.img)/(b.real*b.real+b.img*b.img);
    res.img = (a.img*b.real - a.real*b.img)/(b.real*b.real + b.img*b.img);

        break;

    default: 
        printf("Invalid choice.");
        break;
    }
    return 0;
}