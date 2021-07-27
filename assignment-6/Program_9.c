//Write a C Program to read and print student details using structure pointer, demonstrate example of structure with pointer.


#include <stdio.h>


typedef struct student
{
    char name[30];
    int roll;
    int age;
    float per;
}student;

void main()
{
    student std;
    student *ptr;       
    ptr= &std; 
    printf("Enter details of student : \n");
    printf("\nEnter Name of student : ");
    scanf("%s",ptr->name);
    printf("\nEnter Roll No of student : ");
    scanf("%d",&ptr->roll);
    printf("\nEnter Age of student : ");
    scanf("%d",&ptr->age);
    printf("\nEnter Percentage of student : ");
    scanf("%f",&ptr->per);
    printf("\nEntered details of student are : \n");
    printf("\nName : %s \n\nRollNo: %d \n\nAge: %d \n\nPercentage: %.02f\n\n",ptr->name,ptr->roll,ptr->age,ptr->per);
}
