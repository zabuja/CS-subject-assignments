// WAP to compare two strings without using strcmp() function


#include <stdio.h>

int main()
{
    char string1[100],string2[100];  
    int i,c=0;
 
    printf("Enter  string1: ");
    gets(string1);
    printf("Enter  string2: ");
    gets(string2);


    int count1=0, count2=0;
    i=0;
    while(string1[i]!='\0')
    {
        count1++;
        i++;
    }
    i=0;
    while(string2[i]!='\0')
    {
        count2++;
        i++;
    
    }
    

    int len1 = count1;
    int len2 = count2;

    //if(strlen(string1)==strlen(string2))
    if(len1 == len2)
    {
    	for(i = 0; string2[i]!='\0' ; i++)  
        {
        	if(string1[i]==string2[i])
        	 c++;
 	    }
 	    if(c==i)
          printf("strings are equal");
        else
          printf("strings are not equal");
    }
    else
     printf("strings are not equal");
    return 0;

}