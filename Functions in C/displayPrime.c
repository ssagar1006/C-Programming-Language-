// WAP to show n prime numbers

#include <stdio.h>
#include <string.h>

// checkPrime function without using recursion..

// int checkPrime(int n)
// {
//     int check = 0;
//     for (int i = 2; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             check++;
//         }
//     }
//     if (check <= 1)
//         return 1;
// }

// checkPrime function using recursion
int checkPrime(int num, int i)
{
    if (num % i == 0 && i < num)
        return 0;
    else if (i >= num)
        return 1;
    return checkPrime(num, i + 1);
}

int main()
{
    int n, i = 0, num = 2;
    printf("Enter the number of prime numbers you want to display\n");
    scanf("%d", &n);
    while (i <= n)
    {
        if (checkPrime(num,2) == 1)
        {
            printf("%d ", num);
            i++;
        }
        num++;
    }
    return 0;
}
