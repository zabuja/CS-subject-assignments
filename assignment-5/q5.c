//print union members


#include<stdio.h>
#include<string.h>


union details
{
    char name[20];
    char home_add[30];
    char hostel_add[30];
    char city[10];
    char state[10];
    char zip;
};

int main()
{
   union details a;
   printf("Enter your name: \n");
   gets(a.name);
   printf("\n %s",a.name);

   printf("\nEnter your home address: ");
   gets(a.home_add);
   printf("\n %s",a.name);

   printf("\nEnter your hostel address: \n");
   gets(a.hostel_add);
   printf("\n %s",a.hostel_add);

   printf("\nEnter your city: \n");
   gets(a.city);
   printf("\n %s",a.city);

   printf("\nEnter your state: \n");
   gets(a.state);
   printf("\n %s",a.state);

   printf("\nEnter your zip: \n");
   scanf("%s", a.zip);
   gets(a.zip);
   printf("\n %s",a.zip);

return 0;
}