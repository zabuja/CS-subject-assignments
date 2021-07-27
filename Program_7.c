//Write a program in C to print a string in reverse using a pointer.


#include<stdio.h>


int main()
{
    char str[50];
    char revStr[50];
    char *strPtr = str;
    char *revPtr = revStr;
    int len = -1;
    printf("Enter The String Without Space: ");
    scanf("%s",str);
    while(*strPtr)
    {
      strPtr++;
      len++;
    }
    while (len >= 0)
    {
      strPtr--;
      *revPtr = *strPtr;
      revPtr++;
      --len;
    }
    *revPtr='\0';
    printf("\n\nReverse String is: %s",revStr);
return 0;
}
