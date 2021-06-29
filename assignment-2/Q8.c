#include<stdio.h>
int main()
{
      int s=0,l;
      int n,t;
      printf("Enter Three Digit Number : ");
      scanf("%d",&n);
      t=n;
      while(n>0)
      {
            l=n%10;
            s=s+(l*l*l);
            n=n/10;
      }
      if(s==t)
            printf("%d is an Armstrong Number",t);
      else
            printf("%d is Not an Armstrong Number",t);
      return 0;
}
