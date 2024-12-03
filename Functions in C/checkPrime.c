// WAP to check whether a number is prime or not using function...

#include <stdio.h>

// non recursively

// void checkPrime(int n)
// {
//     int check = 0;
//     for (int i = 2; i <= n; i++)
//     {
//         if (n % i == 0)
//             check++;
//     }
//     if (check > 1)
//         printf("not a prime number");
//     else
//         printf("prime number");
// }

int checkPrime(int num, int i)
{
    if(num%i == 0 && i<num)   return 0;
    else if(i>=num)   return 1;
    return checkPrime(num,i+1);
}

int main()
{
    int num;
    printf("Enter the number you want to check\n");
    scanf("%d",&num);
    int ans =checkPrime(num,2);
    if(ans == 0)  printf("not a prime number");
    else  printf("prime number");
    return 0;
}
