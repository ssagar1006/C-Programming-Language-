// WAP to count number of zeros(0) and ones(1) in an array...

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements you want in the array\n");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements\n");
    // input of array from user
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int zero = 0, one = 0;
    // for loop to check number of zeros and one in the array
    for (int i = 0; i < n; i++)
    {
        if (array[i] == 0)
            zero++;
        else if (array[i] == 1)
            one++;
    }
    printf("no. of zeros: %d\n", zero);
    printf("number of ones: %d", one);

    return 0;
}