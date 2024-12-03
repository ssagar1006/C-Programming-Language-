// WAP to find hcf of two number using recursion..

#include <stdio.h>

// int hcf(int num1, int num2)
// {
//     if (num2!=0)
//     {                                          // SOLUTION GIVEN ON GFG..
//         return hcf(num2, num1%num2);
//     }
//     else num1;

// }

int hcf(int num1, int num2, int min)
{
    if (num1 % min == 0 && num2 % min == 0)
    {
        return min;
    }
    else
        return hcf(num1, num2, min - 1);
}

int main()
{
    int num1, num2;
    printf("Enter the two numbers \n");
    scanf("%d%d", &num1, &num2);
    int min = num1;
    if (num1 > num2)
        min = num2;
    printf("HCF of %d and %d is %d", num1, num2, hcf(num1, num2, min));
    return 0;
}