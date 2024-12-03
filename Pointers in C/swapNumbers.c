// WAP to swap two variable without using temporary variable...

#include <stdio.h>
#include <string.h>

void swap(int *num1, int *num2)
{
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
}

int main()
{
    int num1 = 12, num2 = 15;
    printf("%d   %d \n", num1, num2);
    swap(&num1, &num2);
    printf("%d   %d ", num1, num2);
    return 0;
}