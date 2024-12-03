// WAP to add two matrices having same number of rows and columns...

#include<stdio.h>

int main()
{
    int rows,columns;
    printf("Enter the number of rows ");
    scanf("%d",&rows);
    
    printf("Enter the number of columns ");
    scanf(" %d",&columns);
    int array1[rows][columns]; //= {{1,2,3},{4,5,6},{7,8,9}};
    int array2[rows][columns]; //= {{1,2,3},{4,5,6},{7,8,9}};
    int array3[rows][columns];
    // taking input of matrix 1
    printf("for matrix 1\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter the value at row %d and column %d ",i+1,j+1);
            scanf("%d",&array1[i][j]);
        }
    }
    // taking input of matrix 2
    printf("for matrix 1\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter the value at row %d and column %d ",i+1,j+1);
            scanf("%d",&array2[i][j]);
        }
    }
    
    
    // adding both arrays 
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= columns; j++)
        {
           array3[i][j]=array2[i][j] + array2[i][j];
        }
        
    }
    
    // print the final array..

    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= columns; j++)
        {
            printf("%d ",array3[i][j]);
        }printf("\n");
        
    }

     return 0;
 }