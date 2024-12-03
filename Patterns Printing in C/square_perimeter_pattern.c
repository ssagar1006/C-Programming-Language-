// WAP to print pattern of perimeter of square in form of *
// like         * * * *
//              *     *
//              *     *
//              * * * *
#include <stdio.h>

int main()
{
    int count = 10;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (i == 0 || j == 0 || j == count - 1 || i == count - 1)
            {
                printf("%c ", '*');
            }
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}