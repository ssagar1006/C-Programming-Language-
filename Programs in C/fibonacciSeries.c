// WAP to print fibonaci series till nth term...

#include <stdio.h>
#include <string.h>

int fibonacci(int n)
{
    int k = 0;
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int num;
    printf("Enter the term you want series till\n");
    scanf("%d", &num);
    // loop to print every term till num..
    for (int i = 0; i < num; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
