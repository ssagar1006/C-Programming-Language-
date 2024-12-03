// WAP to form a pattern        1
//                             121
//                            12321 and so on

#include <stdio.h>

int main()
{
    int count = 5, num = 1;
    for (int i = 0; i <= count; i++)
    {
        for (int j = 0; j <= count; j++)
        {
            if (j > count - i - 1)
            {
                printf("%d", num);
                num++;
            }
            else
                printf(" ");
        }

        num--;
        for (int j = count; j < count + i; j++)
        {
            if (j < count + i)
            {
                num--;
                printf("%d", num);
            }
            else
                printf(" ");
        }
        printf("\n");
        num = 1;
    }
    return 0;
}