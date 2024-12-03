// WAP to convert decimal number to octal number

#include<stdio.h>
#include<math.h>

int main()
{
    int number=21,sum=0,remainder;
    int num = number,i=0;
    while (num != 0)
    {
        remainder = num%10;
        num = num/10;
        sum += remainder*pow(8,i);
        i++;
    }
    printf("%d",sum);

    return 0;
}
