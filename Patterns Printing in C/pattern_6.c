//WAP to draw a pattern like     1       and so on
//                               12
//                               123
//                               1234  
#include<stdio.h>

int main()
{
    int row,num=1;
    printf("Enter the number of rows you want");    scanf("%d",&row);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d",num);
            num++;
        }
        printf("\n");
        num=1;
    }
    

    return 0;
}
