#include<stdio.h>
//program for continue statement
int main()
{   int i;
for(i=0;i<=10;i++)
{
    if(i==5)
        continue;
    printf("%4d",i);

    }
printf("\n");
for(i=0;i<=10;i++)
{
    if(i==5)
        break;
    printf("%4d",i);

    }


return 0;
}


