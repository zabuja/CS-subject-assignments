// WAP to Check if a given string, is Palindrome

#include <stdio.h>

int main()
{
    char string[100];
    int i, length,count;
    int foo = 0;
    
    printf("Enter a string:");
      scanf("%s", string);
    

    i=0;
    while(string[i]!='\0')
    {
        count++;
        i++;
    
    }

    length = count;
    
    for(i=0;i < length ;i++)
    {
        if(string[i] != string[length-i-1])
        {
            foo = 1;
            break;
        }
    }
    
    if (foo) {
        printf("%s is not a palindrome", string);
    }    
    else {
        printf("%s is a palindrome", string);
    }
    return 0;
}