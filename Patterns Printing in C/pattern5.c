//WAP to make a pattern like    A      where user will give number of rows as input
//                              bC
//                              DeF
//                              gHiJ 

#include<stdio.h>
#include<string.h>

int main()
{
    int row;
    char alphabet='a';
    printf("Enter the number of rows you want \n");
    scanf("%d",&row);
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <=i ; j++)
        {
            printf("%c",alphabet-32);
            alphabet++;
            
        }
        printf("\n");
    }
    
    return 0;
}