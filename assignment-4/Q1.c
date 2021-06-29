// WAP to extract a substring from the middle of a string.

#include <stdio.h>

int main()
{
   char string[100], sub_string[100];
   int position, length, c = 0;
 
   printf("Input a string\n");
     gets(string);
 
   printf("Enter the position and length of substring\n");
   scanf("%d %d", &position, &length);
 
   for(c = 0; c < length ; c++)
   {
      sub_string[c] = string[position+c-1];
     
   } 
   sub_string[c] = '\0';
 
   printf("Required substring is \" %s \" \n", sub_string);
   return 0;

}