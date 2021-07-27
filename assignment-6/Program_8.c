//Write a program in C to make an array of pointers to the character to store a list of strings.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
  char *names[5], a[5];
  int l, i;
  char *x;
  printf("Enter 5 strings:\n");
  for (i = 0; i < 5; i++) 
  {
    scanf("%s", a); 
    l = strlen(a);
    x = (char *)malloc(l + 1);
    strcpy(x, a);
    names[i] = x;
  }
  printf("\nThe strings are:\n");
  for (i = 0; i < 5; i++)
    printf("%s\n", names[i]);
  return 0;
}
