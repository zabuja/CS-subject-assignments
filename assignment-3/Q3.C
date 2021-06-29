// WAP to to count and display positive, negative, odd and even numbers in an array.

    #include<stdio.h>   
      
    int main()  
    {  
        int a[100];
        int i, num;
        int positive = 0, negative = 0, even = 0, odd = 0, zero = 0;  
        printf("\n Enter the length of the array: ");
        scanf("%d", &num);
        printf("Enter the elements \n"); 
        for (i = 0; i < num; i++)
        {
              scanf("%d", &a[i]);  
        }
         
        for(i = 0; i < num; i++)  
        {  
           if(a[i] == 0)  
             zero++;  
           if(a[i] > 0)  
                positive++;  
           if(a[i] % 2 == 0 )  
                even++;  
           if(a[i] <0) 
                negative++;  
           if(a[i %2 != 0]) 
                odd++;  
        }  
      
        printf("\nPositive: %d\n", positive);  
        printf("Negative: %d\n", negative);  
        printf("Even: %d\n", even);  
        printf("Odd: %d\n", odd);  
        printf("Zero: %d\n", zero);  
      
        return 0;  
    }  