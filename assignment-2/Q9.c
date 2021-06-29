#include <stdio.h>

 

int main()

{
    int num1, num2, min;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    min = (num1 < num2) ? num1 : num2;

    while (1) 
    {
        if (min % num1 == 0 && min % num2 == 0)
         {
            printf("The LCM of %d and %d is %d.", num1, num2, min);
            break;
         }
        ++min;
    }

    int gcd;
    gcd = (num1*num2)/min;
    printf("The GCD of %d and %d is %d.", num1, num2, gcd);
    return 0;
}

