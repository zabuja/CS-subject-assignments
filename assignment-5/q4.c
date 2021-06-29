//diff b/w struct union

#include <stdio.h> 

struct Employee 
{
  int age[10];  
  char Name[50];
  char Department[20];
  float Salary[10];
};

union Person 
{
  int ag;  
  char Nam[10];
  char Departent[20];
  float Salary;
};

int main() 
{
  struct Employee emp1;
  union Person Person1;
    
  printf(" The Size of Employee Structure = %d\n", sizeof (emp1) );
  printf(" The Size of Person Union = %d\n", sizeof (Person1));

  return 0;
}