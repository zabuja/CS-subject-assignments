#include <stdio.h>
void increment()
{
   auto int x = 1;
   printf("%d\n", x);
   x = x + 1;
}

int main()
{
  increment();
  increment();
  increment();
  return 0;
}



