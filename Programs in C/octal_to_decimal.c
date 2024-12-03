// WAP to convert octal number to decimal number

#include <stdio.h>
#include <math.h>

int main()
{
    int number = 21, remainder;
    int num = number,i=0,result=0;
    while (num != 0)
    {
        remainder = num % 8;
        num = num / 8;
        result += remainder*pow(10,i);
        i++;
    }
    printf("%d",result);
   
    return 0;
}
