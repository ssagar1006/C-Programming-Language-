// WAP to multiply two 2D arrays..

#include <stdio.h>

int main()
{
    int array1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int count1 = 2, count2 = 2, count3 = 2, array2[3][3], temp;

    for (int i = 0; i <= count1; i++)
    {
        for (int j = 0; j <= count2; j++)
        {
            array2[i][j] = array1[j][i];
        }
    }

    for (int i = 0; i <= count1; i++)
    {
        for (int j = 0; j <= count1; j++)
        {
            printf("%d ", array3[i][j]);
        }
        printf("\n");
    }

    return 0;
}