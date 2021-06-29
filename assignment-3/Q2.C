// WAP to program to multiply two 3X3 Matrices.


#include <stdio.h>

int main()
{ 
    int matrix_1[3][3], matrix_2[3][3];
    int result_matrix[3][3];

    printf("Enter the first matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            scanf("%d", &matrix_1[i][j]);   
        }
    }


    printf("Enter the second matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            scanf("%d", &matrix_2[i][j]);   
        }
    }


    printf("multiply of the matrix=\n");    
    for(int i = 0; i < 3; i++)    
     {    
       for(int j = 0; j < 3; j++)    
        {    
           result_matrix[i][j]=0;    
           for(int k = 0; k<3; k++)    
            {    
               result_matrix[i][j]+=matrix_1[i][k]*matrix_2[k][j];    
            }    
        }    
     }   

    for(int i = 0; i < 3; i++)    
     {    
       for(int j = 0; j < 3; j++)    
        {    
           printf("%d\t", result_matrix[i][j]);    
        }    
        printf("\n");    
     }   
     
      
    return 0;
}