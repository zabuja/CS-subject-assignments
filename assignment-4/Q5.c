// WAP to show the use of at least Six string handling functions in the standard library.

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "hello";
    char str2[] = "CooL";
    char str3[] = "nice";
    char str4[] = "COOL";

    int a = strlen(str1);          //1
    printf("The length of str1 is %d\n", a);

    printf("\n");

    printf("Reverse of str3 is %s\n", strrev(str3)); //2
    
    printf("\n");

    strcat(str2, str1);                            //3
      printf("Now the str2 is %s\n", str2);

     printf("\n");

    if(strcmpi(str2, str4))               //4
       printf("equal strings\n");
 
    printf("\n");

    printf("Converting to uppercase %s\n", strupr(str3));     //5

    printf("\n");

    printf("Converting to lower case %s\n", strlwr(str4));        //6

    return 0;
}
