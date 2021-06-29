
#include<stdio.h>
void main()
{
    int a,b;
    char op;
    printf("\n Enter two number a,b, an operator: ");
    scanf("%d %d %c",&a,&b,&op);
    switch(op)
    {
        case'+':
           printf("\n Sum=%d",a+b);break;
        case'-':
           printf("\n Difference=%d",a-b);break;
        case'*':
           printf("\n Product=%d",a*b);break;
        case'/':
           printf("\n Quotient=%d",a/b);break;
        case'%':
           printf("\n Remainder=%d",a%b);break;
        default:
           printf("\n Please enter a valid input");
        break;
    }
}
